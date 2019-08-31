#include <stdio.h>
int main()
{	
int i,x,y=0;
printf("x:");
scanf("%d",&x);
for(i=2; i<x; i++)
{
if(x%i==0)
{
	y++;
			}
		}
	if(y==0)
	{
		printf("asal");
			}
			else
				{
			printf("asal degil");
			}
		
	
		}
