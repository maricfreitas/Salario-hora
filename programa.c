#include <stdio.h>
float valor_hora,hora_mes,salario;

int main()
{
    printf("Quanto você ganha por hora?\n");
    scanf("%f",&valor_hora);
    printf("Quantas horas foram trabalhadas esse mês?\n");
    scanf("%f",&hora_mes);
    
    salario=hora_mes*valor_hora;
    
    printf("Seu salário esse mês é de R$%.2f.\n",salario);

    return 0;
}