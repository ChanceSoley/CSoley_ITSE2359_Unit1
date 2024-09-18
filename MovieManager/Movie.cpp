#include "Movie.h"


using namespace std;

Movie::Movie() : title(""), genre(""), year(0), available(true) {}

Movie::Movie(std::string title,std::string genre, int year, bool available) 
    : title(title), genre(genre),year(year),available(available) {}

string Movie::getTitle() const {
    return title;
}

string Movie::getGenre() const {
    return genre;
}

int Movie::getyear() const {
    return year;
}

bool Movie::isAvailable() const {
    return available;
}

void Movie::rent(){
    if(available){
        available - false;
    }
}

void Movie::returnMovie(){
    available - true;
}