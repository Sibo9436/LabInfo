#include <iostream>
#include <cmath>
using namespace std;

int es_1(int x, int y){
    int min = ( x < y )? x : y;
    int max = ( x > y )? x : y;
    int res = 0;
    for (int i = min; i <= max; i++){
	res += i;
    }
    return res;
}

double es_2(int n){
    double res =0;
    for (int i = 1; i <= n; i++){
	res += sin(i);
    }
    return res;
}
double es_2_2(int n){
    if (n == 0) return 0;
    return sin(n) + es_2_2(n-1);
}

void es_3(double v[], int n, int d){
    double b[n];
    for (int i = 0; i < n; i++){
	b[i] = v[i];
    }
    for (int i = 0; i < n; i++){
	v[(i+d)%n]=b[i];
    }
}
	
int main(){
    cout << "Esercizio 1: " << es_1(3,1) << endl;
    cout << "Esercizio 2(1): " << es_2(10) << endl;
    cout << "Esercizio 2(2): " << es_2_2(10) << endl;
    double a[] = {1,2,3,4};
    cout << "Esercizio 3: ";
    es_3(a,4,3);
    for (int i = 0; i< 4; i++){
	cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
