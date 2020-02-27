//
// Created by Swetha on 2/26/2020.
//

#ifndef ASS4DESIGNFILES_CUSTOMER_H
#define ASS4DESIGNFILES_CUSTOMER_H
#include transaction.h
public Customer {
public :
  Customer(int Id, string LastName, string FirstName);
  updateHistory(Transaction Trans);
  showHistory();
private:
  int Id;
  string LastName;
  string FirstName;
  list<Transaction> History;
};

#endif //ASS4DESIGNFILES_CUSTOMER_H
