 #include<iostream> 
 

 using namespace std;

 void f(int x, int a, int b){
     if(a<=x){
	 f(x,a+1,(a+1)*b);
	 cout << b << endl;
     }
 }
 int main(){
     int c;
     cin >> c;
     f(c,1,1);
 }

