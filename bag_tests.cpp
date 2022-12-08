#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <vector>
#include "bag.hpp"

// force template expansion
template class Bag<int>;

//Default Test
TEST_CASE("Empty Test", "[Bag]"){
  REQUIRE(true);
}

//Test case for add() method
TEST_CASE("Adding Item Test", "[Bag]"){
  Bag<int> newBag;
  newBag.add(3);
  newBag.add(15);
  REQUIRE(newBag.getItem(0) == 3);
  REQUIRE(newBag.getItem(1) == 15);
}

//Test case for remove() method
TEST_CASE("Removing Item", "[Bag]"){
  Bag<int> newBag;
  newBag.add(10); 
  newBag.add(15);  
  newBag.remove(1);
  REQUIRE(!newBag.contains(15));
  REQUIRE(newBag.contains(10));
}

//Test case for isEmpty() method
TEST_CASE("Check Empty Bag Test", "[Bag]"){
  Bag<int> newBag;
  REQUIRE(newBag.isEmpty());
}

//Test case for getCurrentSize() method
TEST_CASE("Get Current Bag Size Test", "[Bag]"){
  Bag<int> newBag;
  newBag.add(10); newBag.add(15); newBag.add(20);
  REQUIRE(newBag.getCurrentSize() == 3);
}

//Test case for clear() method
TEST_CASE("Clear Bag Test", "[Bag]"){
  Bag<int> newBag;
  newBag.add(10); newBag.add(15); newBag.add(20);
  newBag.clear();
  REQUIRE(newBag.isEmpty());
}

//Test case for getFrequencyOf() method
TEST_CASE("Get Frequency Test", "[Bag]"){
  Bag<int> newBag;
  newBag.add(10); newBag.add(15); newBag.add(20); newBag.add(30);
  newBag.add(15); newBag.add(15); newBag.add(2); newBag.add(30);
  REQUIRE(newBag.getFrequencyOf(15) == 3);
  REQUIRE(newBag.getFrequencyOf(30) == 2);
}

//Test case for contains() method
TEST_CASE("Contain Value Test", "[Bag]"){
  Bag<int> newBag;
  newBag.add(10); newBag.add(15); newBag.add(20); newBag.add(30);
  REQUIRE(newBag.contains(10));
  REQUIRE(newBag.contains(15));
}








