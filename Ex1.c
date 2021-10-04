
#include<stdio.h>
 #include<locale.h>

int main()
{
int num;
setlocale(LC_ALL,"Portuguese");
printf("\n\t Imprimir os números de 1 até 50 : \n");

  for(num=1;num<=50;num=num+1)    
   {
     printf(" %d\n",num);
   }
 return 0;
}