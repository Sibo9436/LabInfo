#include <iostream>
#include <math.h>

using namespace std;
bool check(double x, double y, double cx, double cy, double r){
	if (pow(x-cx,2)+pow(y-cy,2)<=pow(r,2)){
		return true;
	}
	return false;
}
int main(){
double xp,yp;
double cx,cy;
double r;
cout << "Gimme the x 'n' the y ";
cin >> xp >> yp;
cout << "Coordinate del centro? ";
cin >> cx >> cy;
cout << "Raggio? ";
cin >> r;

bool cerc = check(xp,yp,cx,cy,r);
if (cerc){
	cout << "Yes" <<endl;
} else {
	cout << "Nah" << endl;
}



return 0;
}
