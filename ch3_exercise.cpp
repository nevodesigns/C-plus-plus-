#include <iostream>
#include <vector>

/* 
Chapter 3 Exercise
Write a program that:

Stores a vector of 6 battery readings: {95, 72, 40, 18, 60, 5}
Loops through every reading
For each reading, prints one of:

"[FULL]" if above 80
"[OK]" if between 40 and 80 (inclusive)
"[LOW]" if between 20 and 40
"[CRITICAL — charge now!]" if below 20


After the loop, print how many readings were critical*/

int main(){
std::vector<int>readings={95, 72, 40, 18, 60, 5};
int critical_count{0};

for (int reading : readings){
    if(reading >80){
        std::cout<<"[FULL]"<<std::endl;
    }else if(reading >=40 || reading<=80){
        std::cout<<"[OK]"<<std::endl;
    }else if(reading<20){
std::cout<<"[CRITICAL — charge now!]"<<std::endl;
critical_count++;
    }
}

std::cout<<"number of times battery was at a critical state "<<critical_count<<std::endl;



}