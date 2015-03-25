#ifndef KOLEJKA_HH
#define KOLEJKA_HH

/*!
 *\brief Klasa Kolejka modelujaca strukture danych typu kolejka.
 *Obiekt tego typu reprezentuje strukture danych typu kolejka
 *wraz z operacjami mozliwymi do wykonania na tej strukturze.
 */
class Kolejka {

  /*!
   *\brief Wskaznik na tablice elementow kolejki.
   */ 
  int *tab;
  /*!
   *\brief Rozmiar kolejki.
   */ 
  long size;
  /*!
   *\brief Indeks pierwszego zapisanego elementu.
   */ 
  int f;
  /*!
   *\brief Indeks ostatniego wolnego pola.
   */ 
  int r;

  /*!
   *\brief Metoda powiekszania kolejki.
   *Metoda ta dodaje do kolejki 8 kolejnych wolnych pol
   *pomiedzy pierwszym a ostatnim zapisanym elementem.
   */
  void increase();

public:

  /*!
   *\brief Konstruktor obiektu Kolejka.
   */
  Kolejka();

  /*!
   *\brief Konstruktor parametryczny obiektu Kolejka.
   *\param[in] _size - rozmiar tworzonej kolejki.
   */
  Kolejka(long _size);

  /*!
   *\brief Destruktor obiektu Kolejka.
   */
  ~Kolejka();

  /*!
   *\brief Metoda dodawnia elementu.
   *Metoda sluzy do dodawania elementu do kolejki.
   *\param[in] _elem - dodawany element.
   */
  void enqueue(int _elem);

  /*!
   *\brief Metoda usuwania elementu.
   *Metoda sluzy do usuwania elementu z kolejki.
   *\return - usuwany element.
   */
  int dequeue();
};

#endif
