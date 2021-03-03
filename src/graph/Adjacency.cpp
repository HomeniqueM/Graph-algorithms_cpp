#include <iostream>
/**
 * element adjacent to the vertex that is connecting
 * Limitaions:
 *  Element must be integer and weight as well
 *  Weight will also be used in unweighted graphs
 */
class Adjacency {
private:
  int value; // element
  int weight;

public:
  Adjacency() {
    value = -1;
    weight = -1;
  }
  Adjacency(int value, int weight) {
    this->value = value;
    this->weight = weight;
  }

  void setValue(int value) { 
    this->value = value; 
  }
  void setWeight(int weight) { 
    this->weight = weight; 
  }
  
  //returns an integer 
  int getValue() { 
    return value; 
  }
  //returns an integer 
  int getWeight() {
    
    return weight;
  }
};