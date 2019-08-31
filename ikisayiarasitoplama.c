#include <iostream>
#include <string.h>
using namespace std;
int main() 
{
	int baslangic,bitis,toplam;
	cout << "Baslangic Sayisi: ";
		cin >> baslangic;
	cout << "Bitis Sayisi: ";
		cin >> bitis;
		
	toplam = 0;
	for (baslangic; baslangic <= bitis; baslangic++) {
		toplam = toplam+baslangic;
		cout << baslangic << " ";
	}
	cout << "sayilarinin toplami: " << toplam;
}
