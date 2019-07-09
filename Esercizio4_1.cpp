#include<iostream>
using namespace std;

int main(){
    cout << "Dammi un numero: ";
    int n;
    cin >> n;
    long long int res=1;
    while (n>0){
	res *= n;
	n--;
    }
    cout << res << endl;
    return 0;
}
