#include "Adjacency.cpp"
#include <iostream>
#include <vector>

using namespace std;
class Vertice {
private:
  vector<Adjacency> adjacency; // Vector where adjacent values will be stored
public:
  int value;

  /**
   * Standard builder 
   */
  Vertice() {
    // Definition
    this->value = NULL;
  }

  /**
   * Alternative builder 
   */
  Vertice(int value) {
    // Definition
    this->value = value;
  }

  /**
   * Alternative builder 
   */
  Vertice(int value, Adjacency adjacency) {
    // Definition
    this->value = value;
    this->adjacency.push_back(adjacency);
  }

  void setValue(int value){ 
    this->value = value;
  }

  int getValue(){ 
    return this->value;
  }

  /**
   * add a new adjacency  to the list
   */
  void addAdjacebcy(int value) {    
    addAdjacebcy(value, 0);

  }
  /**
   * add a new adjacency and its weight to the list
   */
  void addAdjacebcy(int value, int weight) {
    adjacency.push_back(Adjacency(value, weight));

  }
  /**
    */
  Adjacency removeAdjacency (){ 

    /**Build the code **/
    return Adjacency();
  }


  /** [printAdjacebcy]
   * Only shows the values of adjacent vertices
   */
  void printAdjacebcy() {

    for (auto i = adjacency.begin(); i != adjacency.end(); ++i) {
      cout << i->getValue() << " > ";
    }
    cout << "null";
  }
};