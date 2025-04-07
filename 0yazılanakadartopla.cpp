#include<iostream>
using namespace std;
/* 0 yazýlana kadar yazdýðýn sayýlarý toplayan program */
main(){
	setlocale(LC_ALL,"Turish");
	int  toplam = 0, sayi;
	
	cout << "Ýstediðiniz sayýyý giriniz: ";
	cin >> sayi;
	
	while(sayi != 0){
		toplam = toplam + sayi;
		cout << "Ýstediðiniz sayýyý giriniz: ";
		cin >> sayi;
		
	}
	cout << "Giriðiniz sayýlarýn toplamý : " << toplam;
	
	
	
}
