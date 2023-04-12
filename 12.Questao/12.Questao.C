 #include <stdio.h>

 int main(){

     float i, j=0, res;

     for(i=70; i>-30; i--){
     j++;
     printf("Valor i %f\n", i);
     printf("Valor j %f\n", j);

     res = res + i/(j*7);
     printf("%f\n", res);
     }

     printf("\nO resultado eh %f", res);

     return 0;
 }