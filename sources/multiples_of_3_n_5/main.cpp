#include <iostream>



int main(void){
    std::size_t result = 0;

    for(int i = 0; i < 1000; i++){

        std::cout << i << std::endl;

        if(i % 3 == 0){
            result += i;
        }
        else if(i % 5 == 0){
            result += i;
        }

    }    


    std::cout << result << std::endl;
}