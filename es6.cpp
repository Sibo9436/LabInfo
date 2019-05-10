#include <iostream>
#include <math.h>

using namespace std;
int fib(int x){
	if (x <= 1){
		return x;
	}else{
		int res = fib(x-1)+fib(x-2);
		return res;	
	}
}
int main(){
int quanti;
cout << "Quanti? ";
cin >> quanti;
cout << fib(quanti);

return 0;
}
