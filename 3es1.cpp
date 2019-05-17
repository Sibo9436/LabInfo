#include <iostream>
#include <cmath>

using namespace std;

void read_int_vector (int a[], int n){

	
	for (int i=0;i<n;i++){
	
		cin >> a[i];	
	} 
}

void print_int_vector (int a[], int n){

	cout << "[";
	for (int i=0; i < n; i++){
	
		cout <<a[i] << ", ";
	}
	cout << "]";


}

void random_int_vector (int v[], int s, int min, int max){

	for (int i=0; i < s; i++){
		v[i]=rand()% max+min;
	}
}

void print_double_vector (double v[], int s){

	cout << "[";
	for (int i=0; i < s; i++){
	
		cout << v[i] << ", ";
	}
	cout << "]";
}

void vector_sum (const double a[], const double b[],double r[], int n){
	
	for (int i=0; i < n; i++){
		
		r[i] = a[i]+b[i];
	}
}
void vector_diff (const double a[], const double b[], double r[], int n){

}
void scalare (const double a[], double fatt, double r[], int n){

	for (int i=0; i < n; i++){

		r[i]= a[i]*fatt;
	}
}

double dot_product(const double a[],const double b[],int s){

	double dot=0;
	for (int i=0; i < s; i++){
		dot += a[i]*b[i];
	}
	
	return dot;

}

double norm(const double a[], int s ){
	int thing;
	for (int i=0; i < s; i++){
		thing += pow(a[i],2);
	}
	return sqrt(thing);
}

int main(){

int n = 10;
int a[n];

random_int_vector(a, n,0,100);
print_int_vector(a,n);




return 0;
}
