#include <iostream>
#include <math.h>

using namespace std;

int powa(int base, int esp, int &count){
int halp;
	if (esp == 0){
		return 1;
	}else if(esp%2==0){
		count ++;
		halp = powa(base, esp/2, count)*powa(base, esp/2, count);
		return halp;
	}else if(esp%2==1){
		count ++;
		halp = base*powa(base, (esp-1)/2, count)*powa(base, (esp-1)/2, count);
		return halp;
}
}
int main(){
int n;
int aiuto;
int bass;
int conta = 1;
cout << "Base? ";
cin >> bass;
cout << "Exp? ";
cin >> n;
aiuto = powa(bass,n,conta);
cout << aiuto << endl;
cout <<"La funzione powa è stata chiamata " << conta << " volte";
return 0;
}
