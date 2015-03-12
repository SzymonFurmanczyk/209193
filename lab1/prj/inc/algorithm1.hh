#ifndef ALGORITHM1_HH
#define ALGORITHM1_HH

/*!
 *\brief Klasa Mnozenie modelujaca algorytm potegowania.
 *Obiekt tego typu reprezentuje algorytm wykonujacy dzialanie
 *mnozenia kazdego elementu tablicy tab przez 2.
 */
class Mnozenie: public Benchmark {

  int tab[SIZE];

public:
  /*!
   *\brief Konstruktor obiektu Mnozenie.
   */
  Mnozenie() {};

  /*!
   *\brief Konstruktor parametryczny obiektu Mnozenie.
   *\param[in] _tab - tablica przechowujaca dane wejsciowe.
   */
  Mnozenie(int _tab[SIZE]) {for(int i=0; i<SIZE; ++i) tab[i]=_tab[i];};
  
  /*!
   *\brief Destruktor obiektu Mnozenie.
   */
  ~Mnozenie() {};

  /*!
   *\brief Metoda testowania algorytmu.
   *Metoda sluzy do testowania szybkosci dzialania algorytmu.
   *W klasie Mnozenie nie ma konkretnego dzialania.
   *\param[in] _algorithm - testowany algorytm.
   */
  virtual void testAlgorithm(Benchmark *_algorithm) {};

  /*!
   *\brief Metoda uruchamiania algorytmu.
   *Metoda sluzy to wykonywania danego algorytmu.
   *Mnozy kazdy element tablicy przez liczbe 2.
   *\param[in] _border - ilosc elementow dla ktorych algorytm ma wykonac swoje dzialanie.
   */
  virtual void runAlgorithm(int _border);
};

#endif
