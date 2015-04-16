#include <iostream>

#include "tab_lista.hh"
#include "benchmark.hh"
#include "algorithm2.hh"

/* Funkcja wykonujaca algorytm wczytywania elementow do listy tablicowej */
void Algorithm2::runAlgorithm(int _border){

  for(int i=0; i<_border; ++i)
    {
    tablista.insert(tab[i]);
    }

}

void Algorithm2::runAlgorithmSzybkieSortowanie(){

  tablista.quicksort(0,tablista.rozmiar()-1);
}
