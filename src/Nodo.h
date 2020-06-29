#ifndef NODO_H_
#define NODO_H_

template <class T> class Nodo{

private:
	T dato;
	Nodo<T>* siguiente;

public:
	/**
	 * @post: Se crea el nodo con nuevoDato
	 */
	Nodo(T nuevoDato){

		dato = nuevoDato;
		siguiente = nullptr;
	}

	T getDato() {
		return dato;
	}

	void setDato(T dato) {
		this->dato = dato;
	}

	Nodo<T>*& getSiguiente() {
		return siguiente;
	}

	void setSiguiente(Nodo<T> *&siguiente) {
		this->siguiente = siguiente;
	}
};




#endif /* NODO_H_ */
