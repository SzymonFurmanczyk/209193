#include <iostream>

#include "benchmark.hh"
#include "stos.hh"
#include "lista.hh"
#include "kolejka.hh"
#include "algorithm1.hh"
#include "algorithm_stos.hh"
#include "algorithm_kolejka.hh"
#include "algorithm_lista.hh"

/*!
 *\brief Funkcja tworzaca i testujaca algorytm.
 *Wczytuje dane otrzymane na strumien wejsciowy do tablicy data[].
 *Nastepnie tworzy obiekt Benchmark oraz obiekt Potegowanie.
 *Pozniej uruchamia metode testujaca w obiekcie klasy Benchmark
 *dla obiektu klasy Potegowanie.
 *\retval 0 - domyslna wartosc zwracana przez funkcje.
 */
int main() {

  int data[SIZE];

  for(int i=0; i<SIZE; ++i)
    std::cin >> data[i];

  Benchmark *bench = new Benchmark();
  Mnozenie *pot = new Mnozenie(data);
  AlgorithmStos *stos = new AlgorithmStos(data);
  AlgorithmKolejka *kolejka = new AlgorithmKolejka(data);
  AlgorithmLista *lista = new AlgorithmLista(data);

  bench -> testAlgorithm(pot,0);
  bench -> testAlgorithm(stos,1);
  bench -> testAlgorithm(kolejka,2);
  bench -> testAlgorithm(lista,3);

  return 0;
}
