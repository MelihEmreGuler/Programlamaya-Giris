#include <iostream>
using namespace std;
int main() {

	/*
	cout << "Lutfen bes adet sayi giriniz: " << endl;
	int* p;
	p = (int*)malloc(sizeof(int) * 5);
	for (int i = 0; i < 5; i++) {
		cin >> p[i];
	}
	for (int i = 0; i < 5; i++) {
		cout << p[i] << " ";
	}
	*/
	
	cout << "Lutfen bes adet sayi giriniz: " << endl;
	int* p;
	p = (int*)malloc(sizeof(int) * 5);
	for (int i = 0; i < 5; i++) {
		cin >> *(p + i); //pointer aritmatiği deniyor.
	//basit matematik işlemleri ile yapmaya deniyor;
	//dizilerde ve pointerlerde ardışık elemanlar ram de ardışık adreslere yerleştirilirler
	//bu özellikten yararlanarak adresini birer birer artırarak erişebiliriz.
	}
	for (int i = 0; i < 5; i++) {
		cout << *(p + i) << " ";
	}
	
}