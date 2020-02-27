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
#include store.h
enum MediaType {DVD};
class Movie {
public:
  Movie() = default;
  void read(istream Is) = 0;
  string getNameType()  = 0;
  bool checkOut(Type MediaType);
  bool checkIn(Type MediaType);
  static registerType(char MovieType, MovieFactory* Factory);
  Movie* static create(char MovieType);


private:
  static map<char, MovieFactory> Factories;
  string Director;
  string Title;

}
#endif //ASS4DESIGNFILES_MOVIE_H



};