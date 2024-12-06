#include <iostream>
#include "ListaPuntatori.cpp"

// Definizione della classe Pila come template
template <typename T>
class Pila {
  private:
    ListaPuntatori<T> elementi;
	
  public:
//push(T elem) – Aggiunge un elemento alla pila.
	//push(T, p) = p'   PRE: p = <a1, a2, ..., an> con n>=0    POST: p' = <T, a1, a2, ..., an>
	void push(T elem){
		elementi.inslista(T elem, 1);
	}
	
//pop() – Rimuove l’elemento in cima alla pila e lo restituisce. Gestire eventuali errori (ad esempio, pila vuota).
	//pop(p) = p'   PRE: p = <a1, a2, ..., an> con n>0    POST: p' = <a2, ... , an>
	void pop(){
		elementi.canclista(1);
	}
	
//top() – Restituisce l’elemento in cima alla pila senza rimuoverlo.
	//top(p) = e   PRE: p = <a1, a2, ..., an> con n>=0    POST: e=a1
	T top(){
		elementi.leggilista(1);
		return elementi.leggilista;
	}
	
//isEmpty() – Restituisce true se la pila è vuota, altrimenti false.
	//isEmpty(p) = b   PRE: p = <a1, a2, ..., an> con n>=0    POST: b = true se p = <>    b = false altrimenti
	bool isEmpty(){
		elementi.listavuota();
		return elementi.listavuota;
	}
	
//size() – Restituisce il numero di elementi nella pila.
	//size(p) = m   PRE: p = <a1, a2, ..., an> con n>=0    POST: m=n
	int size(){
		elementi.lunghezza();
		return elementi.lunghezza;
	}
}
