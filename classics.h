//
// Created by Swetha on 2/26/2020.
//

#ifndef ASS4DESIGNFILES_CLASSICS_H
#define ASS4DESIGNFILES_CLASSICS_H

#include "movie.h"

class Classics : public Movie {
public:
  Classic() = default;
  read(istream &Is) override;
  readKey(istream &Is) override;
  string getTypeName() override;
};

class ClassicsFactory : public MovieFactory {
public:
  Movie *create() override;

private:
  ClassicsFactory() = default;
  static ClassicsFactory Factory;
  string Actor;
  int month;
};

#endif //ASS4DESIGNFILES_CLASSICS_H
