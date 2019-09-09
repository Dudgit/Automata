#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <numeric>


auto my(std::string what_to_find, std::string find_whitin,double price) {
    int drink_existed = 0;
    auto pricegiver = [price](std::string drink){
        std::cout<<"This drink will cost "<<price <<"Ft"<<std::endl;
    };

    auto searching=[pricegiver,what_to_find,find_whitin,price,&drink_existed](){
        size_t my_bool = find_whitin.find(what_to_find);
        if(my_bool != std::string::npos){
            pricegiver(what_to_find);
            drink_existed++;
            }
    };
    return drink_existed;
}

int main(int, char**) {


    std::string first_drink;
    std::cout<< "What kind of drink would you like?" <<std::endl;
    std::cin>> first_drink;
    
    int i =0;
    i+=my("Cola",first_drink,340);
    i+=my("Tonic",first_drink,320);
    i+=my("Sprite",first_drink,330);
    i+=my("Natur Aqua",first_drink,250);

    if(i<1){std::cout<<"Please select a real drink"<<std::endl;}
    
}