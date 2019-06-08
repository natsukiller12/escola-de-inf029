#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define TAM_ALUNOS 2

typedef struct ficha_aluno{
	char nome[100], sexo, dnascimento[10], cpf[11];
	int idade, x, y;
} Aluno;

void flush_in(){
	int ch;
	do{
		ch = fgetc(stdin);
	}while (ch != EOF && ch !='\n');
}


int main() {

    char cpf2[100];
    char achou='F';
    int idade, x, y,z;
    Aluno lista_alunos[TAM_ALUNOS];

    for( x=0; x < TAM_ALUNOS; x++)
	{
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

	imprimir_alunos(lista_alunos);

 	return 0;
}

void imprimir_alunos(Aluno lista_alunos[]){

    int y;
	for( y=0; y < TAM_ALUNOS; y++){

        printf("Nome: %s\n", lista_alunos[y].nome);
        printf("Data de nacimento %s\n", lista_alunos[y].dnascimento);
        printf("Sexo do aluno: %c\n", lista_alunos[y].sexo);
        printf("Cpf: %s\n", lista_alunos[y].cpf);
        printf("Idade: %d\n", lista_alunos[y].idade);


	}

}
