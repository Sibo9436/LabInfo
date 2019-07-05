#include <iostream>
#include <cmath>
//Esame del 25/07/2014
using namespace std;
//Scrivere una funzione che prenda come parametri due interi x e y, e 
//restituisca la somma di tutti gli interi che soddisfano min(x,y) ≤ z ≤ max(x,y). 
int es_1(int x, int y){
    int min = ( x < y )? x : y;
    int max = ( x > y )? x : y;
    int res = 0;
    for (int i = min; i <= max; i++){
	res += i;
    }
    return res;
}

//Scrivere una funzione iterativa che, dato un intero maggiore di 0
//restituisca il valore di f(n) = sin(1) + sin(2) + ... +sin(n)
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

//Scrivere una funzione che prenda come argomenti un vettore di numeri 
//reali, v, il numero di elementi del vettore, n, e un ulteriore numero intero,d.
//La funzione deve spostare gli elementi del vettore di d posizioni.
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
