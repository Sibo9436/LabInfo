#include <iostream> 
using namespace std;
int f(int a[], int &b, int c){
    int x=a[0];
    b=-a[0];
    for(int i = 1 ; i < c; i++){
	b-=a[i];
	a[i]+=a[i-1];
	if(x>a[i]) x=a[i];
    }
    c++;
    return x;
}

int main(){
    int c[]={7,6,5,4},a,b=4,d; 
    a=f(c,d,b);
    for (int i = 0; i<b;i++){
	cout << c[i] << endl;
    }
    cout << a << " " << b << " " << d << endl;
    return 0;
}
