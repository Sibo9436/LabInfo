#include <iostream>
#include <math.h>

using namespace std;
int swappe(int &x, int &y){
 	int a= y;
	y = x;
	x = a;
}
int main(){
int x, y;
cout << "Gimme tha numberz: ";
cin >> x >>y;
cout << x << endl;
cout << y << endl;
swappe(x, y);
cout << x << endl;
cout << y << endl;

return 0;
}
