#ifndef MOVIE_H
#define MOVIE_H
#include <string>


using namespace std;

class Movie{
    private:
        string title;
        string genre;
        int year;
        bool available;
        
    public:
        //defauilt Constructor
        Movie();

        //Parametrized Constructor
        Movie(string title, string genre, int year, bool available = "false");

        //Getter
        string getTitle() const;
        string getGenre() const;
        int getYear() const;
        bool isAvailable() const;

        //
        void rentMovie();
        void returnMovie();
};

#endif //MOVIE_H