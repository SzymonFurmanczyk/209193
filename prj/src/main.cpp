#include <iostream>

#include "benchmark.hh"
#include "algorithm1.hh"

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
  int repeats = 3;

  for(int i=0; i<SIZE; ++i)
    std::cin >> data[i];

  Benchmark *bench = new Benchmark(repeats);
  Mnozenie *pot = new Mnozenie(data);

  bench -> testAlgorithm(pot);

return 0;
}
