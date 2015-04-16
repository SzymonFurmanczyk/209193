#ifndef ALGORITHM2_HH
#define ALGORITHM2_HH

/*!
 *\brief Klasa Algorithm2 modelujaca algorytm wczytywania do listy tablicowej.
 *Obiekt tego typu reprezentuje algorytm wykonujacy wykonujacy
 *wczytywanie zadanej ilosci elementow do listy tablicowej.
 */
class Algorithm2: public Benchmark {

  /*!
   *\brief Tablica elementow z danymi wejsciowymi.
   */ 
  int tab[SIZE];
  /*!
   *\brief Zmienna przechowujaca liste tablicowa.
   */ 
  TabLista tablista;

public:
  /*!
   *\brief Konstruktor obiektu Algorithm2.
   */
  Algorithm2() {};

  /*!
   *\brief Konstruktor parametryczny obiektu Algorithm2.
   *\param[in] _tab - tablica przechowujaca dane wejsciowe.
   */
  Algorithm2(int _tab[]) {for(int i=0; i<SIZE; ++i) tab[i]=_tab[i];};
  
  /*!
   *\brief Destruktor obiektu Algorithm2.
   */
  ~Algorithm2() {};

  /*!
   *\brief Metoda testowania algorytmu.
   *Metoda sluzy do testowania szybkosci dzialania algorytmu.
   *W klasie Algorithm2 nie ma konkretnego dzialania.
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

  /*!
   *\brief Metoda uruchamiania algorytmu szybkiego sortowania.
   *Metoda sluzy to wykonywania danego algorytmu.
   *Sortuje tablicę.
   */
  virtual void runAlgorithmSzybkieSortowanie();
};

#endif
