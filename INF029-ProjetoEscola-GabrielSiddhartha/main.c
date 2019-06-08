#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define TAM_ALUNOS 2

typedef struct ficha_aluno{
	char nome[100], sexo, dnascimento[10], cpf[11];
	int idade, x, y, matricula[10];
} Aluno;

typedef struct ficha_professsor{
	char nome[100], sexo, dnascimento[10], cpf[11];
	int idade, x, y;
} Professor;

void flush_in(){
	int ch;
	do{
		ch = fgetc(stdin);
	}while (ch != EOF && ch !='\n');
}


int main() {

    char cpf2[11];
    char achou='F';
    int idade, x, y,z;
    Aluno lista_alunos[TAM_ALUNOS];
   do{
    printf("VOCE EH ALUNO OU PROFESSOR? 1 PARA ALUNO E 2 PARA PROFESSOR, 5 para encerrar:\n");
    scanf("%d", &x);
    if(x==1){
        printf("1 PARA INCLUIR ALUNOS, 2 PARA LISTAR ALUNOS, 3 PARA EXCLUIR ALUNOS, 4 PARA ATUALIZAR ALUNOS:\n");
        scanf("%d",&y);
        if(y=1){
            listar_alunos(lista_alunos);
        }
        else if(y=2){
            imprimir_alunos(lista_alunos);
        }
        else if(y=3){
            printf ("INFORME O CPF DO ALUNO QUE VOCE QUER EXCLUIR:\n ");
	        gets (cpf2);
	       for( y=0;y<TAM_ALUNOS;y++){

	if (strcmp(cpf2,lista_alunos[y].cpf)==0)
	{
	 printf(" nome: %s\n", lista_alunos[y].nome);
		fflush(stdin);
		printf(" data de nacimento %s\n", lista_alunos[y].dnascimento);
		fflush(stdin);
		printf(" sexo do aluno: %s\n", lista_alunos[y].sexo);
		fflush(stdin);
		printf(" cpf: %s\n", lista_alunos[y].cpf);
		fflush(stdin);
		printf("idade: %d\n", lista_alunos[y].idade);
		achou='V';
		if(achou=='F')
	printf("usuario nao encontrado");	}
}
}
}
   }while(x!=5);
 	return 0;
}
void listar_alunos(Aluno lista_alunos[]){
     int x;
     for( x=0; x < TAM_ALUNOS; x++)
	{
	    printf("INCLUSAO DE ALUNOS!\n");
        printf("matricula:");
        scanf("%d",&lista_alunos[x].matricula);

        printf("Nome: ");
		gets(lista_alunos[x].nome);

		printf("Data de nascimento: ");
		gets(lista_alunos[x].dnascimento);

		printf("Sexo, se homem= H, se mulher=M, se gay=G: ");
		scanf("%c",&lista_alunos[x].sexo);
		flush_in();

		printf("Cpf:");
		gets(lista_alunos[x].cpf);

		printf("Idade: ");
		scanf(" %d", &lista_alunos[x].idade);
		getchar();
	}
}
void imprimir_alunos(Aluno lista_alunos[]){

    int y;
	for( y=0; y < TAM_ALUNOS; y++){
        printf("LISTAGEM DE ALUNOS!\n");
        printf("matricula:%d\n",lista_alunos[y].matricula);
        printf("Nome: %s\n", lista_alunos[y].nome);
        printf("Data de nacimento %s\n", lista_alunos[y].dnascimento);
        printf("Sexo do aluno: %c\n", lista_alunos[y].sexo);
        printf("Cpf: %s\n", lista_alunos[y].cpf);
        printf("Idade: %d\n", lista_alunos[y].idade);


	}
}
