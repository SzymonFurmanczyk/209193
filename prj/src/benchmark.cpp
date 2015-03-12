#include <iostream>
#include <fstream>
#include <chrono>

#include "benchmark.hh"

#define LENGTH 5

/* Funkcja testowania szybkosci dzialania algorytmu */
void Benchmark::testAlgorithm(Benchmark *_algorithm) const{

  int j=1000;
  int average=0;

  std::ofstream ret_data("ret_data.txt");
  if (ret_data.is_open()){
    ret_data << "elem\ttime" << std::endl;
    for(int i=1; i<=LENGTH; ++i ){
      for(int k=1; k<=repeats; ++k){
	std::chrono::high_resolution_clock::time_point start_time = std::chrono::high_resolution_clock::now();
  
	_algorithm -> runAlgorithm(j);
  
	std::chrono::high_resolution_clock::time_point end_time = std::chrono::high_resolution_clock::now();
	std::chrono::high_resolution_clock::duration time_period = end_time - start_time;

	//std::cout << "Czas: " << std::chrono::duration_cast<std::chrono::microseconds>(time_period).count() << "mikrosek" << std::endl;
	average += std::chrono::duration_cast<std::chrono::microseconds>(time_period).count();
      }
      average /= repeats;

      ret_data << j << "\t" << average << std::endl;

      j*=10;
      average=0;
    }
    ret_data.close();
  }
  else std::cout << "Unable to open ret_data file" << std::endl;
}
