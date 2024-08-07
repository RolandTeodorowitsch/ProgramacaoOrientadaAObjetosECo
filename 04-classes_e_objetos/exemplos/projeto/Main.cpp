// Main.cpp
// Para compilar:
//   g++ Main.cpp Contador.cpp -o app
// ou
//   g++ -c Main.cpp
//   g++ -c Contador.cpp
//   g++ Main.o Contador.o -o app

#include <iostream>
#include "Contador.hpp"

using namespace std;

int main() {
  int i;

  Contador c1; // Novo contador com valor inicial 0
  for (i=0;i<3;++i)
      c1.incrementa();
  cout << "Contador1 = " << c1.obtemValor() << endl;

  cout << "Antes do if..." << endl;
  if ( true ) {
     Contador c3;
     c3.incrementa();
     cout << "Contador3 = " << c3.obtemValor() << endl;
  }
  cout << "Depois do if..." << endl;

  Contador *c2;
  c2 = new Contador(5); // Contador com valor 5
  for (i=0;i<4;++i)
      c2->incrementa();
  cout << "Contador2 = " << c2->obtemValor() << endl;
  delete c2;

  return 0;
}


