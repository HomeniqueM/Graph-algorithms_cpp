
#include "models/headers/UDG.hpp"
#include "models/headers/WDG.hpp"
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

  // =====================
  WDG *wdg = new WDG();
  cout << endl;
  cout << "Weighted directed graph" << endl;
  cout << endl;
  wdg->newVertice(10);
  wdg->newVertice(14);
  wdg->newRelation(10, 14, 0);
  wdg->newRelation(14, 14, 2);
  wdg->newRelation(22, 14, 11);
  wdg->newRelation(10, 22, 3);
  wdg->print();

  return 0;
}