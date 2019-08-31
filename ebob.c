#include <stdio.h>
int main()
{int birinci,ikinci,ucuncu,max=0,i,ebob=0;
printf("sayi gir");scanf("%d",&birinci);
printf("sayi gir:");scanf("%d",&ikinci);
printf("sayi gir");scanf("%d",&ucuncu);
	if(birinci>max)
	{max=birinci;}
	if(ikinci>max)
	{max=ikinci;}
	if(ucuncu>max)
	{max=ucuncu;}
	for(i=1;i<=max;i++)
	{
		if(birinci%i==0&& ikinci%i==0&& ucuncu%i==0)
	{
		ebob=i;
		
	}

}	
printf("sayilarin ebobu %d",ebob);
}

