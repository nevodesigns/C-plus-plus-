#include <iostream>
#include <string>
// function is s reusable block of code  that performs a particular task

// there are types of function

// function that return value
double calcspeed(double distance, double time)
{
    return distance / time;
}
// function that does not return value
void batterystatus(std::string robot_id, int battery_health)
{
    std::cout << "robot ID is: " << robot_id << std::endl;
    std::cout << "battery health is: " << battery_health << std::endl;
}

// function with default parameter values
void greet(std::string name = "robot")
{
    std::cout << "hello " << name << std::endl;
}

// function with pass by reference
void updateBatteryLevel(int &battery_level, int change)
{
    battery_level += change;
}

// function with pass by value
void updateBatteryLevelByValue(int battery_level, int change)
{
    battery_level += change;
}

void robotDashboard()
{
    std::cout << "-------Robot Dashboard-------- " << std::endl;
}

void chargeBattery(int &battery)
{
    battery = 100; // modifies the ORIGINAL variable
}

// so it got to my notice that u cant edit pass by reference when you use const to declare it
// yes although om a normal day it is meant to be edited but without the const
// but with const int& or const std::string& whatever we are trying to avoid copying the data to new variables you get
// we want to be space conscious but also data is not modified thta is y we use const &

void printRobotStatus(const int &robot_id, const std::string &name)
{
    std::cout << "robot id: " << robot_id << std::endl;
    std::cout << "robot name: " << name << std::endl;
}

// testing function overloading
void displayStatus(int location_num)
{
    std::cout << "robot is at location: " << location_num << std::endl;
}

void displayStatus(std::string display_name)
{
    std::cout << "robot name is: " << display_name << std::endl;
}

int main()
{

    robotDashboard();
    double speed{calcspeed(10.00, 20.00)};
    std::cout << "speed is: " << speed << " m/s" << std::endl;

    int bat = 15;
    std::cout << "Before: " << bat << std::endl;
    chargeBattery(bat);
    std::cout << "After: " << bat << std::endl;

    // checking out the default parameter function
    greet();
    // so i decided to try to edit the default parameters
    greet("hello user ");
    printRobotStatus(1212, "nevobot");
    // i just learnt that u cant create a function inside the main function or another function

    // function overloading
    displayStatus(5);
    displayStatus("nevo is testing function overloading");
    return 0;
}