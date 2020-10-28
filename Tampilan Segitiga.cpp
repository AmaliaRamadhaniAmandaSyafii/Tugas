/* Amalia Ramadhani Amanda Syafi'i */
/* 20051397080 */
/* MI 2020B */

#include <iostream>
#include <conio.h>

using namespace std;
int main (){
	int nilai;
	cout<< "=============================="<<endl;
	cout<< "    Tampilan Segitiga"<<endl;
	cout<< "=============================="<<endl;
	cout<< "Masukkan Segitiga Angka : "; cin>>nilai;
	cout<< "\n";
	for (int i=1; i<=(nilai*2)-1; i++)
	{
	if (i<=nilai){
	for (int j=1; j<=i; j++)
	cout<<j;
	}else{
	for (int k=1; k<=nilai*2-i; k++)
	cout<<k;
	}
	cout<<endl;	
}

	return 0;
}
