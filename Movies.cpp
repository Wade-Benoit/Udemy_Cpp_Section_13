//
//  Movies.cpp
//  Section13_Challenge
//
//  Created by Wade Benoit on 5/18/20.
//  Copyright © 2020 Software Systems. All rights reserved.
//

#include "Movies.h"


#include <iostream>
#include <string>
#include <vector>

using namespace std;



//Initialization of Static Variable here, best done in .cpp file
int Movies::count = 0;


//Adds a movie to the vector movieList
bool Movies::addMovie(const Movie &m) {
    
    std::string movieName = m.getName(); //get name of m movie object
    bool found = false;                        //flag to see if name already in list
    for(int i = 0; i < count; i++) {
        if ( movieName == movieList[i].getName() ) {
            found = true;
        }
    }
    
    if(found) {
        cout << "Movie is already in the List..." << endl;
        return false;
    }
    else {
        movieList.push_back(m);   //Simply adds movie m to the vector and returns true
        count++;                  //increments count
        return true;
    }
}



//Increments movie count of movie with name input
void Movies::incrementWatchedCount(Movie &m) {
    
    
    std::string name = m.getName();
    
    for(int i = 0; i < count; i++) {
        if(name == movieList[i].getName()) {
            m.incrementTimesWatched();
        }
        else {
            cout << name << " was not found in the Movie Collection.." << endl;
        }
    }
}

//Displays all of the Movies within the vector
void Movies::displayMovieList() {
    
    
    if (count > 0) {
    cout << "-------------Movies in List--------------" << endl;
    for(int i = 0; i < count; i++) {
        cout << (i+1) << ".    " << movieList[i].getName() << " " << movieList[i].getRating() << " " << movieList[i].getTimesWatched() << " times watched " << endl;
    }
    cout << "-----------------------------------------" << endl;
        
    }
    
    else {
        cout << "Sorry, No Movies to Display..." << endl;
    }
}
