#include <iostream>
#include <cmath>
#include <ctime>
#include "vetmat.h"

int main(){
    double b[]={1,2,3,4,5,6,7,8,9,10,11,12,13};    
    double a[]={100,4000,2,3,19,5,3,7,342,6,43,21,7};
    Vett vect(a,13);
    Vett tcev(b,13);
    vect.print();
    tcev.print();
    double what = tcev*vect;
    Vett cos = tcev*0.5;
    cout << what;
    cos.print();

    return 0;    
}
