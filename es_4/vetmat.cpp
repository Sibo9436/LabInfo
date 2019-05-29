//      WARNING

	   / \
          // \\
         // _ \\
        // | | \\
       //  | |  \\
      //   | |   \\
     //    | |    \\
    //     | |     \\
   //      |_|      \\
  //        _        \\
 //        |_|        \\
//=====================\\

// WRONG LIFE DECISIONS
//        AHEAD

#include <iostream>
#include <cmath>
#include <ctime>
#include "vetmat.h"

// E via di commenti <3     

using namespace std;

Vett::Vett(){		    
			    // Costruttore generico
    len = 1;		    //
    p = new double[l];	    // Nulla da vedere qui
    p[0] = 1;		    // Circolareee
}			    


Vett::Vett(int l): len(l){	    
				    	// Altro costruttore altra corsaa
    p = new double[l];		    	//    
    for (int i=0; i< len; i++){	    	// Vettore nullo
	p[i]= 0;		    	// Easy
    }					//	
}

Vett::Vett(double a[],int l):len(l){ 
					// Finalmente qualcosa di serio qui
    p = new double[len];		//
    for (int i = 0; i< len; i++){	// Si lavora eh, si lavora
	p[i]= a[i];			//
    }					// 
}

Vett::~Vett(){
				    	// Distruttore
    delete[] p;				// Killer without a cause
}   

void Vett::print (){
					// Print
    cout << "[";			//
    for (int i=0; i < len; i++){	// Pretty self explainatory innit?
	if (i==len-1){			//
	    cout <<p[i];		// Piccole aggiunte trash per stamparlo
	}else {				// come si deve
	    cout  << ", "<<p[i];	// 
	}				// How little do I value my spare time tho
    }					//
    cout << "]"<< endl;			//
}

void Vett::random_double_vector(double min, double max){
						    	// Random
    srand (time(NULL));				    	//
	for (int i=0; i< len;i++){			// Popola il vettore con
	    p[i]=(double)rand()/max+min;		// numeri accazzo
	}					    	//
}

Vett Vett::operator+ (const Vett& b){
										    // Operatore "+"										    // 
    Vett temp(len);								    // 
    if (len == b.len){								    // Effettua la
        for (int i=0; i < len; i++){						    // somma tra due
	    temp.p[i] = p[i]+b.p[i];						    // vettori
	}									    //
    }else{									    // L'utilizzo è							    
        cout << "Impossibile sommare Vettori, restituzione vettore nullo" << endl;  // {sum =
    }										    // vet1 + vet2;}
    return temp;								    //
}										    
    
Vett Vett::operator- (const Vett& b){
					    // Operatore " - "
    Vett temp(len);			    // 
    if (len==b.len){			    // Non avevo cazzi de
	for (int i = 0; i< len; i++){	    // mettere l'else
	    temp.p[i]=p[i]-b.p[i];	    //
	}				    // Sottrae du' vettori
    }					    // Mecojoni
    return temp;			    //
}

Vett Vett::operator*(const double fatt){
					    // Operatore " * "
    Vett temp(len);			    // 
    for (int i=0; i < len; i++){	    // A bit spicier
        temp.p[i]=p[i]*fatt;		    //
    }					    // Moltiplica un vettore
    return temp;			    // per uno scalare
}

double Vett::operator*(const Vett& b){
					    // Operatore " * "
    double dot = 0;			    // 
    if (len == b.len){			    // C-Cosa?? Di nuovo??
	for (int i=0; i < len; i++){	    // Non è possibile!!
	    dot += p[i]*b.p[i];		    // Lo scouter deve essersi rotto!!!!
	}				    //
    }					    // Tutto vero, overload della funzione
    return dot;				    // nulla di incredibile ma finally spiciness
}

double Vett::norm(){
					    // Norma
    double thing;			    //
    for (int i=0; i < len; i++){	    // Hai l'acquolina in bocca eh?
	thing += pow(p[i],2);		    // Cane!
    }					    // Niente pasta o melanzane qui
    return sqrt(thing);			    // Accattone che non sei altro
}						

int Vett::weird(int min, int max){	    
					    // Ehm
    int mm=min;				    //
    int b[max-min];			    // Non so bene come si chiami
    for (int i=min; i<=max; i++){	    // sta roba
	mm = (p[i] < p[mm] ) ? i : mm;	    // Serve per il selection
    }					    // sort, famoselo bastà.
    return mm;				    //
}   
void Vett::selection_sort(){		    
					    // Selection Sort
    int r[len];				    //
    int swap;				    // Sorting algorithm simpatico
    int index;				    // nulla di incredibile, l'idea
    int b;				    // di fondo è quella di prendere 
    for (int i =0; i<len; i++){		    // il numero dal valore più basso 
    	swap = p[i];			    // e spostarlo all'inizio del vettore
	index = weird(i,len-1);		    // poi si ripete la stessa operazione
    	b = p[index];			    // togliendo dalla zona d'azione di weird
	p[i]=b;				    // il primo valore, via così fino 
	p[index]=swap;			    // ad avere un vettore ordinato.
	}				    // Wow that was actually serious, shit.
}


int Vett::part(int inf, int sup){
						// Kay shit's boutta get real
    int piv = p[inf];				//
    int i = inf +1;				// Qui si prende un vettore e si
    int j = sup;				// stabilisce un perno (in questo caso
    int swap;					// nella prima posizione del vettore).
    while (i<=j){				// Il vettore viene ora percorso
	if (p[i] <= piv){			// in entrambe le direzioni (circa)
	   i++;					// allo scopo di posizionare i valori
    	}else if(p[i] > piv and p[j] > piv){	// inferiori al perno alla sua sinistra
	   j--;					// e a destra quelli maggiori.
    	}else if(p[i] > piv or p[j] <= piv){	// Fatto questo non resta che restituire
	    swap = p[i];			// la posizione del pivot nella nuova
	    p[i]=p[j];				// configurazione.
	    p[j]=swap;				// 
	    i++;				// Such ++ much --
    	    j--;				// 
    	}					// Avrei potuto evitare tutte queste 
    }						// vuote e parentesi inutili? Si.
    p[inf]=p[j];				// Do I care? No.
    p[j]=piv;					//
    return j;					//
}

void Vett::quick_sort(int inf, int sup){
						// Quick Sort 
    if (inf<sup){				//
	int piv;				// Effettiva implementazione
	piv = part(inf,sup);			// il perno dato dal primo part
	quick_sort(inf,piv-1);			// viene usato per dividere il  
	quick_sort(piv+1,sup);			// vettore in due più piccoli sui quali
    }						// applicare la funizione ricorsivamente.
}

// E anche questa strunzata è stata commentata,
// un'altra grande vittoria per la violenta perdita di tempo,
// il prossimo passo sarà trasformare la classe in una template
// come dio comanda.
// Sibo out.


