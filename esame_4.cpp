#include <iostream>

using namespace std;

int  funziona(int n, int d){
    int *p;
    p = new int[n];
    for (int i = 1; i<= n; i++){
	p[i-1]=d*i;
	cout << p[i-1] << endl;
    }
    return *p;
}

int main(){

    int * a = funziona(3,10);
    cout << a << endl;
    cout << *&a[2] << endl;
    return 0;
}
