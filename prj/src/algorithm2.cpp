#include <iostream>

#include "tab_lista.hh"
#include "benchmark.hh"
#include "algorithm2.hh"

/* Funkcja wykonujaca algorytm wczytywania elementow do listy tablicowej */
void Algorithm2::runAlgorithm(int _border){

  for(int i=0; i<_border; ++i)
    tablista.insert(tab[i]);

}

void Algorithm2::runAlgorithmSzybkieSortowanie(int _border){

  tablista.quicksort(0,_border-1);

}
