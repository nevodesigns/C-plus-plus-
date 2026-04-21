#include <iostream>
#include <string>
#include <array>
#include <vector>

int main(){
//if / else if / else    
    int battery_level{60};
    if(battery_level==100){
        std::cout<<"battery is full "<<std::endl;
    }else if(battery_level >60 && battery_level<90 ){
        std::cout<<"battery is good "<<std::endl;
    }else{
        std::cout<<"battery is low "<<std::endl;
    }
/* so according to freecode camp these are d below comparison operators
    a == b   // equal to           (note: == not =)
    a != b   // not equal to
    a > b    // greater than
    a < b    // less than
    a >= b   // greater than or equal
    a <= b   // less than or equal
*/

//we have logical operators
bool is_moving{true};
int speed {56};

if (is_moving && speed>50){
    std::cout<<"robot is moving fast "<<std::endl;}


//switch statements
int gear{3};
switch (gear){
    case 1:
    std::cout<<"Gear 1"<<std::endl;
    break;
    case 2:
    std::cout<<"Gear 2"<<std::endl;
    break;
    case 3:
    std::cout<<"Gear 3"<<std::endl;
    break;
    default:
    std::cout<<"invalid selection"<<std::endl;
    break;
}


//for loop 
int customer_list{10};
for (int i=0 ; i<customer_list; i++){
    std::cout<<"i"<<i<<std::endl;
}


// also lets remeber we are trying tot optimize memory
std::array <double,5> list ={1.2, 3.4, 5.6, 7.8, 9.0};
for (const double& val : list){
    std::cout<<"val "<<val<<std::endl;
}

// range based for loops modern c++
std::vector<int>numbers{1,2,3,4,5};
for (const int& num : numbers){
    std::cout<<"num: "<<num<<std::endl;
} 

//while loop
int max_num{10};
while(max_num<=10){
    std::cout<<"max_num: "<<max_num<<std::endl;
    max_num++;
}



//do while loop
int numb{0};
int count{0};
do{
     std::cout<<"you have three choices to enter only 3 numbers: "<<std::endl;
    std::cin>>numb;

 count++;
 if(numb<1 || numb>5){
    std::cout<<"enter a number between 1 and 5: "<<std::endl;
   break;
 }
 if (count == 3) {
        std::cout << "Max trials reached" << std::endl;
        break;}
   
}while(
     
    count<4);

// Break and continue statements

for (int br=0; br<10;br++){
    if (br==5){ 
        std::cout<<"reached br number 5"<<std::endl;
        break;
    }
    std::cout<<"you inputted br val is: "<<br<<std::endl;
} 



//nested control flow
//in robotics logics are nested or combined

std::vector<double> sonar_readings={2.5, 1.8, 0.4, 3.0, 0.2, 1.1};
    const double safe_distance{0.5};

    for (double reading: sonar_readings){
        if(reading <safe_distance){
            std::cout<<"ALERT obstcle at "<<reading<<"m."<<std::endl;
        }
        else if(reading<1.0){
            std::cout<<"robot slowing down: "<<std::endl;
        }else{
            std::cout<<"road is cler at "<<reading<<"m"<<std::endl;
        }
    }
    return 0;
}
