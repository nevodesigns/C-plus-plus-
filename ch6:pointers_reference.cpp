#include<iostream>
#include<string>


//using a ptr to modify the original value
void modify_ptr(int* ptr){
    *ptr=*ptr*2; // this will dereference the ptr and change the value of distance to 64

   // *ptr=100;
}



//alsough we can use reference to modify the original value
void modif_ref(int& ref){
    ref=ref*2; // this will also change the value of distance to 128
}
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
    std::cout<<"ref value: "<<ref<<std::endl; // this will also output 102


    // so there are rules guiding references
    //must be initialized immediately , you cannt declare and bind later
    //int& decimal; // this will cause an error
    int& decimall{speed};

    // cammot rebound a reference to another variable
    int velocity{200};
    int slow{10};
    int& vel{velocity};
    vel=slow; // this will change the value of velocity to 10 but vel will still point to velocity and not slow

    std::cout<<"velocity value: "<<velocity<<std::endl;
    std::cout<<"slow value: "<<slow<<std::endl;
    std::cout<<"vel value: "<<vel<<std::endl;


    // int &vel{speed}; // this would try to rebind, but can't
    // vel already points to velocity and i cant change it to point to something else, hope you get it

    
    // so moving on to pointers
    //& is the address of operator
    // * is the dereference operator
    // although there are two operations that use the * operator
    int distance{32};
    int* ptr{&distance}; // ptr now points to the address of distance

    std::cout<<"distance: "<<distance<<std::endl;
    std::cout<<"address: "<<ptr<<std::endl;
    std::cout<<"dereferencing the ptr: "<<*ptr<<std::endl;
    std::cout<<"address of distance: "<<&distance<<std::endl;   
    
    
// moving on to nullptr
int* part{nullptr};// the pointer exist but points to mothing
// it is safe practice to always check before dereferencing an unknown pointer
if(part==nullptr){ 
    std::cout<<"part is a null pointer"<<std::endl; }
    else{
        std::cout<<"part is not a null pointer "<<*ptr<<std::endl;
    }



// so we can also have pointer to pointer
int** ptrptr{&ptr}; // this is a pointer to a pointer, it points to the address of ptr which in turn points to the address of distance
std::cout<<"ptrptr: "<<ptrptr<<std::endl;
std::cout<<"dereferencing ptrptr: "<<*ptrptr<<std::endl;
// normally you hv to do **ptrptr to get the value bcuz *ptrptr only gets the address for a ptr thaat points to another pointer
// also i dont see the use of pointer to pointer but it is used in some cases like dynamic memory allocation and when you want to pass a pointer to a function and modify the pointer itself

/*i moved the below function to the top to avoid error of undeclared function
using a ptr to modify the original value
void modify_ptr(int* ptr){
    *ptr=*ptr*2; // this will dereference the ptr and change the value of distance to 64

   // *ptr=100;
}*/

/*alsough we can use reference to modify the original value
void modif_ref(int& ref){
    ref=ref*2; // this will also change the value of distance to 128
}*/

modify_ptr(ptr);
std::cout<<"distance after modify_ptr: "<<distance<<std::endl;
modif_ref(*ptr);
std::cout<<"distance after modif_ref: "<<distance<<std::endl;

    
    return 0;
}