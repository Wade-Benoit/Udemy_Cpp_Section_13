//
//  Movies.hpp
//  Section13_Challenge
//
//  Created by Wade Benoit on 5/18/20.
//  Copyright © 2020 Software Systems. All rights reserved.
//

#ifndef Movies_h
#define Movies_h

#include <stdio.h>
#include <iostream>
#include <vector>
#include "Movie.h"   //Making it possible to use movie objects



using namespace std;

class Movies {
    
private:
    
    //Sets us Movie class as a friend of this class
    friend class Movie;
    
    //Vector to hold the Movie objects as a list
    vector <Movie> movieList;
    
    //Counter variable for Movie # in the movieList
    static int count;
    

public:
    
    
    
    //Adds a movie to the vector movieList
    bool addMovie(const Movie &m);
    
    //Increments movie count of movie with name input
    void incrementWatchedCount(Movie &m);
    
    //Displays all of the Movies within the vector
    void displayMovieList();
    
    
    
};

#endif /* Movies_h */
