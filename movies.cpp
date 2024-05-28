#include <iostream>
#include <string>

using namespace std;

struct Movie {
    string title;
    string director;
    int releaseYear;
    string genre;
};

void displayMovieInfo(const Movie& movie) {
    cout << "The title is: " << movie.title << endl;
    cout << "The director is: " << movie.director << endl;
    cout << "The release year is: " << movie.releaseYear << endl;
    cout << "The genre is: " << movie.genre << endl;
}

void displayAllMovies(const Movie movies[], int numOfMovies) {
    for (int i = 0; i < numOfMovies; i++) {
        displayMovieInfo(movies[i]);
    }
}

int main() {
    // variable declaration
    const int SIZE = 5;

    Movie movies[SIZE];

    for (int i = 0; i < SIZE; i++) {
        cout << "Enter title for movie " << i + 1 << ":" << endl;
        getline(cin, movies[i].title);
        cout << "Enter director for movie " << i + 1 << ":" << endl;
        getline(cin, movies[i].director);
        cout << "Enter release year for movie " << i + 1 << ":" << endl;
        cin >> movies[i].releaseYear;
        cin.ignore(); // to clear the newline character from the input buffer
        cout << "Enter genre for movie " << i + 1 << ":" << endl;
        getline(cin, movies[i].genre);
    }

    cout << "All Movies Information" << endl;
    displayAllMovies(movies, SIZE);

    return 0;
}
