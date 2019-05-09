#include <iostream>
#include <math.h>

using namespace std;

int main(){
double acc;
double vel;
double pos;
double n;
double skip;
double sass = 0;
cout << "Dammi nell'ordine accelerazione, velocità e posizione del punto: ";
cin >> acc;
cin >> vel;
cin >> pos;
cout << "Numero di posizioni da stampare ";
cin >> n;
cout << "Gimme tha skipp ";
cin >> skip;

for (double i = 0; i <= n*skip; i = i+skip){

	sass = (0.5)*acc*pow(i,2) + vel*i + pos;
	cout <<"La posizione al tempo "<<i<<" é "<<sass<<endl;
	
}





return 0;
}
