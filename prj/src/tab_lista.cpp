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

  int srodek=(lewy+prawy)/2;

  int tmp = tab[prawy];
  tab[prawy] = tab[srodek];
  tab[srodek] = tmp;

  int j=0;
  while(j<srodek)
    {
      int i=j;
      while(tab[i]<tab[j])
	{
	  int temp = tab[j];
	  tab[j]=tab[i];
	  tab[i]=temp;
	}
      if(tab[i]>tab[j])
	{
	  i++;
	}
      else{}
    }

  if(j>=srodek)
    {
      int tmp = tab[prawy];
      tab[prawy] = tab[srodek];
      tab[srodek] = tmp; 
    }
  else{}

  quicksort(lewy,j);
  
  quicksort(j+1,prawy);
}

int TabLista::rozmiar()
{
  return size;
}
