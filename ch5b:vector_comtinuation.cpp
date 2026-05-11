#include<iostream>
#include<string>
#include<vector>

double maxNum(const std::vector<double>& vec){

    double max{vec[0]};
    for(const double &Vec : vec){
        if (Vec>max)max=Vec;
    }
    return max;
}


double minNum(const std::vector<double>& vec){
    double min{vec[0]};
    for(const double& Vec : vec){
        if(min>Vec)min=Vec;
    }
    return min;
} 
int main(){
 std::vector<double>data={24,1,6,7,89,907,4,3,92};
std::cout<<maxNum(data)<<std::endl;
std::cout<<minNum(data)<<std::endl;



// moving on to string operation

std::string topic{"roversensor lidar"};

std::cout<<"length: "<<topic.length()<<std::endl;
std::cout<<"Capacity: "<<topic.capacity()<<std::endl;
std::cout<<"size: "<<topic.size()<<std::endl;
std::cout<<"max size: "<<topic.max_size()<<std::endl;
std::cout<<"empty: "<<topic.empty()<<std::endl;
std::cout<<"front: "<<topic.front()<<std::endl;
std::cout<<"back: "<<topic.back()<<std::endl;
std::cout<<"data: "<<topic.data()<<std::endl;

//accessing individual character
std::cout<<"first character: "<<topic.at(0)<<std::endl; 
//we can also do
std::cout<<"first character: "<<topic[0]<<std::endl;

//cocatenation
std::string name{"robo"};
std::string id{"123"};
std::string nameid{name+id};
std::cout<<"nameid: "<<nameid<<std::endl;

//checking for a specific substring
std::cout<<topic.find("sensor")<<std::endl;

//extracting a specific portion
std::cout<<topic.substr(0,6)<<std::endl; // 0 is theindex 6 is the length

//we can replace

topic.replace(5,10,"status");//iterates to 5 then starts from  6 and removes 10 character
std::cout<<topic<<std::endl; 

// we can compare
std::string a {"a"};
std::string b {"b"};
if(a==b)std::cout<<"a and b are equal"<<std::endl;
else if(a!=b)std::cout<<"a and b are not equal"<<std::endl;


//










return 0;
}

