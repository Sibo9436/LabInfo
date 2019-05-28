#include <iostream>
#include <cmath>
#include "poli.h"

using namespace std;

int main(){

Poli paolo(1);
paolo.setValue(0,10);
paolo.print();

cout << endl;
int ray[]={10,9,8,7,6,5,4,3,2,1};
int yar[]={1,2,3,4,5,6,7,8,9,10};
Poli paul(10,ray);
paul.print();
Poli luap(10,yar);
luap.print();

Poli no;
no = paul;
no.print();

Poli on;
on = paolo + luap;
on.print();
int un[] = {0,1,0,1};
int du[] = {1,0,1};
Poli uno(4,un);
Poli due(3,du);
Poli tre;
tre = uno * due;
tre.print();
cout << tre.calcola(2);
tre = tre.deriva();
tre.print();

cout << endl << endl  <<endl;
double zero = paul.newton();
cout << zero;


return 0;


}
