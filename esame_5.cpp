
#include <iostream>

using namespace std;

double serie(int n, int d){
    double aiut=0;
    for (i = 1; i <= n; i++){
	aiut += 1/(i*d);
    }
}

double serieric(int n, int d){
    double aiut;
    if (n == 0){
	return 0;
    }

    aiut += serieric(n-1,d);
    

    return aiut;

}
