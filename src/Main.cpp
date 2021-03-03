
#include "models/headers/UDG.hpp"
#include "models/headers/UUG.hpp"
#include "models/headers/WDG.hpp"
#include "models/headers/WUG.hpp"
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

  UUG *uug = new UUG();
  cout << endl;
  cout << "Unweighted untargeted graph" << endl;
  cout << endl;

  uug->newRelation(10, 2);
  uug->newRelation(2, 8);
  uug->printGraph();

  WUG *wug = new WUG();
  cout << endl;
  cout << "Unweighted untargeted graph" << endl;
  cout << endl;

  wug->newRelation(7, 12, 47);
  wug->newRelation(13, 47, 7);
  wug->newRelation(7, 47, 1);

  wug->print();

  return 0;
}