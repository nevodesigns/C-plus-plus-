#include <iostream>
#include <string>
#include <array>
int main()
{

    // so we hv the c style array like int arr[2]={0,1};
    // we can use the array class from the standard library #include <array> to create an array

    std::array<double, 3> IMU = {0.2, -2.9, 0.5};

    // we can access by index like the c style array
    std::cout << "IMU at x is " << IMU[0] << std::endl;
    std::cout << "IMU at y is " << IMU[1] << std::endl;
    std::cout << "IMU at z is " << IMU[2] << std::endl;

    // ok so i will access the array using the <array> methods
    std::cout << "IMU at x is " << IMU.at(0) << std::endl;
    std::cout << "IMU at y is " << IMU.at(1) << std::endl;
    std::cout << "IMU at z is " << IMU.at(2) << std::endl; // this should throw an error like it prevent the code from running
    // so basically the function of the .at() is to check if the index is out of range or not,
    // it also checks if it is out of range it will throw an exception

    // we can also use the .front() and .back() to access the first and last element of the array
    std::cout << "IMU at the front of the array is  " << IMU.front() << std::endl;
    std::cout << "IMU at the back of the array is " << IMU.back() << std::endl;

    // we can also use the .size() and .max_size() to get the size of the array
    std::cout << IMU.max_size() << std::endl;
    std::cout << IMU.size() << std::endl;

    // we can also use the .data() to get the pointer to the first element of the array
    std::cout << IMU.data() << std::endl;

    // so below i dont actually see the use of them but i will just have them in mind
    std::cout << IMU.begin() << std::endl; // this will return the pointer to the first element of the array
    std::cout << IMU.end() << std::endl;   // this will return the pointer to the last element of the array
    // std::cout<<IMU.rbegin()<<std::endl;

    // this is for you that is currently reading this so you can see the difference
    // front() and back() are used to access the first and last element of the array respectively.
    // size() is used to get the number of elements in the array.
    // max_size() is used to get the maximum number of elements that the array can hold.
    // data() is used to get the pointer to the first element of the array.





    //ok lets modify the values
    IMU[0]=10.6;
    IMU[1]=-5.2;
    IMU[2]=3.4;
std::cout<<"i just modified the values of arrays using index"<<std::endl;
    std::cout<<IMU[0]<<std::endl;
    std::cout<<IMU[1]<<std::endl;
    std::cout<<IMU[2]<<std::endl;


    //now i am going to use a ranfge based for loop to acces the values of the array
    std::cout<<"values of the current array"<<std::endl;
    for(double& value : IMU){
        std::cout<<"Value "<<value<<std::endl;
    }

















    
    return 0;
}