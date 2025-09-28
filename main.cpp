// COMSC-210
#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
using namespace std;

const int W15 = 15;

class Movie {
private:
    string title;
    int yearReleased;
    string screenWriter;
public:
    // setters
    void setTitle(string t)         { title = t; }
    void setYearReleased(int y)     { yearReleased = y; }
    void setScreenWriter(string sw) { screenWriter = sw; }

    // getters
    string getTitle()        { return title; }
    int getYearReleased()    { return yearReleased; }
    string getScreenWriter() { return screenWriter; }

    // print method
    void print() {
        cout << "Movie: " << title << endl;
        cout << setw(W15) << "Year released: " << yearReleased << endl;
        cout << setw(W15) << "Screenwriter: " << screenWriter << endl << endl;
    }
};

int main() {
    vector<Movie> movies;    // container to store movie objects
    ifstream fin("input.txt");

    if (!fin) {
        cout << "Error: input.txt not found.\n";
        return 1;
    }

    cout << "File opened successfully, ready to read movie data.\n";

    return 0;
}

