//
//  main.cpp
//  Section13_Challenge
//
//  Created by Wade Benoit on 5/18/20.
//  Copyright © 2020 Software Systems. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include "Movies.h"
#include "Movie.h"

using namespace std;

//Helper Function








int main(int argc, const char * argv[]) {
   
    
    
    //Creation of Movies object movieList
    Movies movieList;
    
    
    
    //Display an empty list attempt
    movieList.displayMovieList();
    
    
    //Creation of Movie, Die Hard
    Movie dieHard("Die Hard", "PG-13", 2, 2);
    
    //add a movie to the list
    movieList.addMovie(dieHard);
    
    
    //display the movie list, with one movie
    movieList.displayMovieList();
    
    
    //increment the times watched of that one move, Die Hard
    movieList.incrementWatchedCount(dieHard);
    cout << "Times watched Die Hard: " << dieHard.getTimesWatched() << endl;
    
    
    movieList.incrementWatchedCount(dieHard);
    cout << "Times watched Die Hard: " << dieHard.getTimesWatched() << endl;
    
    
    
    return 0;
}
