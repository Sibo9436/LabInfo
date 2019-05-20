#ifndef VETMAT
#define VETMAT

using namespace std;
const int ms = 5;
extern int ue;
void read_int_vector (int a[], int n);
void print_int_vector (int a[], int n);
void random_double_vector(double v[], int s, double min, double max);
void random_int_vector (int v[], int s, int min, int max);
void print_double_vector (double v[], int s);
void vector_sum (const double a[], const double b[],double r[], int n);
void vector_diff (const double a[], const double b[], double r[], int n);
void scalare (const double a[], double fatt, double r[], int n);
double dot_product(const double a[],const double b[],int s);
double norm(const double a[], int s );
int weird(int a[], int n, int min, int max);
void selection_sort(int a[], int n );
int part(int v[], int inf, int sup);
void quick_sort(int v[], int inf, int sup);
void random_double_matrix(double m[][ms], int s1, int s2, double min, double max);
void print_double_matrix(double m[][ms], int s1, int s2);
int matr_vett(double a[][ms],int r, int c, double v1[],double v2[],int l1,int l2);
int matrix(double m1[][ms], double m2[][ms], double m3[][ms], int r1,int c1, int r2,int c2,int r3, int c3);



#endif
