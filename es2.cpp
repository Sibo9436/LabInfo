#include <iostream>
#include <math.h>

using namespace std;

int main(){

double k;
double A;
double T1,T2;
double n;
double step;
double X;
double H;
cout <<"Dammi il coefficiente di conduzione termica: ";
cin >>k;
cout <<"Damm l'area della parete di contatto: ";
cin >>A;
cout <<"Dammi T1 e T2 iniziali: ";
cin >>T1 >> T2;
cout <<"Numero di step? ";
cin >>n;
cout <<"Skip? ";
cin >>step;
cout <<"Spessore della parete? ";
cin >>X;

for (double i =T2; i < T2+n*step; i= i+step){

	H = ( k * A * (T1-i))/X;
	cout << "Alla T2 " <<i << " la quantità di calore trasferita per secondo è "<<H <<endl;



}

return 0;
}
