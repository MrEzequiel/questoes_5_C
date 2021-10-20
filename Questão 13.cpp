#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	int n, i;
	printf ("\n\n\tRELATÓRIO ACADÊMICO");
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
		printf ("\n\nInforme a matrícula do aluno: ");
		scanf ("%d", &matricula[i]);
		fflush(stdin);
		printf ("\n\nInforme o nome do aluno: ");
		gets (nomeAluno[i]);
		printf ("\n\nInforme a nota do 1º bimestre do aluno: ");
		scanf ("%f", &notaB1[i]);
		printf ("\n\nInforme a nota do 2º bimestre do aluno: ");
		scanf ("%f", &notaB2[i]);
		printf ("\n\nInforme a nota do 3º bimestre do aluno: ");
		scanf ("%f", &notaB3[i]);
		printf ("\n\nInforme a nota do 4º bimestre do aluno: ");
		scanf ("%f", &notaB4[i]);
		mediaAluno[i] = (notaB1[i] + notaB2[i] + notaB3[i] + notaB4[i]) / 4.0; 
		printf ("\n\n\n");
		system ("Pause");
		system ("cls"); 
	}
	
	printf ("\n\nRELATÓRIO ACADÊMICO - BASE DE DADOS");
	for (i = 0; i < n; i++) {
		printf ("\n\n\nAluno %d \nMatrícula: %d.", i+1, matricula[i]);
		printf ("\nNome do aluno: %s.", nomeAluno[i]);
		printf ("\nNota do aluno no 1º bimestre: %.2f.", notaB1[i]);
		printf ("\nNota do aluno no 2º bimestre: %.2f.", notaB2[i]);
		printf ("\nNota do aluno no 3º bimestre: %.2f.", notaB3[i]);
		printf ("\nNota do aluno no 4º bimestre: %.2f.", notaB4[i]);
		printf ("\nMédia do aluno: %.2f.", mediaAluno[i]);
		if (mediaAluno[i] >= 70.0)
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
			printf ("\nNota do aluno no 1º bimestre: %.2f.", notaB1[i]);
			printf ("\nNota do aluno no 2º bimestre: %.2f.", notaB2[i]);
			printf ("\nNota do aluno no 3º bimestre: %.2f.", notaB3[i]);
			printf ("\nNota do aluno no 4º bimestre: %.2f.", notaB4[i]);
			printf ("\nMédia do aluno: %.2f.", mediaAluno[i]);
			if (mediaAluno[i] >= 70.0)
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
