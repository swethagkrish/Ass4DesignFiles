//
// Created by Swetha on 2/26/2020.
//

#ifndef ASS4DESIGNFILES_TRANSACTION_H
#define ASS4DESIGNFILES_TRANSACTION_H
#include customer.h
#include store.h

class Transaction{
public:
  virtual void process() = 0;
  virtual void getNameType() = 0;
  Transaction(Customer* Cust, Movie* Mov, MediaType Media);
private:
  Customer* Cust;
  Movie* Mov;
  MediaType Type;
};

#endif //ASS4DESIGNFILES_TRANSACTION_H
