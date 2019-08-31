#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
int i,sayi=0,tahmin=0;
int kackez=0;
srand(time(NULL));
sayi=rand()%100+1;
printf("tahmin ettigim sayi:");
scanf("%d", &tahmin);
while(sayi!=tahmin)
{
if(sayi<tahmin)
{
printf("-daha 'KUCUK' sayi tahmin etmelisin: ");
scanf("%d", &tahmin);
kackez++;
	}
	if(sayi>tahmin)
	{
printf("-daha 'BUYUK' sayi tahmin etmelisinn: ");
scanf("%d", &tahmin);
kackez++;
	}
if(tahmin==sayi)
{
printf("tebrikler %d defada bildiniz\n",kackez+1);
}
}
printf("tebrikler %d sayisini %d defada bildiniz\n", sayi, kackez+1);
i=kackez*10+10;
printf("puaniniz=%d",i);
getch();
}
			
