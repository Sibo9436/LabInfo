#include <iostream>
#include <math.h>

using namespace std;
int powa(int b, int e, int &conta){
int ris;

	if (e == 0){
		return 1;
	}else if (e > 0){
		ris =  b*powa(b,e-1, conta);
		conta++;
		return ris;
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
