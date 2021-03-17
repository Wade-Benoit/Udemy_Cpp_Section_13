//
//  Movie.h
//  Section13_Challenge
//
//  Created by Wade Benoit on 5/18/20.
//  Copyright © 2020 Software Systems. All rights reserved.
//

#ifndef Movie_h
#define Movie_h

#include <stdio.h>
#include <string>

class Movie {
private:
    std::string  name;
    std::string  rating;
    int          timesWatched;
    int          score;
    
public:
    
    //Default Constructor with Default Parameter values
    Movie(std::string name_val = "Unknown", std::string rating_val = "Unknown", int timesWatched_val = 0, int score_val = 0);
    
    //Copy Constructor
    Movie(const Movie &m);
    
    //Destructor
    ~Movie();
    
    //Setters
    void setName(std::string name_val);
    
    void setRating(std::string rating_val);
    
    
    
    void setScore(int score_val);
    
    
    
    //Getters,  const used is best practice
    std::string getName() const;
    
    std::string getRating() const;
    
    int getTimesWatched() const;
    
    int getScore() const;
    
    
    //Function to increment times watched
    void incrementTimesWatched();
    
    

};








#endif /* Movie_h */
