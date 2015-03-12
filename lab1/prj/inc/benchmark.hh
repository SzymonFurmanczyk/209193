#ifndef BENCHMARK_HH
#define BENCHMARK_HH

#define SIZE 10000000

/*!
 *\brief Klasa Benchmark modelujaca program benchmarkujacy.
 *Obiekt tego typu reprezentuje program sprawdzajacy szybkosc
 *wykonywania algorytmow.
 */
class Benchmark {

  int repeats;
  
public:

  /*!
   *\brief Konstrukor obiektu Benchmark.
   */
  Benchmark() {};

  /*!
   *\brief Konstruktor parametryczny obiektu Benchmark.
   *\param[in] _repeats - ilosc powtorzen testu dla pojedynczego zestawu danych.
   */
  Benchmark(int _repeats): repeats(_repeats) {}; 

  /*!
   *\brief Destruktor obiektu Benchmark.
   */
  ~Benchmark() {};

  /*!
   *\brief Metoda testowania algorytmu.
   *Metoda sluzy to testowania szybkosci dzialania algorytmu.
   *Wykonuje testowany algorytm dla 5 kolejnych ilosci elementow.
   *Wykonanie algorytmu dla danego zestawu liczb powtarza dwa razy
   *i usrednia wynik. Otrzymany czas wraz z iloscia testowanych
   *danych zapisuje w pliku ret_data.txt.
   *\param[in] _algorithm - testowany algorytm.
   */
  virtual void testAlgorithm(Benchmark *_algorithm) const;

  /*!
   *\brief Metoda uruchamiania algorytmu.
   *Metoda sluzy do wykonywania danego algorytmu.
   *W klasie Benchmark nie ma konkretnego dzialania.
   *\param[in] _border - ilosc elementow dla ktorych algorytm ma wykonac swoje dzialanie.
   */
  virtual void runAlgorithm(int _border) {};
};

#endif
