#include <stdio.h>
int main()
{
	int sonuc=1,obeb=1,i,birinci,ikinci, ucuncu,kucuk;
	printf("birinci sayi:");
	scanf("%d",&birinci);
	printf("ikinci sayi:");
	scanf("%d",&ikinci);
	printf("ucuncu sayi:");
	scanf("%d",&ucuncu);
	if(birinci<ikinci && birinci<ucuncu)
	{
	kucuk=birinci;
	}
	else if(ikinci<birinci && ikinci<ucuncu)
	{
	kucuk=ikinci;
	}
	else 
	{
	kucuk=ucuncu;
	}
	for(i=2; i<=kucuk; i++)
	{
	if(birinci%i==0 && ikinci%i==0 && ucuncu%i==0)
	obeb*=i;
	}
	sonuc=(birinci*ikinci*ucuncu)/obeb;
	printf("OKEK(%d,%d,%d)=%d",birinci,ikinci,ucuncu,sonuc);
	return 0;
	}
	
	
