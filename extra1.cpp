#include <iostream>
#include <math.h>

using namespace std;

void minimi_termini(int &numeratore, int &denominatore) {
	int halp = denominatore;
	int ohno = numeratore;
	while (halp != 0){
		if (ohno > halp){
			int swap = ohno;
			ohno = halp;
			halp = swap;
		}
		halp = halp - ohno;

	}
	numeratore = numeratore / ohno;
	denominatore = denominatore / ohno;
}
int main() { 
int a, b;
cout << "Dammi il numeratore: "; 
cin >> a; 
do{cout << "Dammi il denominatore: "; 
cin >> b;
}while(b==0);
minimi_termini(a, b); 
cout << a << "/" << b << endl;
return 0;
}
