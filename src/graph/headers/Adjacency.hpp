#ifndef Adjacency_hpp
#define Adjacency_hpp

class Adjacency {
private:
  int value; // element
  int weight;

public:
  Adjacency();
  Adjacency(int value, int weight);
  void setValue(int value);
  void setWeight(int weight);

  // returns an integer
  int getValue();
  // returns an integer
  int getWeight();
};

#endif