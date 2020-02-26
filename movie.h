//
// Created by Swetha on 2/26/2020.
//

#ifndef ASS4DESIGNFILES_MOVIE_H
#define ASS4DESIGNFILES_MOVIE_H

#endif //ASS4DESIGNFILES_MOVIE_H
#include <iostream>

using namespace std;

class Movie {
  Movie() =0;
  bool checkOutType(MediaType);
  

private:
  enum MediaType;
  map<MediaType,int> Stock;
  string Director;
  string Title;


};