//
// Created by Swetha on 2/26/2020.
//

#ifndef ASS4DESIGNFILES_BORROW_H
#define ASS4DESIGNFILES_BORROW_H

#include transaction.h

class Borrow{
  Borrow(Customer* Cust, Movie* Mov, MediaType Media);
  process() override ;
  string getTypeName() override;
};

#endif //ASS4DESIGNFILES_BORROW_H
