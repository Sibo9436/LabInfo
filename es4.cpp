#include <iostream>
#include <math.h>

using namespace std;

int main(){
int top;
int c=1;
cout << "Quante righe vuoi che stampi? ";
cin >> top;
for (int i=0; i<=top; i++){
	for (int j=0; j<i; j++){
		cout << c << " ";
		c++;
	}
	cout << endl;

}




return 0;
}
