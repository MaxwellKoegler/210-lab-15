//maxwell koegler | COMSC 210 | lab 15 | 9/22/26

#include <iostream>
#include <fstream>
#include <string>

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

    string line;
    while(getline(file, line)) {
        Movie temp = Movie();
        temp.setTitle(line);
    }

}