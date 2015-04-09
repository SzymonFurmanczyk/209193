#include <iostream>

#include "tab_lista.hh"

TabLista::TabLista() {
  last = 0;
  size = 8;

  tab = new int[size];
  if (tab == nullptr) std::cerr << "Blad alokacji" << std::endl;
}

TabLista::TabLista(long _size) {
  last = 0;
  size = _size;

  tab = new int[size];
  if (tab == nullptr) std::cerr << "Blad alokacji" << std::endl;
}

TabLista::~TabLista() {
  delete []tab;
}

void TabLista::increase() {
  int *nowa = new int[size * 2];

  for (int i=0; i<size; ++i) nowa[i] = tab[i];

  delete []tab;
  tab = nowa;
  size *= 2;
}

void TabLista::insert(int _elem) {
  if (last == size) increase();

  tab[last] = _elem;
  ++last;
}

int TabLista::remove(int _f) {
  int temp = tab[_f];//zapisujemy wartosc usuwanego elementu
  --size;//zmniejszamy rozmiar o 1
  int *nowa = new int[size];//tworzymy nowa liste mniejsza o 1

  for (int i=0; i<_f; ++i) nowa[i] = tab[i];//przepisujemy tak by usunac element o zadanym
  for (int i=_f+1; i<size; ++i) nowa[i] = tab[i];//indeksie _f

  delete []tab;
  tab = nowa;
  --last;//cofamy indeks ostateniego elementu listy

  return temp;//zwracamy usuwany element
}

void TabLista::quicksort(int lewy,int prawy) {

  int srodek=(lewy+prawy)/2; //wybor pivota dla sortowania
  int temp;
  int p_pivot;

  temp = tab[srodek];
  tab[srodek]=tab[prawy];
  tab[prawy]=temp;

  int i=lewy;
  int j=prawy;

  while(i<j)
    {
      if(tab[i]<=tab[prawy])
	{
	  i++;
	}
      else
	{
	  j--;
	  temp = tab[i];
	  tab[i]=tab[j];
	  tab[j]=temp;
	}
    }
  
  
  if(tab[prawy]>tab[j])
    {
      temp = tab[prawy];
      tab[prawy] = tab[j+1];
      tab[j+1] = temp;
      p_pivot=j+1;
    }
  else
    { 
      temp = tab[prawy];
      tab[prawy] = tab[j];
      tab[j] = temp;
      p_pivot=j;
    }

  if(p_pivot-lewy>2)
    {
       quicksort(lewy,p_pivot-1);  
    }
  
  if(prawy-p_pivot>2)
    {
      quicksort(p_pivot+1,prawy);
    }
}

int TabLista::rozmiar()
{
  return size;
}
