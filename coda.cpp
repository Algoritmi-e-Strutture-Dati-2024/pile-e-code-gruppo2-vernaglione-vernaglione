#include <iostream>
#include "ListaPuntatori.cpp"

// Definizione della classe Coda come template
template <typename T>
class Coda {
  private:
    ListaPuntatori<T> elementi;
	
  public:
//enqueue(T elem) – Aggiunge un elemento alla fine della coda.
	//push(T, c) = c'   PRE: c = <a1, a2, ..., an> con n>=0    POST: c' = <T, a1, a2, ..., an>
	void enqueue(T elem){
		elementi.inslista(T elem, elementi.lunghezza);
	}
	
//dequeue() – Rimuove l’elemento in testa alla coda e lo restituisce. Gestire eventuali errori (ad esempio, coda vuota).
	//pop(c) = c'   PRE: c = <a1, a2, ..., an> con n>0    POST: c' = <a2, ... , an>
	void dequeue(){
		elementi.canclista(1);
	}
	
//front() – Restituisce l’elemento in testa alla coda senza rimuoverlo.
	//front(c) = e   PRE: c = <a1, a2, ..., an> con n>=0    POST: e=a1
	T top(){
		elementi.leggilista(1);
		return elementi.leggilista();
	}
	
//isEmpty() – Restituisce true se la coda è vuota, altrimenti false.
	//isEmpty(c) = b   PRE: c = <a1, a2, ..., an> con n>=0    POST: b = true se c = <>    b = false altrimenti
	bool isEmpty(){
		elementi.listavuota();
		return elementi.listavuota();
	}
	
//size() – Restituisce il numero di elementi nella coda.
	//size(c) = m   PRE: c = <a1, a2, ..., an> con n>=0    POST: m=n
	int size(){
		elementi.lunghezza();
		return elementi.lunghezza();
	}
}
