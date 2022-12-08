#ifndef STUDENT_BAG_HPP
#define STUDENT_BAG_HPP

#include <cstdlib>
#include <vector>
#include <algorithm>

template<typename T> class Bag{
public:

  Bag();
  
  ~Bag();

  T getItem(const T& entry) ;    //New method that access an element private vector item 

  std::size_t getCurrentSize() const;

  bool isEmpty() const;

  bool add(const T& entry);

  bool remove(const T& entry);

  void clear();

  std::size_t getFrequencyOf(const T& entry) const;

  bool contains(const T& entry) const;

private:
  std::vector<T> item;          //New vector to store item

};

#include "bag.tpp"

#endif
