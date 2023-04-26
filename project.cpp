#include <iostream>
#include <string>

using namespace std;

class MovieTicketBooking {
    private:
        string movieTitle;
        int numTickets;
        const double TICKET_PRICE = 150;

    public:
        void setMovieTitle(string title) {
            movieTitle = title;
        }

        void setNumTickets(int num) {
            numTickets = num;
        }

        double calculatePrice() {
            return numTickets * TICKET_PRICE;
        }

        void displayBooking() {
            cout << "Movie Title: " << movieTitle << endl;
            cout << "Number of Tickets: " << numTickets << endl;
            cout << "Total Price: $" << calculatePrice() << endl;
        }
};

int main() {
    // Create object of MovieTicketBooking class
    MovieTicketBooking booking;

    // Get movie title and number of tickets
    string movieTitle;
    int numTickets;

    cout << "Welcome to the Movie Ticket Booking System!\n\n";
    cout << "Please enter the title of the movie you would like to see : ";
    getline(cin, movieTitle);
    booking.setMovieTitle(movieTitle);

    cout << "How many tickets would you like to book? : ";
    cin >> numTickets;
    booking.setNumTickets(numTickets);

    // Display ticket information
    booking.displayBooking();

    // Confirm booking
    char confirmBooking;
    cout << "Would you like to confirm your booking? (y/n) : ";
    cin >> confirmBooking;

    if (confirmBooking == 'y' || confirmBooking == 'Y') {
        cout << "Booking confirmed. Thank you for using our system!\n";
    }
    else {
        cout << "Booking cancelled. Please try again.\n";
    }
    return 0;
}
