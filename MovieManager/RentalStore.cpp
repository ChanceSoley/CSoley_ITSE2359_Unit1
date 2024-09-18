#include "RentalStore.h"
#include <iostream>

using namespace std;

void RentalStore::addMovie(const Movie& movie){
    inventory.push_back(movie);
}

void RentalStore::addMovie(const Customer& customer){
    customers.push_back(customer);
}

void RentalStore::rentMovie(const string& movieTitle, Customer& customer){
    for (auto& movie : inventory){
        if (movie.getTitle() == movieTitle && movie.isAvailable()){
            customer.rentMovie(movie);
            break;
        }
    }
}

void RentalStore::returnMovie(const string& movieTitle, Customer& customer){
    for (auto& movie : inventory){
        if (movie.getTitle() == movieTitle && !movie.isAvailable()){
            customer.returnMovie(movie);
            break;
        }
    }
}
