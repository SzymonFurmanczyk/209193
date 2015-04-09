#include <fstream>
#include <iostream>
#include <cstdlib>

#define SIZE 1000000

/*!
 *\brief Funkcja generowania pliku z danymi wejsciowymi.
 *Generuje liczby losowe od 1 do 51 i zapisuje je do pliku
 *o nazwie data.txt.
 *\retval 0 - gdy funkcja zadziala poprawnie.
 *\retval 1 - gdy wystapi blad otwarcia pliku do zapisu.
 */
int main() {

  srand(time(NULL));
  int tab[SIZE];

  for(int i=0; i<SIZE; ++i)
    tab[i] = std::rand() % 100+1;

  std::ofstream data("data.txt");
  if (data.is_open()){
    for (int i=0; i<SIZE; ++i)
      data << tab[i] << ' ';
    data.close();
  }
  else{
    std::cerr << "Unable to open file" << std::endl;
    return 1;
  }

  return 0;
}
