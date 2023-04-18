#include <stdio.h>
int main(){
int s;
printf("\n insiraa Sigla Do Estado Abaixo:\n");
printf("1- AM\n");
printf("2- RJ\n");
printf("3- PA\n");
printf("4- AC\n");
scanf("%d",&s);
switch (s){
 case 1:
 printf("Amazonense!\n");
 break;
 
 case 2:
 printf("Carioca!\n");
 break;

case 3:
 printf("Paraense!\n");
 break;

case 4:
 printf("Acreano!\n");
 break;

default:
printf("Numero Invalido!\n");
break;

}
    return 0;
}
