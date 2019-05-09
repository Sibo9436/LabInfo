#include <iostream>
#include <math.h>

using namespace std;

void hanoi(int n, int from, int to){
        int pal;
        if (from == 1 or to == 1){
                if (from == 2 or to == 2){
                        pal = 3;
                }else if (from == 3 or to == 3){
                        pal = 2;
                }
        }else if (from == 2 or to == 2){
                if (from == 3 or to == 3){
                        pal = 1;
                }
        }

        if (n == 0){
                cout << "----" << endl;
        }else if (n > 0){
                hanoi(n-1,from, pal);
                cout << from << " -> " << to << endl;
                hanoi(n-1, pal, to);
        }
}

int main() {
        int n;
        cout << "Quanti dischi? ";
        cin >> n;
        hanoi(n,1,3);
        return 0;
}
