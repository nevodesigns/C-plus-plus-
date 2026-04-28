#include<iostream>
#include<string>

/*
Write a program with four functions (plus main):

double celsiusToFahrenheit(double celsius) — converts and returns the result
double fahrenheitToCelsius(double fahrenheit) — converts and returns the result
void printTemperature(double value, const std::string& unit) — prints like: Temperature: 37.0 °C
std::string classifyTemp(double celsius) — returns "Freezing" (below 0), "Cold" (0–15), "Comfortable" (16–30), or "Hot" (above 30)

In main, ask the user to enter a temperature in Celsius, then print:

The value in Fahrenheit
The classification*/

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9/5) + 32;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}

void printTemperature(double value, const std::string& unit) {
    std::cout << "Temperature: " << value << " " << unit << std::endl;
}

std::string classifyTemp(double celsius) {
    if (celsius < 0) {
        return "Freezing";
    } else if (celsius <= 15) {
        return "Cold";
    } else if (celsius <= 30) {
        return "Comfortable";
    } else {
        return "Hot";
    }
}

int main(){
    double celsius;
    std::cout << "Enter temperature in Celsius: ";
    std::cin >> celsius;
    double fahrenheit = celsiusToFahrenheit(celsius);
    std::cout << "Temperature in Fahrenheit: " << fahrenheit << std::endl;

    printTemperature(20,"C");
    std::string classification = classifyTemp(celsius);
    std::cout << "Temperature classification: " << classification << std::endl;





    return 0;
}