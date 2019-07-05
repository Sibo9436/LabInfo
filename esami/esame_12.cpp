#include <iostream>
//Esame del 25/06/2014
using namespace std;

//Scrivere una funzione che prenda come parametro un intero e restituisca 
//la somma delle cifre che compongono intero. 
int es_1(int n){
    int b;
    int res=0;
    while(n>1){
	b = n%10;
	res += b;
	n = (n-b)/10;
    }
    return res;
}

//Scrivere una funzione iterativa che, dato un intero, n, maggiore di 0, restituisca
//il valore della funzione...

double es_2(int n){
    double res=0;
    for (int i = 1; i <=n; i++){
	res += 1./i;
    }
    return res;
}
double es_2_ric(int n){
    if (n==1)return 1;
    return 1./n + es_2_ric(n-1);
}

//Scrivere una funzione che prenda come argomenti un vettore di numeri reali, v, e il numero 
//di elementi del vettore, n. La funzione deve mettere nella posizione j
//del vettore la somma degli elementi che si trovano nelle posizioni 0,1,...,j.
void es_3(double a[], int n){
    for (int i = 1; i < n ; i++){
	a[i] += a[i-1];
    }
}
int main(){
    cout << es_1(231) << endl;
    cout << es_2(10) << " " << es_2_ric(10) << endl;
    double a[] = {1.2,2.2,3.0,4.5};
    es_3(a,4);
    cout << a[0] << " " << a[1] << " " <<a[2] << " " <<a[3] << endl;
    return 0;
}






