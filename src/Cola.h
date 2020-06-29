#ifndef COLA_H_
#define COLA_H_

#include "Nodo.h"
#include <string>

template <class T> class Cola{

private:
	Nodo<T>* frente;
	Nodo<T>* fondo;

public:
	/**
	 * @post: Se crea la Cola sin elementos
	 */
	Cola();

	/**
	 * @post: agrega un elemento al frente de la Cola
	 */
	void acolar(T dato);

	/**
	 * @pre: la Cola tiene elementos
	 * @post: elimina el elemento del frente,
	 * 		 ahora el frente es el siguiente elemento
	 */
	void desacolar();

	/**
	 * @post: verifica si la Cola tiene elementos
	 */
	bool estaVacia();

	/**
	 * @pre: la Cola tiene al menos 1 elemento
	 * @post: devuelve el elemento del frente
	 */
	T getFrente();

	/**
	 * @post: elimina los elementos de la cola
	 */
	~Cola();
};

template <class T> Cola<T>::Cola(){
	this->frente = nullptr;
	this->fondo = nullptr;
}

template <class T> void Cola<T>::acolar(T dato){
	Nodo<T>* nuevo = new Nodo<T>(dato);

	if (this->estaVacia()){
		frente = nuevo;
	} else {
		fondo->setSiguiente(nuevo);
	}

	fondo = nuevo;
}

template <class T> void Cola<T>::desacolar(){
	if (this->estaVacia()){
		throw std::string("No se puede desacolar si no hay elementos");
	}

	Nodo<T>* removido = frente;
	frente = frente->getSiguiente();
	delete removido;
}

template <class T> T Cola<T>::getFrente(){
	return this->frente->getDato();
}

template <class T> bool Cola<T>::estaVacia(){
	return (this->frente == nullptr);
}

template <class T> Cola<T>::~Cola(){
	while (!this->estaVacia()){
		this->desacolar();
	}
}

#endif /* COLA_H_ */
