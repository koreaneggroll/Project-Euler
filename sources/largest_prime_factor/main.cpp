#include <iostream>
#include <vector>


#define PRIME_FACTOR 600851475143


int main(void){
    std::vector<int> prime_factors;

    std::size_t i = 1;
    std::size_t j;
    std::size_t count;

    while(i <= PRIME_FACTOR){
        count = 0;
        
        if(PRIME_FACTOR % i == 0){
            j = 1;
            while(j <= i){
                if(i % j == 0){
                    count++;
                }
                j++;
            }
            
            if(count == 2){
                prime_factors.emplace_back(i);
            }
        }

        i++;
    }


    for(auto &i : prime_factors){
        std::cout << i << ", ";
    }



    return 0;
}