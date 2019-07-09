#include<iostream>
using namespace std;

int main(){
    cout << "Dammi due numeri! ";
    int a,b;
    cin >> a >> b;
    if (a%b ==0)
	cout << "a è multiplo di b!" << endl;
    else
	cout << "a non è multiplo di b..." << endl;
	return 0;
}
