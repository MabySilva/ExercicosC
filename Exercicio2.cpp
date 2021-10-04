#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"portuguese");

    float custoProd= 0.0,porcDist= 0.0, porcImp = 0.0, custoFinal = 0.0;

    porcDist = 28.0;
    porcImp = 45.0;
    printf("Digite o valor de produção: ");
    scanf("%f", &custoProd);
    custoFinal = custoProd + (custoProd*(porcDist + porcImp)/100);
    printf("\nO Valor final é de: R$ %.2f", custoFinal);



    return 0;
}
