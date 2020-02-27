//
// Created by Swetha on 2/26/2020.
//

#ifndef ASS4DESIGNFILES_RETURN_H
#define ASS4DESIGNFILES_RETURN_H
#include transaction.h
class Return{
  Return(Customer* Cust, Movie* Mov, MediaType Media);
  process() override;
  string getTypeName() override;
};

#endif //ASS4DESIGNFILES_RETURN_H
