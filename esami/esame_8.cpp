#include <iostream>
#include <cmath>

using namespace std;
bool es_1(int a[],int n){
    bool check = true;
    for (int i = 1; i<n;i++){
	if (a[i] < a[i-1]){
	    check = false;
	}
    }
    return check;
}
double es_2(double x, double e){
    double res;
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
