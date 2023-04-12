#include <stdio.h>

int main()
{
int a0, a1, ai;
printf("Digite os dois primeiros termos: ");
scanf("%d %d", &a0, &a1);
printf("%d %d ", a0, a1);
for(int i = 2; i < 10; i++)
{
if(i % 2 == 0)
{
ai = a1 - a0;
}
else
{
ai = a1 + a0;
}
printf("%d ", ai);
a0 = a1;
a1 = ai;
}
return 0;
}