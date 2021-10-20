#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main (void)
{
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	int i, n, item, controle = 0;
	printf ("\n\nEste programa calcula o faturamento geral de empresa!");
	printf ("\n\nDigite a quantidade de itens comercializados: ");
	scanf ("%d", &n);
	float precoUnit[n], quantItem[n], fatItem[n], fatMes = 0, lucro = 0, despesas = 0;
	printf ("\n\n\n");
	system ("Pause");
	
	if (n > 0) {
		for (i = 0; i < n; i++) {
			system ("cls");
			printf ("\n\nInforme o preço unitário do item %d (R$): ", i+1);
			scanf ("%f", &precoUnit[i]);
			printf ("\n\nInforme a quantidade comercializada do item %d: ", i+1);
			scanf ("%f", &quantItem[i]);
			fatItem[i] = precoUnit[i] * quantItem[i];
			printf ("\n\nO faturamento do item %d foi de R$ %.2f!\n\n", i+1, fatItem[i]);
			fatMes += fatItem[i];
      despesas = fatMes * 0.40;
      lucro = fatMes - despesas;
			system ("Pause");			
		}
	
		system ("cls");
	
		printf ("\n\nO faturamento desse mes da empresa foi de R$ %.2f!", fatMes);
    printf("\n\nO valor das despesas desse mes foi de %.2f", despesas);
    printf("\n\nO lucro desse mes foi de R$ %.2f", lucro);
		
		printf ("\n\n\n");
		system ("Pause");
		system ("cls");
		
		printf ("\n\nInforme o código de um item para exibição de informações: ");
		scanf ("%d", &item);
		for (i = 0; i < n; i++) {
			if ((item-1) == i) {
				controle = 1;
				printf ("\n\nItem localizado na base de dados!");
				printf ("\n\nCódigo do item: %d!", i+1);
				printf ("\n\nPreço unitário do item (R$)): %.2f!", precoUnit[i]);
				printf ("\n\nQuantidade comercializada do item: %.2f!", quantItem[i]);
				printf ("\n\nFaturamento com base no item (R$): %.2f!\n\n", fatItem[i]);	
				break;
			}
		}
		
		if (controle == 0)
			printf ("\n\nCódigo de item não localizado!");			
		
	}
	else 
		printf ("\n\nDigite a quantidade válida de itens para cálculo de faturamento!");
		
	printf ("\n\nObrigado por utilizar nosso programa!\n\n");
	system ("Pause");
	return 0;

}
