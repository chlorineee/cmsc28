/* Written by: Cherlie Palarpalar
CMSC 28 - Class Implementation */

#include <iostream>
#include <string>
#include <vector>
#ifndef MOVIE_H     // Checks if the header file has been included
#include "Person.h" // Include the Person class header file

using namespace std;

class Movie {
    private:
        string title;                   // Private member variable to store the title of the movie
        string synopsis;                // Private member variable to store the synopsis of the movie
        string rating;                  // Private member variable to store the rating of the movie
        vector<string> genres;
        vector<Person> directors;
        vector<Person> actors;

    public:
        Movie() {}  // Default constructor

        // Setter methods
        void setTitle(const string& title) { this->title = title; }             
        void setSynopsis(const string& synopsis) { this->synopsis = synopsis; }
        void setRating(const string& rating) { this->rating = rating; }
        void addGenre(const string& genre) { genres.push_back(genre); }
        void setDirectors(const vector<Person>& directors) { this->directors = directors; }
        void setActors(const vector<Person>& actors) { this->actors = actors; }

        // Getter methods
        string getTitle() const { return title; }
        string getSynopsis() const { return synopsis; }
        string getRating() const { return rating; }
        vector<string> getGenres() const { return genres; }
        vector<Person> getDirectors() const { return directors; }
        vector<Person> getActors() const { return actors; }
};

#endif