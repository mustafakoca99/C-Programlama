#include <stdio.h>
int main()
{	
int uzunluk;
char metin[100];
char metin2[100];
printf("birinci metni giriniz:");
gets(metin);
printf("ikinci metni giriniz:");
gets(metin2);
strcat(metin," ");
strcat(metin,metin2);
printf("yeni metin:%s\n",metin);
printf("kac harf var:%d",strlen(metin));
return 0;
}
