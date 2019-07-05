#include <iostream>
#include <cmath>
//Esame del 11/07/2014
using namespace std;

//Scrivere una funzione che prenda come parametri un vettore di interi e 
//il numero di elementi del vettore e restituisca true se gli elementi sono in
//ordine crescente e false altrimenti.
bool es_1(int a[],int n){
    bool check = true;
    for (int i = 1; i<n;i++){
	if (a[i] < a[i-1]){
	    check = false;
	}
    }
    return check;
}

//Scrivere una funzione che, dati due numeri reali, x e eps, restituisca
//il valore di sin(x) con precisione eps.
double es_2(double x, double eps){
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
    
//Scrivere una funzione che prenda una matrice A[r][c] e un vettore p[r] e
//permuti le righe della matrice secondo il vettore p.
int main(){
    int a[] ={1,2,3};
    int b[] = {0,1,2,3,4,5,20,7,8,9,10,11,12,13,14,15,16,17,18,19};
    cout << f(a,3,3) << endl;
    cout << f(a,20,7)<< endl;
    cout << seno(1.25,0.0001) << endl;
    return 0;
}

    int i = 0;
    double buff = 0;
    double fact = 1;
    double check;
    do{
	for (int j = 1; j<=2*i + 1;j++){
	    fact *= j; 
	}
	res = (pow(-1,i)/fact)*pow(x,2*i+1);
	check = res-buff;
	buff = res;
	i++;
    }while(check > e);
    return res;
}
void es_3(int a[3][2], int r, int c, int v[]){
    int b[r][c];
    for (int i = 0; i < r; i++){
	for (int j = 0; j < c; j++){
	    b[i][j] = a[i][j];
	    cout << b[i][j] << " ";
	}
	cout << endl;
    }
    for (int i = 0; i < r; i++){
	for (int j = 0; j < c; j++){
	a[i][j] = b[v[i]-1][j];
	}
    }
    for (int i = 0; i < r; i++){
	for (int j = 0; j < c; j++){
	    cout << a[i][j] << " ";
	}
	cout << endl;
    }
}

    
int main(){
    int a[] = {1,2,3,4};
    int b[] = {1,2,3,5,4};
    cout << "A: " << es_1(a,4)<<endl << "B: "<< es_1(b,5)<< endl;
    cout << endl << endl ;
    int merd[3][2] = {
	{3,5},
	{2,4},
	{1,9}
    };
    int d[] = {3,3,1,};
    es_3(merd,3,2,d);

    return 0;
}
