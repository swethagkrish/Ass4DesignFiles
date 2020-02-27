//
// Created by Swetha on 2/26/2020.
//

#ifndef ASS4DESIGNFILES_DRAMA_H
#define ASS4DESIGNFILES_DRAMA_H

#include "movie.h"

class Drama : public Movie {
public:
  Drama() = default;
  read(istream &Is) override;
  readKey(istream &Is) override;
  string getTypeName() override;
};

class DramaFactory : public MovieFactory {
public:
  Movie *create() override;

private:
  DramaFactory() = default;
  static DramaFactory Factory;
};

#endif //ASS4DESIGNFILES_DRAMA_H
