#include<iostream>
using namespace std;
/* 0 yaz�lana kadar yazd���n say�lar� toplayan program */
main(){
	setlocale(LC_ALL,"Turish");
	int  toplam = 0, sayi;
	
	cout << "�stedi�iniz say�y� giriniz: ";
	cin >> sayi;
	
	while(sayi != 0){
		toplam = toplam + sayi;
		cout << "�stedi�iniz say�y� giriniz: ";
		cin >> sayi;
		
	}
	cout << "Giri�iniz say�lar�n toplam� : " << toplam;
	
	
	
}
