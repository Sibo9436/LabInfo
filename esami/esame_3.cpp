#include <iostream>

using namespace std;

int boh(int a[],int  n){
    int b = a[0];
    int contatorr =0;
    int temp =0;
    int fin;
    for (int i = 1; i < n ; i++){
	if (a[i-1] > a[i]){
	    b += a[i];
	    fin = b;
	    contatorr ++;
	}else if(a[i-1]< a[i]){
	    if ( contatorr > temp){
	    temp = contatorr;
	    contatorr = 0;
	    fin = b;
	    }
	    b = a[i];
 
	}
    }
    return fin;
}
int main(){
    int c[] = {7,8,13,12,4,9,5,3,2,1,6};
    int n = 11;
    int a = boh(c, n);
    cout << a<<endl;
    return 0;
}
