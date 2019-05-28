#ifndef POLI_H
#define POLI_H

//Prima o poi dovrò trasformarla in una classe template

using namespace std;

class Poli{
    
public:
    Poli();
    Poli(int );    
    Poli(int, int[]);
    ~Poli();
    void print();
    void setValue(int, int);
    int getValue(int);
    double calcola(double);
    Poli deriva();
    double newton();
    Poli& operator=(const Poli&);
    Poli operator+(const Poli&);
    Poli operator*(const Poli&);
    
private:
    int len;
    int * p;
};

#endif
