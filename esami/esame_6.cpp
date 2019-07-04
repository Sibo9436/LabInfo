#include <iostream>
#include <cmath>

//Esame del 15/09/2015

using namespace std;

//Scrivere una funzione che, dato un numero n, stampi a video
// la seguente tabella n x n
// 1 2 3 4 5 
// 2 4 6 8 10
// 3 6 9 12 15
// 4 8 12 16 20
// 5 10 15 20 25
void es_1(int n){
    for (int i = 1; i <= n; i++){
	for (int j = 1; j <= n; j++){
	    cout << j*i << " ";
	}
	cout << endl;
    }
}


//Scrivere una funzione che, dato un array a di n numeri interi, ritorni un nuovo array
// che contiene solo i numeri pari presenti in a, nello stesso ordine in cui compaiono.
int es_2(int a[],int n, int &b){
    int *p;
    for (int i=0;i<n;i++){
	if (a[i]%2==0){
	    b++;
	}
    }
    p = new int[b];
    int j = 0;
    for (int i=0;i<n;i++){
	if (a[i]%2==0){
	    p[j] = a[i];
	    cout << p[j]; 
	    j++;
	}
    }
    cout << endl;
    return b;
}

//Scrivere una funzione che, dati due array a e b contenenti rispettivamente m ed n
//numeri interi, ritorni true se ò'array a è un sotto-array di b, false altrimenti.
bool es_3(int a[],int b[],int n,int m){
    int k = 0;
    bool dan = true;
    for ( int i = 0; i< n; i++){
	if ( a[i] == b[0]){
	    k = i;
	    for (int j = 1; j < m; j++){
		k++;
		if (a[k] != b[j]){
		    cout << "Falso " << a[k] << " " << b[j];
		    dan = false;
		    break;
		}
	    }
	}
    }
    return dan;
}
int main(){
    
    es_1(5);
    int rif = 0;
    int vec[] = {0,-1,5,3,-2,-3};
    cout << es_2(vec,6,rif) << endl;
    int a[] = {1,2,3};
    int b[] = {0,7,1,2,3,9,8};
    if (es_3(b,a,7,3)){
	cout << "a è sottoarray di b" << endl;
    }else {
	cout << "a non è sottoarray di b" <<endl;
    }




    return 0;
}
