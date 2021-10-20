#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	int n, i;
	printf ("\n\n\tRELAT�RIO ACAD�MICO");
	printf ("\n\nInforme a quantidade inicial de alunos para alimentar o programa: ");
	scanf ("%d", &n);
	char nomeAluno[n][80];
	int matricula[n], matriculaAluno, controle = 0;
	float notaB1[n], notaB2[n], notaB3[n], notaB4[n], mediaAluno[n]; 
	
	printf ("\n\n\n");
	system ("Pause");
	system ("cls");
	
	for (i = 0; i < n; i++) {
		fflush(stdin);
		printf ("\n\nInforme a matr�cula do aluno: ");
		scanf ("%d", &matricula[i]);
		fflush(stdin);
		printf ("\n\nInforme o nome do aluno: ");
		gets (nomeAluno[i]);
		printf ("\n\nInforme a nota do 1� bimestre do aluno: ");
		scanf ("%f", &notaB1[i]);
		printf ("\n\nInforme a nota do 2� bimestre do aluno: ");
		scanf ("%f", &notaB2[i]);
		printf ("\n\nInforme a nota do 3� bimestre do aluno: ");
		scanf ("%f", &notaB3[i]);
		printf ("\n\nInforme a nota do 4� bimestre do aluno: ");
		scanf ("%f", &notaB4[i]);
		mediaAluno[i] = (notaB1[i] + notaB2[i] + notaB3[i] + notaB4[i]) / 4.0; 
		printf ("\n\n\n");
		system ("Pause");
		system ("cls"); 
	}
	
	printf ("\n\nRELAT�RIO ACAD�MICO - BASE DE DADOS");
	for (i = 0; i < n; i++) {
		printf ("\n\n\nAluno %d \nMatr�cula: %d.", i+1, matricula[i]);
		printf ("\nNome do aluno: %s.", nomeAluno[i]);
		printf ("\nNota do aluno no 1� bimestre: %.2f.", notaB1[i]);
		printf ("\nNota do aluno no 2� bimestre: %.2f.", notaB2[i]);
		printf ("\nNota do aluno no 3� bimestre: %.2f.", notaB3[i]);
		printf ("\nNota do aluno no 4� bimestre: %.2f.", notaB4[i]);
		printf ("\nM�dia do aluno: %.2f.", mediaAluno[i]);
		if (mediaAluno[i] >= 70.0)
			printf ("\nAluno aprovado!");
		else
			printf ("\nAluno reprovado!");
	}
	
	printf ("\n\n\n");
	system ("Pause");
	system ("cls"); 
	
	printf ("\n\n\nInforme o n�mero da matr�cula do aluno para busca no programa: ");
	scanf ("%d", &matriculaAluno);
	for (i = 0; i < n; i++) {
		if (matriculaAluno == matricula[i]) {
			printf ("\n\nMatr�cula localizada no programa!");
			printf ("\n\n\nMatr�cula: %d.", i+1, matricula[i]);
			printf ("\nNome do aluno: %s.", nomeAluno[i]);
			printf ("\nNota do aluno no 1� bimestre: %.2f.", notaB1[i]);
			printf ("\nNota do aluno no 2� bimestre: %.2f.", notaB2[i]);
			printf ("\nNota do aluno no 3� bimestre: %.2f.", notaB3[i]);
			printf ("\nNota do aluno no 4� bimestre: %.2f.", notaB4[i]);
			printf ("\nM�dia do aluno: %.2f.", mediaAluno[i]);
			if (mediaAluno[i] >= 70.0)
				printf ("\nAluno aprovado!");
			else
				printf ("\nAluno reprovado!");
			controle = 1;
			break;
		}	
	}
	if (controle == 0)
			printf ("\n\nMatr�cula n�o localizada no programa!");
			
	printf ("\n\nObrigado por utilizar nosso programa!\n\n");
	system ("Pause");
	return 0;
}
