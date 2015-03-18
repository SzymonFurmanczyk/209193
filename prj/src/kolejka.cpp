#include <iostream>

#include "kolejka.hh"

Kolejka::Kolejka() {
  size = 8;
  f = -1;//-1 bo tablica pusta
  r = 0;//indeks nastepnego pustego miejsca
 
  tab = new int[size];
  if(tab == nullptr) std::cerr << "Blad alokacji" << std::endl;
}

Kolejka::Kolejka(long _size) {
  size = _size;
  f = -1;
  r = 0;

  tab = new int[size];
  if(tab == nullptr) std::cerr << "Blad alokacji" << std::endl;
}

Kolejka::~Kolejka() {
  delete []tab;
}

void Kolejka::increase() {
  int *nowa = new int[size + 8];

  for(int i=0; i<r; ++i) nowa[i] = tab[i];
  for(int i=r+8; i<(size+8); ++i) nowa[i] = tab[i];

  delete []tab; 
  tab = nowa;

  f += 8;
  size +=8;
}

void Kolejka::decrease() {
  int *nowa = new int[size - 1];

  for(int i=0; i<f; ++i) nowa[i] = tab[i];//przepisujemy do elementu przed f
  for(int i=f+1; i<(size-1); ++i) nowa[i] = tab[i];//kontynuujemy przepisywanie
  //od pierwszego elementu po f

  delete []tab;
  tab = nowa;
  --size;
}

void Kolejka::enqueue(int _elem) {
  if(r == f) increase();
  
  tab[r] = _elem;
  ++f;
}

int Kolejka::dequeue() {

  if(f != -1) {//sprawdzamy czy lista niepusta
    if(f != (size-1)) ++f;//sprawdzamy czy nie jestesmy na koncu listy
    else f = 0;//jezeli tak to przesuwamy sie na poczatek
  }
  else {
    std::cerr << "Blad dequeue! Tablica pusta!" << std::endl;
    return -1;
  }

  return tab[f-1];
}
