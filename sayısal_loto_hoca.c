#include <stdio.h>
int main()
{
	int i,j,esitlik,takas;
int sayisal[6];
srand(time(NULL));
do{
	esitlik=0;
	for(i=0;i<6;i++){	
	sayisal[i]=rand()%49+1;
	}
	for(i=0;i<6;i++){
		
		for(j=i+1;j<6;j++){
			
			if(sayisal[i]==sayisal[i+1]){
					sayisal[j]=rand()%49+1;
					}
		}
	}
		}
		while(esitlik==6);
for(j=0;j<6;j++){

	for(i=0;i<6;i++){
			
		if(	sayisal[i]<	sayisal[j]){
				takas=sayisal[i];
				sayisal[j]=sayisal[i];
							sayisal[j]=takas;	
			}
	
				for(j=0;j<6;j++){
				printf("%d\n",sayisal[i]);

				}
			}
		}
		
			}
