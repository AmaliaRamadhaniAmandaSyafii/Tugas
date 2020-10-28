/* Amalia Ramadhani Amanda Syafi'i */
/* 20051397080 */
/* MI 2020B */
/* Program Menghitung 6 Suku Pertama */

#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;
int main()	{
	int jumlah;
	
	cout<< "======================================="<<endl;
	cout<< "  Menghitung Jumlah 6 Suku Pertama\n"<<endl;
	cout<< "======================================="<<endl;
	cout<< "Barisan 		     : "<<endl;
	for(int i=1;i<=10;i++)
	{
		if(i<10){
			cout<<i<<"^3,";
		}
		if(i<7){
			jumlah+=pow(i,3);
		}
		if(i==10){
			cout <<i<<"^3"<<endl;
			cout<<endl<<"Jumlah 6 Suku Pertama adalah : "<<endl;
			cout<<jumlah<<endl;
		}
	}
	

	return 0;
}
