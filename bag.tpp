#include "bag.hpp"                                                                                                 

template <typename T> Bag<T>::Bag() {}      //Constructor

template <typename T> Bag<T>::~Bag() {}     //Destructor

template <typename T> T Bag<T>::getItem(const T& entry) { 
    return item.at(entry);                  //Get value in array at specific index
}

template <typename T> std::size_t Bag<T>::getCurrentSize() const { 
    return item.size();                     //Get size of vector item
}

template <typename T> bool Bag<T>::isEmpty() const { 
    if (item.empty()) {                     //Check if vector item is empty
        return true;
    }
    else {
        return false;
    }; 
}

template <typename T> bool Bag<T>::add(const T& entry) { 
    item.push_back(entry);                  //Add a new element at the end of vector item
    return true;
}

template <typename T> bool Bag<T>::remove(const T& entry) { 
    item.erase(item.begin() + entry);       //Remove an element at a specific index
    return true;
}

template <typename T> void Bag<T>::clear() {
    item.clear();                           //Remove all element of vector item
}

template <typename T> std::size_t Bag<T>::getFrequencyOf(const T& entry) const {
    int freq = std::count(item.begin(), item.end(), entry);        //Get frequency of an element within vector item
    return freq; 
}

template <typename T> bool Bag<T>::contains(const T& entry) const { 
    if (std::find(item.begin(), item.end(), entry) != item.end()) {     //Check if vector item has a specific element
        return true;
    }
    else {
        return false;
    } 
}

