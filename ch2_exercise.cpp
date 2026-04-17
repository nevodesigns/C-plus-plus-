#include <iostream>
#include <string>

/*Chapter 2 Exercise
Write a program that:

Declares variables for: your name (string), your age (int), and a target speed in m/s (double)
Asks the user to enter all three values
Calculates how far you'd travel in 10 seconds at that speed
Prints a formatted summary */
int main(){
    int time_sec{10};
    std::string name;
    int age;
    double speed;

    std::cout<<"Enter your name: ";
    std::cin>>name;
    std::cout<<"Enter your age: ";
    std::cin>>age;
    std::cout<<"Enter your current speed: ";
    std::cin>>speed;

    double distance {speed*time_sec};

    std::cout<<"------------SUMMARY------------"<<std::endl;
    std::cout<<"NAME: "<<name<<std::endl;
    std::cout<<"AGE: "<<age<<std::endl;
    std::cout<<"speed: "<<speed<<"m/s"<<std::endl;
    std::cout<<"DISTANCE IN 10s: "<<distance<<"m"<<std::endl;

    return 0;
}