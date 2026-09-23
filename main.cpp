//maxwell koegler | COMSC 210 | lab 15 | 9/22/26

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

class Movie {
private:
string screenWriter;
int yearReleased;
string title;
public:

void setScreenWriter(string w) {
    screenWriter = w;
}
string getScreenWriter() {
    return screenWriter
}

void setYearReleased(int y) {
    yearReleased = y;
}
int getYearReleased(){
    return yearReleased;
}

void setTitle(string w) {
    title = w;
}
string getTitle() {
    return title;
}

void print() {
    cout << "Screen Writer: " << screenWriter << endl;
    cout << "Year released : " << yearReleased << endl;
    cout << "Title: " << title << endl;
}

};

int main(){
    ifstream file("input.txt");

    string line1;
    int line2;
    string line3;

    vector<Movie> movies;

    while(getline(file, line1)) {
        file >> line2;
        file.ignore();
        
        Movie temp = Movie();
        temp.setTitle(line1);
        temp.setYearReleased(line2);
        temp.setScreenWriter(line3);

        movies.push_back(temp);
    }

}