#include <iostream>
#include <cmath>
#include <ctime>
#include "vetmat.h"

int main(){
    
    int a[]={100,4000,2,3,19,5,3,7,342,6,43,21,7};
    print_int_vector(a,13);
    quick_sort(a,0,13);
    print_int_vector(a,13);
    return 0;    
}
