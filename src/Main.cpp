
#include "models/headers/UDG.hpp"
#include <iostream>

using namespace std;

int main() {
  UDG *udg = new UDG();

  cout << endl;
  cout << "Unweighted directed graph" << endl;
   cout << endl;
  udg->newRelation(5, 10);
  udg->newRelation(5, 8);
  udg->newRelation(5, 6);
  udg->newRelation(5, 3);
  udg->newVertice(5);
  udg->newVertice(6);
  udg->newVertice(10);
  udg->newVertice(5);

  udg->printGraph();

  return 0;
}