#include <string>
#include <iostream>

class Motorcycle {
public:
    Motorcycle(const std::string& make, int year, int engineCC);

    void displayInfo() const;
    void start() const;
    void stop() const;

private:
    std::string make_;
    int year_;
    int engineCC_;
};

// Implementations for Motorcycle methods
Motorcycle::Motorcycle(const std::string& make, int year, int engineCC)
    : make_(make), year_(year), engineCC_(engineCC) {}

void Motorcycle::displayInfo() const {
    std::cout << "Make: " << make_ << ", Year: " << year_ << ", Engine: " << engineCC_ << "cc" << std::endl;
}

void Motorcycle::start() const {
    std::cout << "Motorcycle started." << std::endl;
}

void Motorcycle::stop() const {
    std::cout << "Motorcycle stopped." << std::endl;
}

int main() {
    std::cout << "Welcome to the Motorcycle Project!" << std::endl;

    Motorcycle myMotorcycle("Ducati Panigale", 2024, 1103);

    myMotorcycle.displayInfo();
    myMotorcycle.start();
    myMotorcycle.stop();

    return 0;
}