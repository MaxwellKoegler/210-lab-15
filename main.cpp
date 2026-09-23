//maxwell koegler | COMSC 210 | lab 15 | 9/22/26

#include <iostream>
#include <fstream>

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

}

int main(){

}