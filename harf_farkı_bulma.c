#include <stdio.h>
int main()
{	
int durum;
char metin[100];
char metin2[100];
printf("ilk metin:");
gets(metin);
printf("ikinci metin:");
gets(metin2);
durum=strcmp(metin,metin2);
printf("fark:%d",durum);
}
