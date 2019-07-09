#include <iostream>
using namespace std;
void parte1(int a){
    int i = 0;
    int j = 0;
    while (i < a){
	while (j < a){
	    cout << "*";
	    j++;
	}
	cout << endl;
	i++;
	j=0;
    }
}
void parte2(int a){
    int i = 1,j=0;
    while (i <= a){
	while (j < i){
	    cout << "*";
	    j++;
	}
	cout << endl;
	i++;
	j=0;
    }
}

void parte3(int a){
    int i=0,j=0,k=a;
    while (i < a){
	while (j < i){
	    cout << " ";
	    j++;
	}
	while (k > i){
	    cout <<  "*";
	    k--;
	}
	cout << endl;
	j=0;
	k=a;
	i++;
    }
}
int main(){
    int a;
    cout << "Dammi un numero: ";
    cin >> a;
    parte1(a);
    cout << endl << endl;
    parte2(a);
    cout << endl << endl;
    parte3(a);
    return 0;
}
