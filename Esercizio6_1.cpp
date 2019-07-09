#include <iostream>

using namespace std;

int main(){
    double a,max,min;
    cout << "Dammi un numero: ";
    cin >> a;
    max = a;
    min = a;
    for (int i = 0; i < 9; i++){
	cout << "Dammi un numero: " ;
	cin >> a;
	max = (a > max)? a : max;
	min = (a < min)? a : min;
	cout << endl;
    }
    cout << "Il numero maggiore è: " << max << endl;
    cout << "Il numero minore è: " << min << endl;
    return 0;
}
