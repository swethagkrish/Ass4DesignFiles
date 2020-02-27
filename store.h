//
// Created by Swetha on 2/26/2020.
//

#ifndef ASS4DESIGNFILES_STORE_H
#define ASS4DESIGNFILES_STORE_H

#include movies.h
#include customers.h
class Store {
public:
  Store() = default;
  borrow(Transaction Trans);
  returnItem(Transaction Trans);
  history(Customer* Cust);
  inventory()
private:
  set<Movie*> Comedies;
  set<Movie*> Dramas;
  set<Movie*> Classics;
  HashMap<int, Customer*> Customers;
};

#endif //ASS4DESIGNFILES_STORE_H
