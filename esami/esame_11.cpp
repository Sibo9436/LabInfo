#include <iostream>
#include <cmath>
//Esame del 19/09/2017
using namespace std;

//Si scriva una funzione che prenda un vettore di interi e il numero di elementi del
//vettore e riordini gli elementi del vettore in ordine decrescente.
void es_1(int a[], int n){
    int min = 0;
    int swap = a[0];
    for (int i = 0; i < n; i++){
	swap = a[i];
	min = i;
	for (int j = i; j < n; j++){
	    min = (a[j] > a[i])? j : min;
	    a[i] = (a[j] > a[i])? a[j] : a[i];
	}
	a[min] = swap;
    }
}
//Again ma ricorsivo...?
void es_1b(int a[], int n){
    if (n==1) return;
    int swap;
    int max=0;
    for (int i = 0 ; i < n ; i++){
	max = ( a[i] > a[max])? i : max;
    }
    swap = a[0];
    a[0] = a[max];
    a[max] = swap;
    es_1b(a+1,n-1);
}

//Di nuovo la funzione del seno
double seno(double x, double eps){
    double res = x;
    double num=x,den=1,val;
    int k = 3, j = 1;
    do{
	num*= x * x;
	den *= k*(k-1);
	val = num/den;
	res += (j%2==0)? val : -val;
	j++;
	k +=2;
    }while((val > 0 and val > eps) or ( val < 0 and -val > eps));
    return res;
}

//Si scriva una funzione che prenda come argomenti un vettore di numeri reali che 
//rappresenta un insieme e stampi a video tutti i sottoinsiemi di cardinalità 2 
//dell'insieme.
void es_3(double a[], int n){
    for (int i = 0; i < n; i++){
	for (int j = i+1; j < n; j++){
	    cout << a[i] << " " << a[j];
	    cout << endl;
	}
    }
}
int main() {
    int a[] = {3,2,5,4,6,1};
    es_1b(a,6);
    for (int i = 0; i < 6; i++){
	cout << a[i] << " ";
    }
    cout << endl;
    int b[] = {1,2,3,4,5,6,7,8};
    es_1(b,8);
    for (int i = 0; i < 8; i++){
	cout << b[i] << " ";
    }
    cout << endl;
    cout << seno((M_PI)/4,0.0001) << endl;
    double c[] = {1.2,0.5,2.3};
    es_3(c,3);
    return 0;
}

