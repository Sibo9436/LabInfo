#include <iostream>
#include <math.h>

using namespace std;

int minimi_termini(int num, int den){
	while (den != 0) {
		return minimi_termini(den, num%den);
	}
	return num;
}
int main() { 
int a, b;
cout << "Dammi il numeratore: "; 
cin >> a; 
do{cout << "Dammi il denominatore: "; 
cin >> b;
}while(b==0);
int MMQ = minimi_termini(a, b); 
cout << a/MMQ << "/" << b/MMQ << endl;
return 0;
}
