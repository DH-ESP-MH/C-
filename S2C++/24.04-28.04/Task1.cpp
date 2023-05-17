#include <iostream>
#include <string>
using namespace std;

class FlightBooking {
public:
    FlightBooking(int id, int capacity, int reserved);
    void printStatus();
    bool reserveSeats(int number_of_seats);
    bool cancelReservations(int number_of_seats);

private:
    int id;
    int capacity;
    int reserved;
};

FlightBooking::FlightBooking(int id, int capacity, int reserved)
{
    this->id = id;
    this->capacity = capacity;
    if (reserved < 0) {
        this->reserved = 0;
    }
    else if (reserved > capacity) {
        this->reserved = capacity;
    }
    else {
        this->reserved = reserved;
    }
}

void FlightBooking::printStatus()
{
    double percentage = (static_cast<double>(reserved) / capacity) * 100.0;
    cout << "Flight " << id << " : " << reserved << "/" << capacity << " (" << percentage << "%) seats taken" << endl;
}

bool FlightBooking::reserveSeats(int number_of_seats)
{
    double max_reserved_capacity = 1.05 * capacity;

    if (number_of_seats < 0 || reserved + number_of_seats > max_reserved_capacity) {
        return false;
    }

    reserved += number_of_seats;
    return true;
}

bool FlightBooking::cancelReservations(int number_of_seats)
{
    if (number_of_seats < 0 || reserved - number_of_seats < 0) {
        return false;
    }

    reserved -= number_of_seats;
    return true;
}

int main()
{
    int reserved = 0, capacity = 0;
    cout << "Provide flight capacity: ";
    cin >> capacity;
    cout << "Provide number of reserved seats: ";
    cin >> reserved;

    FlightBooking booking(1, capacity, reserved);
    cin.ignore(); // Ignore the newline character left in the input stream

    string command = "";
    while (command != "quit")
    {
        booking.printStatus();
        cout << "What would you like to do?: ";
        getline(cin, command);

        string operation = command.substr(0, command.find(' '));
        int number_of_seats = stoi(command.substr(command.find(' ') + 1));

        if (operation == "add") {
            if (!booking.reserveSeats(number_of_seats)) {
                cout << "Cannot perform this operation" << endl;
            }
        }
        else if (operation == "cancel") {
            if (!booking.cancelReservations(number_of_seats)) {
                cout << "Cannot perform this operation" << endl;
            }
        }
    }

    return 0;
}