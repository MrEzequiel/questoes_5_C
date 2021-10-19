#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main (void)
{
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	int cargo, sindi;
	float salarioAtual, salarioReajuste = 0, salrioCargo = 0, salarioINSS = 0, INSS = 0, salarioIRRF = 0, IRRF = 0, SI = 0, reajuste = 0,
	salarioTotal = 0;
	
	printf ("\n\nEsse programa calcula a reajuste salarial dos funcionários!");
	printf ("\n\nDigite o valor do salario bruto atual: ");
	scanf ("%f", &salarioAtual);
	
	if (salarioAtual <= 937.00) {
	 reajuste = salarioAtual * 0.1;
	 salarioReajuste = salarioAtual + (salarioAtual * 0.1);
	 printf ("\n\nO valor do reajuste será de: %.2f$\n", reajuste);
	 printf("\n\no valor a receber com o reajustado sera de %.2f$", salarioReajuste);
}
    else if(salarioAtual > 937.00 && salarioAtual < 2811) {
     reajuste = salarioAtual * 0.07;
     salarioReajuste = salarioAtual + (salarioAtual * 0.07);
     printf ("\n\nO valor do reajuste será de: %.2f$\n", reajuste);
	 printf("o valor a receber com o reajustado sera de %.2f$", salarioReajuste);
}
    else if(salarioAtual >= 2811 && salarioAtual < 4685) {
     reajuste = salarioAtual * 0.05;
     salarioReajuste = salarioAtual + (salarioAtual * 0.05);
     printf ("\n\nO valor do reajuste será de: %.2f$\n", reajuste);
	 printf("o valor a receber com o reajustado sera de %.2f$", salarioReajuste);
}
    else if (salarioAtual >= 4685) {
     reajuste = salarioAtual * 0.03;
     salarioReajuste = salarioAtual + (salarioAtual * 0.03);
     printf ("\n\nO valor do reajuste será de: %.2f$\n", reajuste);
	 printf("o valor a receber com o reajustado sera de %.2f$", salarioReajuste);
}
    printf ("\n\n\n");
	system ("Pause");
	system ("cls");
	
	
    printf ("\n\nDigite a função que o senhor tem na empresa:\n\n");
    printf ("\n\n\t\tMenu");
	printf ("\n\n1 - CARGO - CD 01 - 4.000,00 $");
	printf ("\n\n2 - CARGO - CD 02 - 3.500,00 $");
	printf ("\n\n3 - CARGO - CD 03 - 3.000,00 $");
	printf ("\n\n4 - CARGO - CD 04 - 2.500,00 $");
	printf ("\n\n5 - CARGO - FG 01 - 1.000,00 $");
	printf ("\n\n6 - CARGO - FG 02 -   900,00 $");
	printf ("\n\n7 - CARGO - FG 03 -   800,00 $");
	printf ("\n\n8 - CARGO - FG 04 -   700,00 $");
	printf ("\n\n9 - NÃO OCUPO NENHUM CARGO");
	printf ("\n\n\nDigite a opção desejada: ");
	scanf ("%d", &cargo);
	
		switch (cargo) {
		case 1:
			salrioCargo = salarioReajuste + 4000;
			printf ("\nO valor do salario reajustado mais o bônus de cargo de direção CD-1 e de: %.2f$", salrioCargo);
			break;
		
		case 2:
			salrioCargo = salarioReajuste + 3500;
			printf ("\nO valor do salario reajustado mais o bônus de cargo de direção CD-2 e de: %.2f$", salrioCargo);
			break;
		
		case 3:
			salrioCargo = salarioReajuste + 3000;
			printf ("\nO valor do salario reajustado mais o bônus de cargo de direção CD-3 e de: %.2f$", salrioCargo);
			break;
		
		case 4:
			salrioCargo = salarioReajuste + 2500;
			printf ("\nO valor do salario reajustado mais o bônus de cargo de direção CD-4 e de: %.2f$", salrioCargo);
			break;
		
		case 5:
			salrioCargo = salarioReajuste + 1000;
			printf ("\nO valor do salario reajustado mais o bônus de função Gratificante FG-1 e de: %.2f$", salrioCargo);
			break;
		
		case 6:
			salrioCargo = salarioReajuste + 900;
			printf ("\nO valor do salario reajustado mais o bônus de função Gratificante FG-2 e de: %.2f$", salrioCargo);
			break;
		
		case 7:
			salrioCargo = salarioReajuste + 800;
			printf ("\nO valor do salario reajustado mais o bônus de função Gratificante FG-3 e de: %.2f$", salrioCargo);
			break;
			
		case 8:
			salrioCargo = salarioReajuste + 700;
			printf ("\nO valor do salario reajustado mais o bônus de função Gratificante FG-4 e de: %.2f$", salrioCargo);
			break;
		
		case 9:
			salrioCargo = salarioReajuste + 0;
			printf ("\nVocê não ocupa nenhum cargo com gratificação seu salario continuara: %.2f!", salrioCargo);
			break;
		
		default:
			printf ("\n\nDigite um valor válido!");
	}
	
	printf ("\n\n\n");
	system ("Pause");
	system ("cls");
	
printf ("\n\nPorcentagem de Recolhimento do INSS do salario bruto mais cargo ocupado:\n\n");
	
	// INSS
	if (salrioCargo <= 1659.38) {
		INSS = salrioCargo * 0.08;
		salarioINSS = salrioCargo - (salrioCargo *0.08);
		printf ("\n\nO valor do salario apos os descontos do INSS sera de: %.2f$", salarioINSS);
		printf ("\n\nO valor Do desconto e de: %.2f$", INSS);
}
    else if (salrioCargo >= 1659.39  && salrioCargo <= 2765.66){
    	INSS = salrioCargo * 0.09;
    	salarioINSS = salrioCargo - (salrioCargo *0.09);
    	printf ("\n\nO valor do salario apos os descontos do INSS sera de: %.2f$", salarioINSS);
    	printf ("\n\nO valor Do desconto e de: %.2f$", INSS);
}
    else if (salrioCargo >= 2765.67){
    	INSS = salrioCargo * 0.11;
    	salarioINSS = salrioCargo - (salrioCargo *0.11);
    	printf ("\n\nO valor do salario apos os descontos do INSS sera de: %.2f$", salarioINSS);
    	printf ("\n\nO valor Do desconto e de: %.2f$", INSS);
}
	printf ("\n\n\n");
	system ("Pause");
	system ("cls");
	
printf ("\n\nPorcentagem de Recolhimento do IRRF:\n\n");

    if (salrioCargo <= 1903.98) {
   	 salarioIRRF = salrioCargo + 0;
   	 printf ("\n\nSeu salario e abaixo de 1.903.98$ você esta ISENTO de recolhimento");
}
   else if (salrioCargo >= 1903.99 && salrioCargo <= 2826.65){
   	IRRF = salrioCargo * 0.075;
   	salarioIRRF = salrioCargo - (salrioCargo * 0.075);
   	printf ("\nO salario real apos o desconto do  %.2f$", salarioIRRF);
   	printf ("\n\nO valor Do desconto e de: %.2f$", IRRF);
}
    else if (salrioCargo >= 2827.66 && salrioCargo <= 3751.05){
    IRRF = salrioCargo * 0.15;
   	salarioIRRF = salrioCargo - (salrioCargo * 0.15);
   	printf ("\nO salario real apos o desconto do  %.2f$", salarioIRRF);
   	printf ("\n\nO valor Do desconto e de: %.2f$", IRRF);
}
    else if (salrioCargo >= 3751.06 && salrioCargo <= 4664.68){
    IRRF = salrioCargo * 0.225;
   	salarioIRRF = salrioCargo - (salrioCargo * 0.225);
   	printf ("\nO salario real apos o desconto do  %.2f$", salarioIRRF);
   	printf ("\n\nO valor Do desconto e de: %.2f$", IRRF);
}
    else if (salrioCargo > 4664.68){
    IRRF = salrioCargo * 0.275;
   	salarioIRRF = salrioCargo - (salrioCargo * 0.275);
   	printf ("\nO salario real apos o desconto do  %.2f$", salarioIRRF);
   	printf ("\n\nO valor Do desconto e de: %.2f$", IRRF);
}
printf ("\n\n\n");
 system ("Pause");
 system ("cls"); 
 
 printf ("\n\nE sindicalizado:");
 printf ("\n\n1 - SIM -");
 printf ("\n\n2 - NÃO -");
 scanf ("%d", &sindi);
 
     switch (sindi){
     
       case 1:
       	SI = salrioCargo * 0.05;
       	salarioTotal = salrioCargo - INSS - IRRF - SI;
       	printf ("\nO salario antes do reajuste era de %.2f$\n", salarioAtual);
       	printf ("\nO salario recebeu um reaguste de %.2f$ e o salario BRUTO e: %.2f$\n", reajuste, salarioReajuste );
       	printf ("\nCom o acrecimo do cargo exercido e: %.2f$ \n", salrioCargo);
       	printf ("\nValor do desconto do INSS e de: %.2f$\n", INSS);
       	printf ("\nO valor do desconto do imposto do IRRF são de: %.2f$\n", IRRF);
       	printf ("\nVocê faz parte do sindicato tera um desconto de: %.2f$\n", SI);
       	printf ("\n\n\nSeu salario liquido que recebera e de:  %.2f$", salarioTotal);
       	break;
       	
       case 2:
        SI = 0;
       	salarioTotal = salrioCargo - INSS - IRRF - SI;
       	printf ("\nO salario antes do reaguste era de %.2f $\n", salarioAtual);
       	printf ("\nO salario recebeu um reaguste de %.2f$ e o salario BRUTO e: %.2f$\n", reajuste, salarioReajuste );
       	printf ("\nCom o acrecimo do cargo exercido e: %.2f$ \n", salrioCargo);
       	printf ("\nValor do desconto do INSS e de: %.2f $\n", INSS);
       	printf ("\nO valor do desconto do imposto do IRRF são de: %.2f $\n", IRRF);
       	printf ("\nVocê NÃO faz parte do sindicato NÃO tera desconto no seu salario %.2f $\n", SI);
       	printf ("\n\n\nSeu salario liquido que recebera e de:  %.2f$", salarioTotal);
        break;
    
       default:
		printf ("\n\nDigite um valor válido!");
		break;
}
 


printf ("\n\nObrigado por utlizar nosso programa!!\n\n");
system ("Pause");
return 0;
}		



