#include <iostream>

const int N_ELEMENTS = 100;

int main() {
  // Tömb létrehozása
  int tomb[N_ELEMENTS];

  // Tömb feltöltése
  for (int i = 1; i <= N_ELEMENTS; i++) {
    tomb[i-1] = i * 2;
    std::cout << i << ". érték:\t" << tomb[i-1] << std::endl;
  }

  // Tömb átlagának kiszámítása
  double osszeg = 0;
  for (int i = 0; i < N_ELEMENTS; i++) {
    osszeg += tomb[i];
  }
  
  double atlag = osszeg / N_ELEMENTS;

  // Kiíratás
  std::cout << "Az elemek átlaga: " << atlag << std::endl;

  std::cout << "Hello from the other siiiiiidee! " << std::endl;

  return 0;
}