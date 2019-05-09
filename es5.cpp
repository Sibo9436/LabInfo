#include <iostream>
#include <math.h>

using namespace std;

int main (){
long long int a = 1;
long long int b = 1;
long long int c; 
long long int count;
cout << "Che numero vuoi? ";
cin >> count;
cout << a << endl << b << endl;
for (int i = 0; i <= count; i++){
	c = a+b;	
	a = b;
	b = c;
	cout << c << endl;
}

return 0;
}
