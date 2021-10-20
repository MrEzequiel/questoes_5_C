
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	int i, n = 1, cliente, controle = 0, controle2 = 0, controle3 = 0, buscaCPF = 1, buscaCod = 0;
	char nome[100][80], num[100][80], tele[100][80], cpf[100][80], num_busca[80];
	printf ("\n\nEste programa armazene os dados (código, nome, CPF e telefone) de n clientes de uma clínica odontológica!");
	printf ("\n\nDigite a quantidade de clientes: ");
	scanf ("%d", &n);
	if (n > 0) {
		for (i = 0; i < n; i++) {
			fflush(stdin);
			printf ("\n\nInforme o código do cliente: ");
			gets (num[i]);
			printf ("\n\nInforme o nome do cliente: ");
			gets (nome[i]);
			printf ("\n\nInforme o CPF do cliente: ");
			gets (cpf[i]);
			printf ("\n\nInforme o número de telefone do cliente: ");
			gets (tele[i]);		
			
		printf ("\n\n\n");
		system ("Pause");
		system ("cls");
		}
		
		printf ("\n\nInforme o código ou CPF de um cliente exibição de informações: "); {
		gets (num_busca);
		for (i = 0; i < n; i++) {
			if (strcmp (num_busca, num[i]) == 0 || strcmp (num_busca, cpf[i]) == 0 ) {
				controle = 1;
				printf ("\n\nCliente localizado na base de dados!");
				printf ("\n\nCódigo do cliente: %s", num[i]);
				printf ("\n\nNome do cliente: %s ", nome[i]);
				printf ("\n\nCPF: %s ", cpf[i]);
				printf ("\n\nTelefone: %s ", tele[i]);	
				break;
			}
		}
	}

		if (controle == 0)
			printf ("\n\nCódigo ou CPF de cliente não localizado!");			
	}
	else 
		printf ("\n\nDigite uma quantidade válida de clientes !");
		
	printf ("\n\nObrigado por utilizar nosso programa!\n\n");
	system ("Pause");
	return 0;
}
