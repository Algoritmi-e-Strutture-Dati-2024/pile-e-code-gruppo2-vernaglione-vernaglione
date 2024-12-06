#include <iostream>
#include "ListaPuntatori.cpp"
#include "coda.cpp"
#include "pila.cpp"

int main() {
    // Creazione di una coda di interi
    Coda<int> codaInt;
    
    // Inserisce alcuni elementi nella lista di interi
    codaInt.enqueue(20, elementi.lunghezza);
    codaInt.enqueue(32, elementi.lunghezza);
    codaInt.enqueue(10, elementi.lunghezza);

    // Stampa i valori della coda di interi
    std::cout << "Elemento alla posizione 1: " << codaInt.leggilista(1) << std::endl;
    std::cout << "Elemento alla posizione 2: " << codaInt.leggilista(2) << std::endl;
    std::cout << "Elemento alla posizione 3: " << codaInt.leggilista(3) << std::endl;
    
    //Lunghezza coda
	std::cout << "la coda ha lunghezza:  " << codaInt.size() << std::endl;
	
    // Cancella il primo elemento
    codaInt.dequeue(1);

    // Stampa i valori della lista di interi dopo la cancellazione
    std::cout << "Dopo la cancellazione, elemento alla posizione 1: " << codaInt.leggilista(1) << std::endl;
    std::cout << "Dopo la cancellazione, elemento alla posizione 2: " << codaInt.leggilista(2) << std::endl;

    // Cancella il primo elemento
    codaInt.dequeue(1);
    // Cancella il primo elemento
    codaInt.dequeue(1);
    
    //Controlla se la coda è vuota
    std::cout << "La coda è vuota? " << codaInt.isEmpty() << std::endl;
    
    
    
    // Creazione di una pila di interi
    Pila<int> pilaInt;
    
    // Inserisce alcuni elementi nella pila di interi
    pilaInt.push(23, 1);
    pilaInt.push(40, 1);
    codaInt.push(9, 1);

    // Stampa i valori della pila di interi
    std::cout << "Elemento alla posizione 1: " << pilaInt.leggilista(1) << std::endl;
    std::cout << "Elemento alla posizione 2: " << pilaInt.leggilista(2) << std::endl;
    std::cout << "Elemento alla posizione 3: " << pilaInt.leggilista(3) << std::endl;
    
    //Lunghezza pila
	std::cout << "la pila ha lunghezza:  " << pilaInt.size() << std::endl;
	
    // Cancella il primo elemento
    pilaInt.pop(1);

    // Stampa i valori della lista di interi dopo la cancellazione
    std::cout << "Dopo la cancellazione, elemento alla posizione 1: " << pilaInt.leggilista(1) << std::endl;
    std::cout << "Dopo la cancellazione, elemento alla posizione 2: " << pilaInt.leggilista(2) << std::endl;

    // Cancella il primo elemento
    pilaInt.pop(1);
    // Cancella il primo elemento
    codaInt.pop(1);
    
    //Controlla se la pila è vuota
    std::cout << "La pila è vuota? " << pilaInt.isEmpty() << std::endl;
	
	    return 0;
}
