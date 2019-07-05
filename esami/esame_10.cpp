#include <iostream>
#include <cmath>
//Esame del 12/07/2013
using namespace std;
//Esercizio sull'integrale INCOMPLETO
double es_1(int n, double A[],double a, double b, double d){
    int N=0;
    double p;
    double min;
    double max;
    double x;
    double res;
    while(true){
	N++;
	min = a+ d*N;
	max = a + d*(N+1);
	if ( min <= b && max > b) break;
    }
    for (int i = 0; i <= N; i++) {
	x = a+d*i;
	for (int j= 0; j <n+1; j++){
	    p += A[j]*pow(x,j);
	}
	res += p * d;
    }
    return res;
}

//Scrivere una funzione ricorsiva che, dato un intero positivo n e un double x, calcoli
//x^n.
double es_2(double x, int n){
    if (n == 0) return 1;
    return x*es_2(x,n-1);
}

//Scrivere un programma che stampa sul schermo la seguente tabella di moltiplicazioni
//
//    1 2 3 4 5 6 7 8 9 10 
//
// 1  1 2 3 4 5 6 7 8 9 10 
// 2  2 4 6 8 10 12 14 16 18 20 
// 3  3 6 9 12 15 18 21 24 27 30 
// 4  4 8 12 16 20 24 28 32 36 40 
// 5  5 10 15 20 25 30 35 40 45 50 
// 6  6 12 18 24 30 36 42 48 54 60 
// 7  7 14 21 28 35 42 49 56 63 70 
// 8  8 16 24 32 40 48 56 64 72 80 
// 9  9 18 27 36 45 54 63 72 81 90 
// 10 10 20 30 40 50 60 70 80 90 100
//
//con cicli while annidati.
//
void es_3(){
    int i = 1;
    int j = 0;
    while (i <=10){
	while (j <= 10){
	    cout << i*j << " ";
	    j++;
	}
	cout << endl;
	i++;
	j=0;
    }
}
int main(){
    double a[] = {1,-1,1};
    cout << "L'integrale approssimato è: " << es_1(2,a,1,2,0.00001)<< endl;
    cout << "La potenza è: " << es_2(3.0,2) << endl;
    es_3();
    return 0;
}
