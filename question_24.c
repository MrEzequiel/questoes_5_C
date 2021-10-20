#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void){
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	int n, i;
	printf ("\n\n\tRELATÓRIO ACADÊMICO");
	printf ("\n\nInforme a quantidade inicial de alunos para alimentar o programa: ");
	scanf ("%d", &n);
	char nomeAluno[n][80];
	int matricula[n], matriculaAluno, controle = 0;
	float infoAluno[n][6];
	
	printf ("\n\n\n");
	system ("Pause");
	system ("cls");
	
	for (i = 0; i < n; i++) {
		fflush(stdin);
		printf ("\n\nInforme a matrícula do aluno: ");
		scanf ("%d", &matricula[i]);
		fflush(stdin);
		printf ("\n\nInforme o nome do aluno: ");
		gets (nomeAluno[i]);
		printf ("\n\nInforme a nota do 1º bimestre do aluno: ");
		scanf ("%f", &infoAluno[i][0]);
		printf ("\n\nInforme a nota do 2º bimestre do aluno: ");
		scanf ("%f", &infoAluno[i][1]);
		printf ("\n\nInforme a nota do 3º bimestre do aluno: ");
		scanf ("%f", &infoAluno[i][2]);
		printf ("\n\nInforme a nota do 4º bimestre do aluno: ");
		scanf ("%f", &infoAluno[i][3]);
    printf("\n\nInforma a quantidade de faltas do aluno: ");
    scanf("%f", &infoAluno[i][4]);
		infoAluno[i][5] = (infoAluno[i][0] + infoAluno[i][1] + infoAluno[i][2] + infoAluno[i][3]) / 4.0; 
		printf ("\n\n\n");
		system ("Pause");
		system ("cls"); 
	}
	
	printf ("\n\nRELATÓRIO ACADÊMICO - BASE DE DADOS");
	for (i = 0; i < n; i++) {
		printf ("\n\n\nAluno %d \nMatrícula: %d.", i+1, matricula[i]);
		printf ("\nNome do aluno: %s.", nomeAluno[i]);
		printf ("\nNota do aluno no 1º bimestre: %.2f.", infoAluno[i][0]);
		printf ("\nNota do aluno no 2º bimestre: %.2f.", infoAluno[i][1]);
		printf ("\nNota do aluno no 3º bimestre: %.2f.", infoAluno[i][2]);
		printf ("\nNota do aluno no 4º bimestre: %.2f.", infoAluno[i][3]);
    printf ("\nQuantidade de faltas do aluno: %.2f.", infoAluno[i][4]);
		printf ("\nMédia do aluno: %.2f.", infoAluno[i][5]);
		if (infoAluno[i][5] >= 80.0 && infoAluno[i][4] <= 25)
			printf ("\nAluno aprovado!");
		else
			printf ("\nAluno reprovado!");
	}
	
	printf ("\n\n\n");
	system ("Pause");
	system ("cls"); 
	
	printf ("\n\n\nInforme o número da matrícula do aluno para busca no programa: ");
	scanf ("%d", &matriculaAluno);
	for (i = 0; i < n; i++) {
		if (matriculaAluno == matricula[i]) {
			printf ("\n\nMatrícula localizada no programa!");
			printf ("\n\n\nMatrícula: %d.", i+1, matricula[i]);
			printf ("\nNome do aluno: %s.", nomeAluno[i]);
			printf ("\nNota do aluno no 1º bimestre: %.2f.", infoAluno[i][0]);
			printf ("\nNota do aluno no 2º bimestre: %.2f.", infoAluno[i][1]);
			printf ("\nNota do aluno no 3º bimestre: %.2f.", infoAluno[i][2]);
			printf ("\nNota do aluno no 4º bimestre: %.2f.", infoAluno[i][3]);
      printf ("\nQuantidade de faltas do aluno: %.2f.", infoAluno[i][4]);
			printf ("\nMédia do aluno: %.2f.", infoAluno[i][5]);
			if (infoAluno[i][5] >= 80.0 && infoAluno[i][4] <= 25.0 )
				printf ("\nAluno aprovado!");
			else
				printf ("\nAluno reprovado!");
			controle = 1;
			break;
		}	
	}
	if (controle == 0)
			printf ("\n\nMatrícula não localizada no programa!");
			
	printf ("\n\nObrigado por utilizar nosso programa!\n\n");
	system ("Pause");
	return 0;
}
