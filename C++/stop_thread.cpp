#include <iostream>
#include <chrono>
#include <thread>

int main()
{
    std::cout << "Hello..." << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1000) );
    system("cls");
    std::cout << "World. (Waited for 1 s)\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(1000) );
}