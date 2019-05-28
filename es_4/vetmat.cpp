#include <iostream>
#include <cmath>
#include <ctime>
#include "vetmat.h"

using namespace std;

Vett::Vett(){}

Vett::Vett(int l): len(l){
    
    p = new double[l];
    for (int i=0; i< len; i++){
	p[i]= 0; 	
    }    
}
Vett::Vett(double a[],int l):len(l){
    
    p = new double[len];
    for (int i = 0; i< len; i++){
	p[i]= a[i];
    }
}

void Vett::print (){

    cout << "[";
    for (int i=0; i < len; i++){
	if (i==len-1){
	    cout <<p[i];
	}else {	
	    cout <<p[i] << ", ";
	}
    }
    cout << "]"<< endl;
}

void Vett::random_double_vector(double min, double max){

    srand (time(NULL));
	for (int i=0; i< len;i++){
	    p[i]=(double)rand()/max+min;
	}
}

Vett Vett::operator+ (const Vett& b){

    Vett temp(len);
    if (len == b.len){
        for (int i=0; i < len; i++){	    	
	    temp.p[i] = p[i]+b.p[i];
	}
    }else {
        cout << "Impossibile sommare Vettori, restituzione vettore nullo" << endl;
    }
    return temp;
}
    
Vett Vett::operator- (const Vett& b){
   
    Vett temp(len);
    if (len==b.len){	
	for (int i = 0; i< len; i++){
	    temp.p[i]=p[i]-b.p[i];
	}	
    }
    return temp;
}
Vett Vett::operator*(const double fatt){
	
    Vett temp(len);
    for (int i=0; i < len; i++){
        temp.p[i]=p[i]*fatt;
    }
    return temp;
}

double Vett::operator*(const Vett& b){

    double dot = 0;
    if (len == b.len){
	for (int i=0; i < len; i++){
	    dot += p[i]*b.p[i];
	}
    }
    return dot;

}

double Vett::norm(){

    int thing;
    for (int i=0; i < len; i++){
	thing += pow(p[i],2);
    }
    return sqrt(thing);
}

int Vett::weird(int min, int max){

    int mm=min;
    int b[max-min];
    for (int i=min; i<=max; i++){	
	mm = (p[i] < p[mm] ) ? i : mm;	
    }
    return mm;
}
void Vett::selection_sort(){

    int r[len];
    int swap;
    int index;
    int b;
    for (int i =0; i<len; i++){
    	swap = p[i];		
	index = weird(i,len-1);
    	b = p[index];
	p[i]=b;
p[index]=swap;

	}
	
}


int Vett::part(int inf, int sup){

	int piv = p[inf];
	int i = inf +1;
	int j = sup;
	int swap;
	while (i<=j){
		if (p[i] <= piv){
			i++;
		}else if(p[i] > piv and p[j] > piv){
		
			j--;
		}else if(p[i] > piv or p[j] <= piv){
			swap = p[i];
			p[i]=p[j];
			p[j]=swap;
			i++;
			j--;
			
		}
	}
	p[inf]=p[j];
	p[j]=piv;
	return j;
}

void Vett::quick_sort(int inf, int sup){
    	
	if (inf<sup){
		int piv;
		piv = part(inf,sup);
		quick_sort(inf,piv-1);
		quick_sort(piv+1,sup);
    	}

}
/*
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
}*/
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
