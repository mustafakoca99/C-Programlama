#include <stdio.h>
int main()
{
int x,y,sonuc=0;
printf("x:");
scanf("%d",&x);
printf("y:");
scanf("%d",&y);
oku: 
	sonuc=sonuc+1;
		printf("%d",sonuc);
	if(x<y)
	{
	goto oku;
	}
	return 0;
}
