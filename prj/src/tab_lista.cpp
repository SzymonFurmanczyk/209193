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

  for (int i=0; i<size; ++i){ nowa[i] = tab[i];};

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
  

  //Optymalizacja wyboru pivota:
  if(lewy-prawy>7)
    {
      if((tab[srodek-1]<=tab[srodek] && tab[srodek]<=tab[srodek+1]) ||
	 (tab[srodek-1]>=tab[srodek] && tab[srodek]>=tab[srodek+1]))
	{
	}
      else
	{
	  if((tab[srodek]<=tab[srodek-1] && tab[srodek-1]<=tab[srodek+1]) ||
	     (tab[srodek]>=tab[srodek-1] && tab[srodek-1]>=tab[srodek+1]))
	    {
	      srodek=srodek-1;
	    }
	  else
	    {
	      srodek=srodek+1;
	    }
	}
    }
  //koniec
  
  
  int tmp = tab[prawy];
  tab[prawy] = tab[srodek];
  tab[srodek] = tmp;

  int j=lewy;
  int i=prawy;
  
  while(j<i)
    {
      i--;
      while(tab[i]<tab[prawy] && j<i)
	{
	  int temp = tab[j];
	  tab[j]=tab[i];
	  tab[i]=temp;
	  j++;
	}
    }
 
  
  if(tab[i]<tab[prawy])
    {
      int tmp = tab[prawy];
      tab[prawy] = tab[i+1];
      tab[i+1] = tmp; 
      j=j+2;
    }
  else
    {
      int tmp = tab[prawy];
      tab[prawy] = tab[i];
      tab[i] = tmp;
      i--;
      j++;
    }

  if(i>lewy)
    {
      quicksort(lewy,i);
    }

  if(j<prawy)
    {
      quicksort(j,prawy);
    }

}

int TabLista::rozmiar()
{
  return last;
}
