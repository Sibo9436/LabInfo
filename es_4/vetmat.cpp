#include <iostream>
#include <cmath>
#include <ctime>
#include "vetmat.h"
using namespace std;
int ue = 0;
void read_int_vector (int a[], int n){


	
	for (int i=0;i<n;i++){
	
		cin >> a[i];	
	} 
}

void print_int_vector (int a[], int n){

	cout << "[";
	for (int i=0; i < n; i++){
		if (i==n-1){
		cout <<a[i];
		}else {	
		cout <<a[i] << ", ";
		}
	}
	cout << "]"<< endl;


}
void random_double_vector(double v[], int s, double min, double max){
	srand (time(NULL));
	for (int i=0; i< s;i++){
	v[i]=(double)rand()/max+min;
	}
}

void random_int_vector (int v[], int s, int min, int max){
	srand (time(NULL));
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

int weird(int a[], int n, int min, int max){
	int mm=min;
	int b[max-min];
	for (int i=min; i<=max; i++){
		
		mm = (a[i] < a[mm] ) ? i : mm;	
	}
	return mm;
}
void selection_sort(int a[], int n ){
	int r[n];
	int swap;
	int index;
	int b;
	for (int i =0; i<n; i++){
		swap = a[i];
		index = weird(a,n,i,n-1);
		b = a[index];
		a[i]=b;
		a[index]=swap;

	}
	print_int_vector(a,n);
}


int part(int v[], int inf, int sup){

	int piv = v[inf];
	int i = inf +1;
	int j = sup;
	int swap;
	while (i<=j){
		if (v[i] <= piv){
			i++;
		}else if(v[i] > piv and v[j] > piv){
		
			j--;
		}else if(v[i] > piv or v[j] <= piv){
			swap = v[i];
			v[i]=v[j];
			v[j]=swap;
			i++;
			j--;
			
		}
	}
	v[inf]=v[j];
	v[j]=piv;
	return j;
}

void quick_sort(int v[], int inf, int sup){
	ue++;	
	if (inf<sup){
		int piv;
		piv = part(v,inf,sup);
		quick_sort(v,inf,piv-1);
		quick_sort(v,piv+1,sup);
	
	}




}
void random_double_matrix(double m[][ms], int s1, int s2, double min, double max){
	
	srand(time(NULL));
	for (int i=0; i< s1; i++){
		for (int j=0; j< s2; j++){
			m[i][j] = (double)rand()/RAND_MAX*max-min;		
		}
	}

}
void print_double_matrix(double m[][ms], int s1, int s2){
	
	for (int i=0; i < s1; i++){
		for (int j=0; j < s2; j++){
			cout << "| " << m[i][j]; 
		}	
	cout << "|" << endl;
	}

}
int matr_vett(double a[][ms],int r, int c, double v1[],double v2[],int l1,int l2){
    if (r==l2 and l1 == c){
	double temp;
	for (int i=0; i<r;i++){
	    for (int j=0;j<c;j++){
	        temp += a[i][j]*v1[j];	
	    }
        v2[i]=temp;
        temp=0;	    
        }
	return 0;
    }else {
	return 1;
    }
}

int matrix(double m1[][ms], double m2[][ms], double m3[][ms], int r1,int c1, int r2,int c2,int r3, int c3){
    for (int i=0; i<r1; i++){
    	for (int j=0; j<c2;j++){
	    for (int n=0; n<c1;n++){
		m3[i][j] += m1[i][n]*m2[n][j];	
	    }    
	}
    }
return 0 ;
}
/*
int main(){
int n;

cout << "How big the vecc? ";
cin >> n;
int a[n];

random_int_vector(a,n,0,10000);
print_int_vector(a,n);
double start = clock();
//selection_sort(a,n);
double end = clock();
double seconds = (end-start)/CLOCKS_PER_SEC;
cout << "Sel sort in " << seconds << " secondi" << endl;
start = clock();
quick_sort(a,0,n-1);
end = clock();
seconds = (end-start)/CLOCKS_PER_SEC;
cout << "Quick sort in " << seconds << " secondi" << " per " << ue << " iterazioni" <<endl;
//print_int_vector(a,n);
//cout << part(a,0,n-1);
//print_int_vector(a,n);

int r=5;
int c=5;
double m[r][ms];
random_double_matrix(m,r,ms,1,10);
print_double_matrix(m,r,ms);



return 0;
}
*/
