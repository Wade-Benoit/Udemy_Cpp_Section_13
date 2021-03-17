//
//  Movie.cpp
//  Section13_Challenge
//
//  Created by Wade Benoit on 5/18/20.
//  Copyright © 2020 Software Systems. All rights reserved.
//

#include "Movie.h"
#include "Movies.h"

#include <iostream>


//Default Constructor with initialization list
Movie::Movie(std::string name_val, std::string rating_val, int timesWatched_val, int score_val) :
name(name_val), rating(rating_val), timesWatched(timesWatched_val), score(score_val)
{
    std::cout << "Default Constructor Used" << std::endl;
}

//Setters
void Movie::setName(std::string name_val) {name = name_val;}

void Movie::setRating(std::string rating_val) {rating = rating_val;}


void Movie::setScore(int score_val) {score = score_val;}



//Getters,  const used is best practice
std::string Movie::getName() const {
    return name;
}

std::string Movie::getRating() const {
    return rating;
};

int Movie::getTimesWatched() const {
    return timesWatched;
};

int Movie::getScore() const {
    return score;
};



//Increments the timesWatched private data member for that Movie object
void Movie::incrementTimesWatched() {
    timesWatched++;
}
