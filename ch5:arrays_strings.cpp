#include <iostream>
#include <string>
#include <array>
#include <vector>

void modifyArray(std::array<double, 3> &arr)
{
    arr[0] = 2.5;
    arr[1] = 43.2;
    arr[2] = 32.4;
}

void modifyVector(std::vector<double> &data)
{
    data.push_back(4.6);
    data.push_back(5.7);
    data.push_back(6.8);
}

void printVector(const std::vector<double> &data)
{
    for (const double &value : data)
    {
        std::cout << "Value " << value << std::endl;
    }
}

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

    // ok lets modify the values
    IMU[0] = 10.6;
    IMU[1] = -5.2;
    IMU[2] = 3.4;
    std::cout << "i just modified the values of arrays using index" << std::endl;
    std::cout << IMU[0] << std::endl;
    std::cout << IMU[1] << std::endl;
    std::cout << IMU[2] << std::endl;

    // now i am going to use a ranfge based for loop to acces the values of the array
    std::cout << "values of the current array" << std::endl;
    for (double &value : IMU)
    {
        std::cout << "Value " << value << std::endl;
    }

    // moving on to vectors
    /// we can create an empty vector for now
    std::vector<double> data;

    // so we can add values to the vector
    data.push_back(1.2);
    data.push_back(2.3);
    data.push_back(3.4);
    std::cout << "data front value: " << data.front() << std::endl;
    std::cout << "data back value: " << data.back() << std::endl;
    std::cout << "data size: " << data.size() << std::endl;
    std::cout << "data capacity: " << data.capacity() << std::endl; // this returns the total num of elements a vector can hold
    std::cout << "i will be clearing the data inside:" << std::endl;
    data.clear();
    std::cout << "data has been cleared" << std::endl;

    if (data.empty())
    {
        std::cout << "Data is empty" << std::endl;
    }
    else
    {
        std::cout << "Data is not empty" << std::endl;

        // iterating through vectors
        for (double &Data : data)
        {
            std::cout << "Data " << Data << std::endl;
        }
    }

    // so let me recheck the size
    std::cout << "Data size after clearing: " << data.size() << std::endl;
    std::cout << "Data capacity after clearing: " << data.capacity() << std::endl;

    // so guys i noticed something after i did data.capacity after clearing it gave me a valu of 4
    // which is not so although i found out that because i had  values stored there before so it dynamically took a value of 4
    // that doesnt mean that it will always be 4 it can be more or less depending on how many values you have stored in the vector before clearing it
    // so basically the capacity of a vector is not reduced when you clear it, it only reduces the size of the vector to 0 but the capacity remains the same but can still increase if you add more values to the vector after clearing it but it will not decrease unless you use the shrink_to_fit() method to reduce the capacity of the vector to fit the size of the vector which is 0 in this case
    data.shrink_to_fit();
    std::cout << "Data capacity after shrinking: " << data.capacity() << std::endl;
    // now i should expect th capacity to be zero bcuz the shrink to fit operation happens in a way that it shrinks the capacityy to match the
    // current size of the vector in this case since i hv cleared the vector the size is zero and our shrink to fit will be zero.

    // vectors can also be passed by reference or by value in the same way as arrays, so if we want to modify the values of the vector inside the function we can pass the vector by reference like this
    // so we can pass by reference using the & operator and we can pass by value by simply not usingthe & operator
    // so for example if we have a function that takes an array as a parameter and we want to modifythe values ofthe array insidethe function we can passthe array by reference like this
    // thearray modification is atthe top
    // so in this casewe are passing the array by reference using the & operator and any changes made tothearray insidethefunction will affecttheoriginalarray outsidethe
    // function
    // so we can call the function like this

    modifyArray(IMU);
    std::cout << "values ofthearray after modifyingit usingthefunction" << std::endl;
    for (double &value : IMU)
    {
        std::cout << "Value " << value << std::endl;
    }

    for (double &Data : data)
    {
        std::cout << "Data " << Data << std::endl;
    }

    std::cout << "print original vctors" << std::endl;
    for (double &Data : data)
    {
        std::cout << "Data " << Data << std::endl;

    } // remeber i already cleared the vector data
    if (data.empty())
    {
        std::cout << "empty vector" << std::endl;
    }

    // i wrote a function to edit vectors check it at the beginnig of the code
    modifyVector(data);

    std::cout << "values of the vector after modifying it using the function" << std::endl;
    printVector(data);

    return 0;
}