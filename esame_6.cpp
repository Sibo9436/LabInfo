#include <iostream>
#include <cmath>

using namespace std;


void es_1(int n){
    for (int i = 1; i <= n; i++){
	for (int j = 1; j <= n; j++){
	    cout << j*i << " ";
	}
	cout << endl;
    }
}

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
