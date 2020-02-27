//
// Created by Swetha on 2/26/2020.
//

#ifndef ASS4DESIGNFILES_STORE_H
#define ASS4DESIGNFILES_STORE_H


class Store {
public:
  Store() = default;

  history(Customer* Cust);
  inventory()

  bool readMoviesFromFile(string FileName);
  bool readCustomersFromFile(string FileName);
  bool readCommandsFromFile(string FileName);

  Movie* findMovie(char Type, istream Attributes);
  Customer* findCustomer(int CustId);

private:
  map<char, set<Movies*>> Movies;
  HashMap<int, Customer*> Customers;
};

template <typename K, typename V>
class HashMap {
  struct HashEntry <K, V> {
    Key = K;
    Value = V;
    Next = HashEntry<K,V>*;
  };
public:
  HashMap() = default;
  int size();
  bool isEmpty();
  bool contains(Key K);
  V get(Key K);
  bool add (Key K, Value V);
  bool remove(Key K);
  clear();

  int hashFunction(Key K);
  double loadFactor();
  rehash();
private:
  int Size;
  HashEntry<K,V>* {};
  static int intialSize;
  static double MAX_LOUD_FACTOR;
};

#endif //ASS4DESIGNFILES_STORE_H
