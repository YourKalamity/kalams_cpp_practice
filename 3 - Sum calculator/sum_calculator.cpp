#include <iostream>


int add_numbers_up_to_n(int n){
    int sum = 0;
    for(int i = 1; i<=n; i++){
        std::cout << sum << " + " << i << " = " << sum+i << std::endl;
        sum = sum + i;
    }
    return sum;
}

int main() {
    std::cout << "Enter a number: ";
    int number;
    std::cin >> number;
    std::cout << add_numbers_up_to_n(number);

    return 0;
}