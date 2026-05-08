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


return 0;
}