//
// Created by Swetha on 2/26/2020.
//

#ifndef ASS4DESIGNFILES_COMEDY_H
#define ASS4DESIGNFILES_COMEDY_H

#include "movie.h"

class Comedy : public Movie {
public:
  Comedy() = default;
  read(istream &Is) override;
  readKey(istream &Is) override;
  string getTypeName() override;
};

class ComedyFactory : public MovieFactory {
public:
  Movie *create() override;

private:
  ComedyFactory() = default;
  static ComedyFactory Factory;
};

#endif //ASS4DESIGNFILES_COMEDY_H
