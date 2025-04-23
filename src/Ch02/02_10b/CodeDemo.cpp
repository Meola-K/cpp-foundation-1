// Complete Guide to C++ Programming Foundations
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    float target_x;
    int32_t sprite_x;
    uint32_t player_x;

    target_x = -123.45;
    sprite_x = target_x;
    player_x = sprite_x;

    std::cout<<"Target (float): "<< target_x<<std::endl;
    std::cout<<"Sprite (int32_t): "<< sprite_x<<std::endl;
    std::cout<<"player (uint32_t): "<< static_cast<int>(player_x)<<std::endl;

    std::cout<<std::endl<<std::endl;
   
    return 0;
}
