#include <iostream>
#include <vector>
#include <numeric>

int sumWektor(std::vector<int> wektor) {

    int sum_of_elems = std::accumulate(wektor.begin(), wektor.end(),
                       decltype(wektor)::value_type(0));

    return sum_of_elems;

}

int main() {

    std::vector<int> wektor;

    for( int i = 1; i <= 10; i++ )
        wektor.push_back( i*i );
    
    std::cout << std::endl << "Suma wektora: " << sumWektor(wektor) << std::endl << std::endl;
    
    return 0;

}