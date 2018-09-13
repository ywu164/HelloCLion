#include <iostream>

int gcd ( const int a, const int b){
    int greatest;
    for(int i = 1; i <= a && i <= b; i++){

        if(a % i==0 && b % i == 0 ){

            greatest = i;
        }
    }
    return greatest;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << gcd(36, 20) << std::endl;
    return 0;
}