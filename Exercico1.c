#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){

    setlocale(LC_ALL,"portuguese");

    float preVenda =0.0, percDesconto= 0.0, valDesconto = 0.0, valPagar =0.0;

    printf("Digite o preço da Venda: ");
    scanf("%f", &preVenda);
    printf("Digite o percentual de desconto da venda: ");
    scanf("%f", &percDesconto);
    valDesconto = preVenda*(percDesconto/100);
    valPagar = preVenda - valDesconto;
    printf("\nO valor do desconto foi de : R$ %.2f", valDesconto);
    printf("\nO valor a se pagar é de: R$ %.2f", valPagar);


    return 0;
}
