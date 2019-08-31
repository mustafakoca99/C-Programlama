#include<stdio.h> 
int main()
{
char dizi[100]; 
int i,j,k,a=1,m=1; 
int kackerecikti[100]={0}; 
printf("Lutfen bir kelime giriniz:"); 
gets(dizi);
while(dizi[a]!='\0')
{ 
m++;
a++; 
} 
for(i=0;i<m;i++)
{ 
if(kackerecikti[i]==0) 
{ 
for(j=i+1;j<m;j++) 
{ 
if(dizi[j]!=' ' && dizi[j]==dizi[i]) 
{ 
kackerecikti[i]++; 
kackerecikti[j]++; 
} 
} 
if(dizi[i]!=' ') 
printf("%c(%d)\n",dizi[i],kackerecikti[i]+1); 
} 
}
}
