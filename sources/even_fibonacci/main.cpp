#include <iostream>


#define MAX_FIBONACCI 4000000


int main(void){
    std::size_t result = 0;
    std::size_t t1 = 0;
    std::size_t t2 = 1;
    std::size_t t3 = t1 + t2;

    while (t3 <= MAX_FIBONACCI){
        std::cout << t3 << std::endl;
        t1 = t2;
        t2 = t3;
        t3 = t1 + t2;

        if(t3 % 2 == 0 && t3 <= MAX_FIBONACCI){
            std::size_t result_before = result;
            result += t3;
            std::cout << result_before << " + " << t3 << " = " << result << std::endl;
        }
    }

    std::cout << std::endl;

    std::cout << result << std::endl;

    return 0;

}