/*1) Scrivere una funzione che riceva in ingresso due numeri interi (min e max) e restituisca
 * un valore generato casualmente all’interno del range i cui gli estremi sono i due valori passati in ingresso (estremi inclusi).
*Invocare tale funzione opportunatamente nel main passando i valori necessari per poi stampare il valore restituito dalla funzione.
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>


#define MIN 0
#define MAX  100

int generazioneNumero(int min, int max);
int main() {


    int nGenerato;
    srand(time(NULL));   // scelta consigliata sempre all'interno del main
    nGenerato= generazioneNumero(MIN, MAX);
    printf("\nIl valore compreso tra min e max e\' : %d" , nGenerato);



    return 0;
}


int generazioneNumero(int min , int max){


    int n;
    n = min + rand() % (max - min + 1);


    return n;    //oppure  return piu' formula random



}

/*int min  ;
   int max  ;
   int n;


   srand(time(NULL));
   printf("Inserisci un min :");
   scanf("%d" , &min);
   printf("\nInserisci un max : ");
   scanf("%d" , &max);
   n= min + rand()%(max - min + 1);
   printf("\n il numero compreso nel range e\': %d" , n);
    */