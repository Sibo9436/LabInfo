#include<iostream>
using namespace std;


long double Pi(int n){
    long double pi=0;
    for (long int j = 0; j <=n; j++){
	pi += ( j%2==0)? 4.0/(2.0*j+1) : -4.0/(2.0*j+1);
    }
    return pi;
}
double PI(double eps){
    int j = 0;
    double pi,check;
    do{
	check = pi;
	pi += ( j%2==0)? 4.0/(2.0*j+1) : -4.0/(2.0*j+1);
	j++;
    }while ((pi - check > 0 && pi - check > eps) || (pi -check < 0 && check - pi > eps));
    return pi;

}

int main(){
    cout.precision(17);
    cout << Pi(100000) << endl;
    cout << PI(0.00001) << endl;
    return 0;
}
