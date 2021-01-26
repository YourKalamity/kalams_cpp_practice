#include <iostream>
#include <string>

int main() {
    std::cout << "Enter the username : ";
    std::string username;
    std::cin >> username;
    if (username=="Alice" or username=="Bob"){
        std::cout << "Welcome back, " << username;
    }
    return 0;
}