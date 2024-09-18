#ifndef REANTALSTORE_H
#define REANTALSTORE_H

#include <vector>
#include "Movie.h"
#include "Customer.h"


using namespace std;

class RentalStore{
    private:
        vector<Movie> inventory;
        vector<Customer> customers;
        
    public:
        void addMovie(const Movie& movie);
        void addCustomer(const Customer& customer);


        void rentMovie(const string& movieTitle, Customer& customer);
        void returnMovie(const string& movieTitle, Customer& customer);

        void displayAvailableMovies() const;
};

#endif 