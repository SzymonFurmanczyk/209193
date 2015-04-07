#ifndef TABLISTA_HH
#define TABLISTA_HH

/*!
 *\brief Klasa TabLista modelujaca strukture danych typu lista.
 *Obiekt tego typu reprezentuje strukture danych typu lista
 *zaimplementowana na tablicy dynamicznej. Obiekt zawiera
 *rowniez podstowe metody listy.
 */
class TabLista {

  /*!
   *\brief Wskaznik na tablice elementow listy.
   */ 
  int *tab;
  /*!
   *\brief Rozmiar listy.
   */ 
  long size;
  /*!
   *\brief Wskaznik na ostatni wolny element.
   */ 
  long last;

  /*!
   *\brief Metoda powiekszania listy tablicowe.
   *Metoda ta dodaje do listy 8 kolejnych wolnych pol.
   */
  void increase();

public:

  /*!
   *\brief Konstruktor obiektu TabLista.
   */
  TabLista();

 /*!
   *\brief Konstruktor parametryczny obiektu TabLista.
   */
  TabLista(long _size);

  /*!
   *\brief Destruktor obiektu TabLista.
   */
  ~TabLista();

  /*!
   *\brief Metoda dodawnia elementu.
   *Metoda sluzy do dodawania elementu do konca listy.
   *\param[in] _elem - dodawany element.
   */
  void insert(int _elem);

  /*!
   *\brief Metoda usuwania elementu.
   *Metoda sluzy do usuwania elementu o wskazanym indeksie.
   *\param[in] _f - indeks elementu do usuniecia.
   *\return - usuwany element.
   */
  int remove(int _f);

  int rozmiar();

  void quicksort(int a,int b);


};

#endif
