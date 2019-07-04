#include <iostream>
#include <cmath>

using namespace std;

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
double es_2(double x, long double eps){
    int k;
    int i = 0;
    double res = 0;
    double check;
    int fatt = 1;
    do{
	k = 2*i+1;
	for (int j = k; j > 0; j--){
	    fatt *=  j;
	}
	check = res;
	res += (pow(-1,i)/fatt)*pow(x,k);
	i++;
	fatt = 1;
    }while(abs(res-check) > eps);
    return res;
}
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
    es_1(a,6);
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
    cout << es_2((M_PI)/4,0.0001) << endl;
    double c[] = {1.2,0.5,2.3};
    es_3(c,3);
    return 0;
}

