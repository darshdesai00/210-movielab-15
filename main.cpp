// COMSC-210
// Lab: Movie Class with file input and vector
// Reads movie data from input.txt, and stores into the vector<Movie>, and outputs neatly.

#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
using namespace std;

const int W15 = 15;

class Movie {
private:
    string title;        // movie title
    int yearReleased;    // year released
    string screenWriter; // screen writer
public:
    // ----- setters -----
    void setTitle(string t)         { title = t; }
    void setYearReleased(int y)     { yearReleased = y; }
    void setScreenWriter(string sw) { screenWriter = sw; }

    // ----- getters -----
    string getTitle()        { return title; }
    int getYearReleased()    { return yearReleased; }
    string getScreenWriter() { return screenWriter; }

    // ----- print method -----
    void print() {
        cout << "Movie: " << title << endl;
        cout << setw(W15) << "Year released: " << yearReleased << endl;
        cout << setw(W15) << "Screenwriter: " << screenWriter << endl << endl;
    }
};

int main() {
    vector<Movie> movies;    // container
    ifstream fin("input.txt");

    if (!fin) {
        cout << "Error: input.txt not found.\n";
        return 1;
    }

    string title, screenWriter;
    int year;

    // read 4 records: title, year, screenwriter
    while (true) {
        if (!getline(fin, title)) break;       // read title
        if (!(fin >> year)) break;             // read year
        fin.ignore();                          // clear newline
        if (!getline(fin, screenWriter)) break; // read screenwriter

        // temporary Movie object
        Movie temp;
        temp.setTitle(title);
        temp.setYearReleased(year);
        temp.setScreenWriter(screenWriter);

        // add to vector
        movies.push_back(temp);
    }
    fin.close();

    // ✅ output all movies
    for (auto m : movies) {
        m.print();
    }

    return 0;
}


