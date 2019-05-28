#ifndef VETMAT_H
#define VETMAT_H

using namespace std;

class Vett{
    private:

    int len;
    double * p;

    public:

    Vett();
    Vett(int);
    Vett(double[],int);
    void print();
    void random_double_vector(double min, double max);
    Vett operator+(const Vett&) ;
    Vett operator-(const Vett&);
    Vett operator*(const double) ;
    double operator*(const Vett&);
    double norm();
    int weird(int min, int max);
    void selection_sort();
    int part(int inf, int sup);
    void quick_sort(int inf, int sup);

};


#endif
