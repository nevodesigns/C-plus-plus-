#include<iostream>




int main(){

    int speed{42}; // so this doesnt just create a value it reserves 4 byts of RAM and assigns the value 42
    // reference
    //a refererence is an alias for another variable that already exist
    int &ref{speed}; // i have made ref a reference to the variable speed it referes or points to the same memory location

    std::cout<<"speed value: "<<speed<<std::endl;
    std::cout<<"ref value: "<<ref<<std::endl; //this will output 42
    std::cout<<"address of ref value: "<<&ref<<std::endl; // this will output the address of speed or where 42 is stored in memory
    std::cout<<"address of speed value: "<<&speed<<std::endl; // this will also out the address of 42 or speed in memory
    
    ref=102; // this will also change the value of speed to 102 
    std::cout<<"speed value: "<<speed<<std::endl; // this will output 102
    std::cout<<"ref value: "<<ref<<std::endl; // this will also
    
    
    
    
    
    return 0;
}