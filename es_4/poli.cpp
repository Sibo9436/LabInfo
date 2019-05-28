// Definizione funzioni della classe Poli
// A chiunque stia leggendo questo commento,
// questa è una richiesta di aiuto. Sono le 
// 2.59 del mattino e io sto formattando e 
// commentando questo file perché internet 
// ultimamente ha dato problemi con brawlhalla.
// Starò bene, forse, Andrea Sibona.



#include <iostream>
#include <cmath>  
#include "poli.h"	    // Occhio alle virgolette, che indicano l'header come locale

using namespace std;

Poli::Poli(){					          // Nulla di eclatante qui
			                                  //
    len = 1;						  // Costruttore generico
    p = new int[len];				          //
    cout <<"Costruttore cieco";				  // BO-RING!
}

Poli::Poli(int l):len(l){
							  // Costruttore a singolo input 
    cout << "Sono il Costruttore! Oooooh! Be spooked " ;  // 
    p = new int[l];					  //  
    for (int i = 0; i<l;i++){				  // Crea un polinomio a coeff. 0
	p[i] = 0;					  //
    }							  // a partire dalla lunghezza data
}

Poli::Poli(int l, int a[]):len(l){
							  // Another one  
    cout << "Sono l'overladed! Spooky! " << endl;		  // Finalmente un costruttore decente!   
    p = new int[l];                                       // Prende in input l'array dei coeff
    for (int i=0; i<l; i++){                              // e la lunghezza desiderata e crea 
	setValue(i,a[i]);	                          // il polinomio
    }                                                      
}

Poli::~Poli(){
							  // Distruttore 						
    delete[] p;						  // ripulisce la memoria allocata per p
    cout << "I'm the spoopy destructor!!" << endl;        // e printa cazzate
}

void Poli::print(){
							  // Print
    for (int i=0; i<len;i++){				  //  
	if (i == 0) cout << p[i];	    		  //  
	else cout <<" + " << p[i]<< "x^" << i;		  // Stampa a schermo il polinomio
    }							  //
    cout <<" Polinomio di lunghezza  "<< len << endl;	  // e la sua lunghezza
}  

void Poli::setValue(int index, int value){		   
							  // ... 
     p[index] = value;					  // ...
}							  

int Poli::getValue(int index){				    
						          // ...		
    return p[index];					  // ...
}

Poli& Poli::operator= (const Poli& b){
							  // Operatore " = "
    len = b.len;					  //  
    delete[] p;						  // Non ero sicuro che l'assegnazione
    p = new int[len];					  // funzionasse come volevo io
    for (int i=0;i<len;i++){			          // quindi ho fatto che metterla qui
//	setValue(i,b.getValue(i));			  //
	p[i]=b.p[i];					  // (In realtà mi diverte creare operatori)
    }							  //
    return *this;					  //
}

Poli Poli::operator+ (const Poli& b){
					                  // Operatore " + "  	
    int l = (len >= b.len) ? len : b.len;                 // 
    int smol = (len <=  b.len)? len : b.len;              // Definisce la somma tra due oggetti
    Poli temp(l);                                         // di tipo poli, più comodo e intuitivo
    for (int i=0; i<l; i++){                              // rispetto al chiamare funzioni come
	if (i<smol){                                      // Poli_3=somma(Poli_1,Poli_2) (non ObjOr)
	    temp.p[i] = p[i] + b.p[i];                    // o Poli_3=Poli_1.somma(Poli_2)
	}else if (i>= smol and len > b.len){              //
	    temp.p[i] = p[i];                             // Probabilmente esiste un modo per
	}else if (i>= smol and len < b.len){		  // evitare tutte le porte logiche
	    temp.p[i] = b.p[i];				  // ma ehi, non avevo voglia di trovarlo
	}						  //
    }							  //
    return temp;					  //
}

Poli Poli::operator* (const Poli& b){
							  // Operatore " * "  							  
    int g1 = len -1;                                      // 
    int g2 = b.len-1;                                     // Definisce il prodotto 
    Poli temp(g1+g2+1);                                   // tra due polinomi
    for (int i = 0 ; i< len; i++){                        // 
	for (int j=0; j< b.len; j++){                     // Un polinomio di grado n
	    temp.p[i+j] += p[i]*b.p[j];                   // avrà n+1 coefficienti
	}	                                          // Ovviamente la somma i+j
    }                                                     // non è data da una sola coppia i,j
    return temp;					  // hence the " += "
}

double Poli::calcola(double x){
							  // X   
    double res;                                           // 
    for (int i = 0; i< len ; i++){                        // Calcola il valore del 
	res += p[i]*pow(x,i);                             // polinomio data x
    }                                                     // 
    return res;                                           //
}                                                         
                                                          
Poli Poli::deriva(){                                      
							  // Deriva   
    Poli temp(len-1);                                     // 
    for (int i = 1; i<len; i++){                          // Restituisce la derivata
	temp.p[i-1]= i*p[i];	                          // del polinomio
    }                                                     // 
    return temp;                                           //
}                                                         
                                                          
double Poli::newton(){                          
							  // Newton  
    double x0 = 4;                                        // 
    int iter = 10;                                        // Applica il metodo di newton
    double x1;                                            // per l'approssimazione
    Poli der;                                             // dello zero di un polinomio a partire da
    double  swap;                                         // un valore iniziale
    der = deriva();                                       //
    for (int i=0; i<iter; i++){                           // Sono certo al 90% che l'implementazione
	x1 = x0 - calcola(x0)/der.calcola(x0);            // sia sbagliata ma fottesega, sta roba
	x0 = x1;					  // gira e restituisce una double, more	
    }							  // than expected
    return x1;						  //  
}

// Boh  qualcuno venga a salvarmi, questo codice non aveva 
// decisamente bisogno di essere commentato, soprattutto 
// con commenti di dubbia utilità come  questi.
//

