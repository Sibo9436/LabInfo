#include <iostream>
#include <cmath>

using namespace std;
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
double es_2(double x, int n){
    if (n == 0) return 1;
    return x*es_2(x,n-1);
}
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
