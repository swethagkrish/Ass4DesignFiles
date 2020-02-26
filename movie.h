//
// Created by Swetha on 2/26/2020.
//

#ifndef ASS4DESIGNFILES_MOVIE_H
#define ASS4DESIGNFILES_MOVIE_H

#include <iostream>
#include Comedy.h
#include Drama.h
#include Classics.h

using namespace std;

class Movie {
public:
  Movie() = 0;

  bool checkOutType(MediaType);

  bool checkInType(MediaType);

  enum MediaType {DVD};

  static registerType(string Type, Factory MovieFactory*);

  Movie* static create(string Type, istream Is);

private:
  map<MediaType, int> Stock;
  string Director;
  string Title;
}
#endif //ASS4DESIGNFILES_MOVIE_H



};