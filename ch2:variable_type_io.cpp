#include <iostream>

int main(){

// so we have ints which is for whole numbers either positive or negative 
    int node_id=100;
// we have double this is for decimal numbers with high precision 
    double temp=24.6;
// we have floats this is for decimal numbers with low precision e.g 
    float tempp=24.6f;
//we have char this is for single characters like
    char grade='A';
// we have bool this is for true or false values like 
    bool isrobot_moving=true;
// we have string this is for text like
 std::string name="John";


//Declaring variables
//1, declare and assign later
    int age;
    age =19;

//2, declare and assign at the same time
    int num=18;

//3. declare multiple variables of the same type at the same time
    int x=10, y=20, z=30;

//4. this is used in modern c++ uniform initilazation
    int a{5};

    // so you might be wondering what is the difference betwween unform initialisation and regular initialisation
    //check my below code
    int price=199.5; // this will compile but will be truncated or assigned a value of 199 and it causes data losses
    double prices{199.5};// this wil throw an werror to avoid data loss


 // auto keyword
    // this is used to automatically deduce the type of varible based on the value assigned to it 
    auto speed {100};// this willl deduce it as int
    auto pi{3.14};// this will deduce it as double

    //so notice the below they are actually a different case
    auto first_name{"Alice"};// this will deduce it as const char*
    auto tagname{std::string("C++")}; // this will deduce it as std::string

    auto is_motion_detected{true}; // this will deduce it as bool

    // so auto doesnt make c++ a dynamically typed language it just deduces the type at compile time not during run time based on the assigned value
    // so use auto when the type is obvious , like types that are obviously strings or integers 
    // i will use it to avoid repititve typing 
    // but avoid using it when the type is not clear or when it can lead to confusion  be specific whether it is it or const or string

 //constant variables
    const int max_speed{190};
    const std::string dummy_name{"john doe"};

    // we hv constexpr this is for compile time constants
    // normal const variables are known at runtime but not at compile time like constexpr variables are known at compile time and they can be used in contexts that require a value to be known at compile time
    constexpr int node1{9};
    constexpr double maxspeed{200};

//Arithmetic operators
    int c{10},b{3};

    int sum{a+b};
    int difference(a-b);
    int product{a*b};
    //double division{a/b}; this will give an error due to naming conversion from int to double
    int modulus{a%b};


//output the results
// here we will the string header file .
    int age1{25};
    double speeed{220.5};
    std::string namee{"NEVO DESIGNS"};
    
// so the below is how we output to theconsole
    std::cout<<"AGE: "<<age1<<std::endl;
    std::cout<<"SPEED: "<<speeed<<std::endl;
    std::cout<<"NAME: "<<namee<<std::endl;

    // we can also get input from user using std::cin
    std::string robot_name;
    int robot_pt;

    std::cout<<"enter robot name:";
    std::cin>>robot_name;

    std::cout<<"enter robot point: ";
    std::cin>>robot_pt;

    std::cout<<"your robot name is  "<<robot_name<<"and it has a robot point of "<<robot_pt<<std::endl;
    // also i learnt that getline only works with strings
    std::cin.ignore();
    //std::cin>>robot_pt grabs the 25 but leaves the \n sitting in the buffer. It doesn't clean up after itself.
    //When getline runs next, it looks at the buffer and immediately sees that leftover \n and says "oh, 
    //the user already pressed Enter, I'm done" and returns an empty string without even waiting for you to type anything.

    std::string class_size;
    getline(std::cin,class_size);

    return 0;
}