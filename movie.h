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
  virtual void read(istream Is) = 0;
  virtual void readKey(istream Is) = 0;
  virtual void string getNameType()= 0;
  virtual bool checkOut(Type MediaType);
  virtual bool checkIn(Type MediaType);

  static registerType(char MovieType, MovieFactory* Factory);
  static bool isValidType(char MovieType);
  Movie* static create(char MovieType);

private:
  static map<char, MovieFactory> Factories;
  string Director;
  string Title;

}

class MovieFactory{
  MovieFactory();
  virtual Movie* create() = 0;

#endif //ASS4DESIGNFILES_MOVIE_H



};