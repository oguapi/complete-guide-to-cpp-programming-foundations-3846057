// Complete Guide to C++ Programming Foundations
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    //Coordinate to handle position on the right position
    float target_x;
    int32_t sprite_x;
    uint32_t player_x;

    target_x= -123.45;   //This double constant will be implicitly converted to floar
    sprite_x= target_x;  //This is another implicit type conversion or casting.
    player_x= sprite_x;

    std::cout << "Target X (float): " << target_x << std::endl;
    std::cout << "Sprite X (int32_t): " <<sprite_x<< std::endl;
    std::cout << "Player X (uint32_t): " << static_cast<int32_t>(player_x) << std::endl;


    std::cout << std::endl << std::endl;
    return 0;
}
