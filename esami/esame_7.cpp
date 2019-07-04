#include <cmath>
#include <iostream>
//Esame del 10/07/2015
using namespace std;

//Scrivere una funzione che, dato un numero intero non negativo n, calcoli 
//la migliore approssimazione per difetto di rad(n)(1000).
int es_1(int n){
    if (n < 0) return 0;
    int res=1;
    int j = 1;
    int cont = res;
    while (res < 1000){
	cont = res;
	res = 1;
	for (int i=0; i<n; i++){
	    res *= j;
	    cout << res << " "	;
	}
	cout << endl;
	j++;
    }
    return j-1;
}

//Scrivere una funzione che, dato un array a di n numeri interi, 
//ritorni un nuovo array che contiene i numeri presenti in a e 
//in più uno 0 inserito ogni volta che appare un 1 in a.
int *es_2(int a[],int n,int  &b){
    int j=0;
    for (int i = 0;i<n;i++){
	if (a[i] ==1){
	    j++;
	}
	j++;
    }
    int *p = new int[j];
    j = 0;
    for (int i = 0; i < n; i++){
	p[j] = a[i];
	if (a[i] == 1){
	    j++;
	    p[j] = 0;
	}
	j++;
    }
    b = j;
    return p;
}

//Scrivere una funzione che, dati due array ordinati a e b contenti rispettivamente 
//m ed n numeri interi, stampi a video la differenza di a e b, ovvero i numeri 
//presenti in a ma non in b.
int *es_3(int a[],int n,int b[], int m){
    int cont = 0;
    bool ok;
    int *p;
    for (int i = 0; i< n; i++){
	for (int j=0; j<m;j++){
	    if (a[i] == b[j]){
		ok = true;
	    }
	}
	if (not ok){
	    cont++;
	}
	ok = false;
    }
    p = new int[cont];
    cont = 0;
    int ops;
    for (int i = 0; i<n; i++){
	for (int j = 0; j<m;j++){
	    if (a[i] == b[j]){
		ok = true;
	    }
	}
	if (not ok){
	    p[cont] = a[i];
	    cont ++;
	}
	ok = false;
    }
    return p;
}

//C'è un modo molto più semplice, veloce e sensato di risolvere questo esercizio
//Apparentemente avevo voglia di fare tutt'altra cosa e complicarmi la vita.


int main(){


    int a =es_1(2);
    cout << endl << a;
    int b[] = {0,1,5,1,0,-3};
    int c = 0;
    int *f=es_2(b,6,c);
    cout << "DIO"<<endl;
    cout << c << endl;
    for (int i = 0; i<c;i++){
	
	cout << f[i] << " ";

    }
    int uno[] = {1,2,3};
    int due[] = {0,2,3};
    int *azz = es_3(uno,3,due,3);
    cout << azz[0];

    return 0;   
    
}
