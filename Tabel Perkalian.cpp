/* Amalia Ramadhani Amanda Syafi'i */
/* 20051397080 */
/* MI 2020B */

#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;
main() {
	int i,j;
	cout<< "========================================================"<<endl;
	cout<< "		  Tabel Perkalian"<<endl;
	cout<< "========================================================"<<endl;
	for (i=1;i<=10;i++)
	{
	cout<<setw(5)<<i;
	
	for (j=1;j<=10;j++)
	cout<<setw(5)<<i*j;
	cout<<endl;
	}
	getch();
	return 0;
}
