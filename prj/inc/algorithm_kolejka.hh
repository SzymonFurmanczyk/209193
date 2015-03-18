#ifndef ALGORITHMKOLEJKA_HH
#define ALGORITHMKOLEJKA_HH

/*!
 *\brief Klasa AlgorithmKolejka modelujaca algorytm wczytywania do kolejki.
 *Obiekt tego typu reprezentuje algorytm wykonujacy wykonujacy
 *wczytywanie zadanej ilosci elementow do kolejki.
 */
class AlgorithmKolejka: public Benchmark {

  /*!
   *\brief Tablica elementow z danymi wejsciowymi.
   */ 
  int tab[SIZE];
  /*!
   *\brief Zmienna przechowujaca kolejke.
   */ 
  Kolejka kolejka;

public:
  /*!
   *\brief Konstruktor obiektu AlgorithmKolejka.
   */
  AlgorithmKolejka() {};

  /*!
   *\brief Konstruktor parametryczny obiektu AlgorithmKolejka.
   *\param[in] _tab - tablica przechowujaca dane wejsciowe.
   */
  AlgorithmKolejka(int _tab[]) {for(int i=0; i<SIZE; ++i) tab[i]=_tab[i];};
  
  /*!
   *\brief Destruktor obiektu AlgorithmKolejka.
   */
  ~AlgorithmKolejka() {};

  /*!
   *\brief Metoda testowania algorytmu.
   *Metoda sluzy do testowania szybkosci dzialania algorytmu.
   *W klasie AlgorithmKolejka nie ma konkretnego dzialania.
   *\param[in] _algorithm - testowany algorytm.
   */
  virtual void testAlgorithm(Benchmark *_algorithm) {};

  /*!
   *\brief Metoda uruchamiania algorytmu.
   *Metoda sluzy to wykonywania danego algorytmu.
   *Wczytuje elementy do kolejki.
   *\param[in] _border - ilosc elementow dla ktorych algorytm ma wykonac swoje dzialanie.
   */
  virtual void runAlgorithm(int _border);
};

#endif
