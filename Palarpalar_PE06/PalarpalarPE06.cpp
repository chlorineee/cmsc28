/* Written by: Cherlie Palarpalar
CMSC 28 - Class Implementation */

#include <iostream>
#include <vector>
#include "Person.h"     // Include the Person class header file
#include "Movie.h"      // Include the Movie class header file

using namespace std;

// Function to get the movie details
void getMovieDetails(Movie& movie) {
    cout << "Movie Title: ";
    string title;
    getline(cin, title);
    movie.setTitle(title);

    cout << "Synopsis: ";
    string synopsis;
    getline(cin, synopsis);
    movie.setSynopsis(synopsis);

    cout << "MPAA Rating: ";
    string rating;
    getline(cin, rating);
    movie.setRating(rating);

    cout << "Enter number of genres: ";
    int numGenres;
    cin >> numGenres;
    cin.ignore();
    for (int i = 0; i < numGenres; ++i) {
        cout << "Genre " << i+1 << ": ";
        string genre;
        getline(cin, genre);
        movie.addGenre(genre);
    }
}

// Function to get the person details
void getPersonDetails(const string& role, vector<Person>& persons) {
    cout << "Enter number of " << role << "s: ";
    int numPersons;
    cin >> numPersons;
    cin.ignore(); // to clear the newline character from the input buffer
    for (int i = 0; i < numPersons; ++i) {
        cout << role << " " << i+1 << " First Name: ";
        string fname;
        getline(cin, fname);

        cout << role << " " << i+1 << " Last Name: ";
        string lname;
        getline(cin, lname);

        Person person;
        person.setFname(fname);
        person.setLname(lname);
        persons.push_back(person);
    }
}

// Function to display the movie details
void displayMovieDetails(Movie movie, vector<Person> directors, vector<Person> actors) {
    cout << "\nMOVIE DETAILS\n";
    cout << "Movie Title: " << movie.getTitle() << "\n";
    cout << "Synopsis: " << movie.getSynopsis() << "\n";
    cout << "MPAA Rating: " << movie.getRating() << "\n";
    cout << "Genres: ";
    vector<string> genres = movie.getGenres();

    int i = 1;
    for (const string& genre : genres) {
        cout << "\n[" << i << "] " << genre;
    }
    cout << "\n";

    cout << "Directors: ";
    directors = movie.getDirectors();
    
    i = 1;
    for (const Person& director : directors) {
        cout << "\n[" << i << "] " << director.getFname() << " " << director.getLname();
        i++;
    }
    cout << "\n";

    cout << "Actors: ";
    actors = movie.getActors();
    
    i = 1;
    for (const Person& actor : actors) {
        cout << "\n[" << i << "] " << actor.getFname() << " " << actor.getLname();
        i++;
    }
    cout << "\n";
}

int main() {
    Movie movie;                            // Create an object of the Movie class
    vector<Person> directors, actors;       // Create objects of the Person class to store the director and actor of the movie

    // Display the program description
    cout << "This program will ask about a movie.\n";
    cout << "It will utilize the Person class to store the director and actor of the movie and the Movie class to store the details of the movie.\n\n";
    cout << "Please enter the following details:\n";
    
    getMovieDetails(movie);    // Get the movie details

    // Get the director and actor details
    getPersonDetails("Director", directors);
    getPersonDetails("Actor", actors);

    // Set the director and actor details
    movie.setDirectors(directors);
    movie.setActors(actors);

    displayMovieDetails(movie, directors, actors); // Display the movie details
    return 0;
}