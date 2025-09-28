// COMSC-210
#include <iostream>
#include <iomanip>
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
    cout << "Movie Lab in progress..." << endl;
    return 0;
}
