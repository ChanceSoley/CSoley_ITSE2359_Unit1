#include "Movie.h"
#include "Customer.h"
#include "RentalStore.h"

using namespace std;

int main(){
    RentalStore store;

    store.addMovie(Movie("The Matrix", "Sci-fi", 1999));
    store.addMovie(Movie("Inception", "Sci-fi", 2010));
    store.addMovie(Movie("The Godfather", "Crime", 1972));

    Customer customer1("John Doe");
    Customer customer2("Jane Smith");

    store.addCustomer(customer1);
    store.addCustomer(customer1);

    store.displayAvailableMovies();

}