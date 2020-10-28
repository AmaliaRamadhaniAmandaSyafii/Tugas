/* Amalia Ramadhani Amanda Syafi'i */
/* 20051397080 */
/* MI 2020B */

#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;
main () {
	int a, b, c, n, i, jumlah;
	cout<< "==================================================\n" << endl;
	cout<< "	Menghitung Jumlah Deret Bilangan\n";
	cout<< "==================================================\n" << endl;
	cout<< "Masukkan Jumlah Deret Ke-n : "; cin>> n; cout<< endl;
	cout<< "--------------------------------------------------\n" << endl;
	cout<< "Deret ke-" <<n<<"         : ";
	//nilai
	a=3;
	b=4;
	cout<<a<<",";
	jumlah = jumlah+a;
	
	for (i=0; i<n-1; i++)
	{
		c= a+b;
		a=c;
		cout<<c<<",";
		jumlah = jumlah + c;
	}
	cout<< "\n"<<endl;
	cout<< "Jumlah Deret Ke-" <<n<<"  : "; 
	cout<<jumlah; cout<<endl;
	cout<< "==================================================\n" << endl;
	
	getch();
	return 0;
}
