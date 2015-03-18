#ifndef ALGORITHMLISTA_HH
#define ALGORITHMLISTA_HH

/*!
 *\brief Klasa AlgorithmLista modelujaca algorytm wczytywania do kolejki.
 *Obiekt tego typu reprezentuje algorytm wykonujacy wykonujacy
 *wczytywanie zadanej ilosci elementow do listy.
 */
class AlgorithmLista: public Benchmark {

  /*!
   *\brief Tablica elementow z danymi wejsciowymi.
   */ 
  int tab[SIZE];
  /*!
   *\brief Zmienna przechowujaca liste.
   */ 
  Lista lista;

public:
  /*!
   *\brief Konstruktor obiektu AlgorithmLista.
   */
  AlgorithmLista() {};

  /*!
   *\brief Konstruktor parametryczny obiektu AlgorithmLista.
   *\param[in] _tab - tablica przechowujaca dane wejsciowe.
   */
  AlgorithmLista(int _tab[]) {for(int i=0; i<SIZE; ++i) tab[i]=_tab[i];};
  
  /*!
   *\brief Destruktor obiektu AlgorithmLista.
   */
  ~AlgorithmLista() {};

  /*!
   *\brief Metoda testowania algorytmu.
   *Metoda sluzy do testowania szybkosci dzialania algorytmu.
   *W klasie AlgorithmLista nie ma konkretnego dzialania.
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
