#include <vector>
#include <fstream>
#include <iomanip>
#include <iostream>

struct Car {
    int order = 0;
    std::string colour, plate, model, year;
};
using Cars = std::vector<Car>;

bool CarDetails(Car& car) try {
    std::cin.exceptions(std::ios::failbit);

    std::cout << "Enter Car number on the database (enter 0 to complete): ";

    if (std::cin >> car.order) {
        std::cin.ignore(1024, '\n');
    }

    if (car.order == 0)
        return false;

    std::cout << "Enter Car colour: ";
    std::getline(std::cin, car.colour);

    std::cout << "Enter Car Plate number: ";
    std::getline(std::cin, car.plate);

    std::cout << "Enter Car Model: ";
    std::getline(std::cin, car.model);

    std::cout << "Enter Car Year of revision: " << std::endl;
    std::getline(std::cin, car.year);

    return true;
} catch(std::exception const& e) {
    std::cout << "Input error (" << e.what() << ")\n";
    return false;
}

Cars Carsfunction() {
    Cars cars;

    while (true) {
        Car car;

        if (!CarDetails(car)) 
            break;

        cars.push_back(std::move(car));
    }

    return cars;
}

void printFile(Cars const& file, std::string const& fname) {
    std::ofstream out(fname);

    struct {
        int width;
        std::string header;
    } columns[] = { { 10, "Order" }, { 30, "Colour" }, { 25, "Plate" }, 
                    { 25, "Model" }, { 15, "Year" } };

    for (auto& col : columns) out << std::setw(col.width) << col.header << " | ";
    out << "\n" << std::setfill('-');
    for (auto& col : columns) out << std::setw(col.width) << "" << "-+-";
    out << "\n" << std::setfill(' ');

    for (auto& car : file) {
        out << std::setw(columns[0].width) << car.order << " | " 
            << std::setw(columns[1].width) << car.colour << " | " 
            << std::setw(columns[2].width) << car.plate << " | " 
            << std::setw(columns[3].width) << car.model << " | " 
            << std::setw(columns[4].width) << car.year << " |" << "\n";
    }

    for (auto& col : columns) out << std::setw(col.width) << std::setfill('-') << "" << "-+-";
    out << "\n";
}

int main() {
    Cars database = Carsfunction();

    std::cout << "All data from " << database.size() << "car(s) saving in txt file\n";

    printFile(database, "Carstxtfile.txt");
}
