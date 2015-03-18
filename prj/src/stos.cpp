#include <iostream>

#include "stos.hh"

Stos::Stos() {
  last = 0;
  size = 8;

  tab = new int[size];

  if(tab == nullptr) std::cerr << "Blad alokacji" << std::endl;
}

Stos::Stos(long _size) {
  last = 0;
  size = _size;

  tab = new int[size];

  if(tab == nullptr) std::cerr << "Blad alokacji" << std::endl;
}

Stos::~Stos() {
  delete []tab;
}

void Stos::push(int _elem) {
  if(last == size) increase();

  tab[last] = _elem;
  last++;
  
}

void Stos::pop() {

  decrease();
  --last;
}

void Stos::increase() {

  int *nowa = new int[size * 2];

  for(int i=0; i<size; ++i) nowa[i] = tab[i];

  delete []tab;
  tab = nowa;
  size *= 2;
}

void Stos::decrease() {

  --size;
  int *nowa = new int[size];

  for(int i=0; i<size; ++i) nowa[i] = tab[i];

  delete []tab;
  tab = nowa;
}
