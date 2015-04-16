#ifndef BENCHMARK_HH
#define BENCHMARK_HH

#define SIZE 10000

/*!
 *\brief Klasa Benchmark modelujaca program benchmarkujacy.
 *Obiekt tego typu reprezentuje program sprawdzajacy szybkosc
 *wykonywania algorytmow.
 */
class Benchmark {

  /*!
   *\brief Tablica stringow przechowujaca nazwy plikow do zapisu.
   */
  std::string nazwy[4] = {"ret_data1.txt", "ret_data2.txt", "ret_data3.txt", "ret_data4.txt"};

public:

  /*!
   *\brief Konstrukor obiektu Benchmark.
   */
  Benchmark() {};

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
   *\param[in] _n - indeks nazwy pliku
   */
  virtual void testAlgorithm(Benchmark *_algorithm, int _n) const;

  /*!
   *\brief Metoda uruchamiania algorytmu.
   *Metoda sluzy do wykonywania danego algorytmu.
   *W klasie Benchmark nie ma konkretnego dzialania.
   */
  virtual void runAlgorithm(int _border) {};

  /*!
   *\brief Metoda uruchamiania algorytmu szybkiego sortowania.
   *Metoda sluzy do wykonywania danego algorytmu.
   *W klasie Benchmark nie ma konkretnego dzialania.
   */
  virtual void runAlgorithmSzybkieSortowanie() {};
};

#endif
