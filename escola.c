#include <stdio.h>
#include <stdlib.h>
#include<string.h>

typedef struct ficha_aluno{
	
	char nome[100], sexo, dnascimento[10], cpf[11];
	int idade, x, y;
} Aluno;


int main() {
	
  
  char cpf2[100];
  char achou='F';
  int idade, x, y,z;
  Aluno lista_alunos[10];
  
  for( x=0; x<1; x++)
	{
		printf(" nome:\n");
		fflush(stdin);
		gets(lista_alunos[x].nome);
		printf(" data de nascimento:\n");
		fflush(stdin);
		gets(lista_alunos[x].dnascimento);
		printf(" sexo, se homem= H, se mulher=M, se gay=G \n");
		fflush(stdin);
		scanf("%c",&lista_alunos[x].sexo);
		printf(" cpf:\n");
		fflush(stdin);
		gets(lista_alunos[x].cpf);
		printf(" idade:\n ");
		scanf(" %d", &lista_alunos[x].idade);
		fflush(stdin);
	}
    
	
	
	for(z=0;z<2;z++){
	printf ("Informe o cpf: ");
	gets (cpf2);

	for( y=0;y<10;y++){

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
} return 0;
}
