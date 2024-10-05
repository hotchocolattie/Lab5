#include <vector>
#include "StringData.h"
#include <chrono>
#include <iostream>

namespace chrono = std::chrono;

int linear_search(std::vector<std::string> container, std::string element) {
    for (int i = 0; i < container.size(); i++) {
        if (container[i] == element) {
            return i;
        }
    }

    return -1;
}

int binary_search(std::vector<std::string> container, std::string element) {
    int lower_limit = 0;
    int upper_limit = container.size() - 1;

    while (lower_limit <= upper_limit) {
        int middle = (lower_limit + upper_limit) / 2;

        if (container[middle] > element) {
            upper_limit = middle - 1;
        } else if (container[middle] < element) {
            lower_limit = middle + 1;
        } else
            return middle;
    }

    return -1;
}

int main() {
    // get the big vector!!
    const std::vector<std::string> big_vector = getStringData();

    //performs linear search for "not_here" and subtracts inital time from final time to output total time taken
    auto before_linear_search = std::chrono::high_resolution_clock::now();

    std::cout << "Index of not_here: " << linear_search(big_vector, "not_here");

    auto since_linear_search = std::chrono::high_resolution_clock::now();
    auto linear_difference = std::chrono::duration_cast<std::chrono::milliseconds>(since_linear_search - before_linear_search);
    int differencePrint = linear_difference.count();

    std::cout << "\nTime of Linear Search: " << differencePrint << " milliseconds\n";


    std::cout << "\n";


    //performs binary search for "not_here" and outputs total time to output.
    auto before_binary_search = std::chrono::high_resolution_clock::now();

    std::cout << "Index of not_here: " << binary_search(big_vector, "not_here");

    auto since_binary_search = std::chrono::high_resolution_clock::now();
    auto binary_difference = std::chrono::duration_cast<std::chrono::milliseconds>(since_binary_search - before_binary_search);
    int difference_print = binary_difference.count();

    std::cout << "\nTime of Binary Search: " << difference_print << " milliseconds\n";

    std::cout << "\n";
    std::cout << "=====================================";
    std::cout << "\n\n";

    //performs linear search for "mzzzz" and subtracts inital time from final time to output total time taken
    before_linear_search = std::chrono::high_resolution_clock::now();

    std::cout << "Index of mzzzz: " << linear_search(big_vector, "mzzzz");

    since_linear_search = std::chrono::high_resolution_clock::now();
    linear_difference = std::chrono::duration_cast<std::chrono::milliseconds>(since_linear_search - before_linear_search);
    differencePrint = linear_difference.count();

    std::cout << "\nTime of Linear Search: " << differencePrint << " milliseconds\n";


    std::cout << "\n";


    //performs binary search for "mzzzz" and outputs total time to output.
    before_binary_search = std::chrono::high_resolution_clock::now();

    std::cout << "Index of mzzzz: " << binary_search(big_vector, "mzzzz");

    since_binary_search = std::chrono::high_resolution_clock::now();
    binary_difference = std::chrono::duration_cast<std::chrono::milliseconds>(since_binary_search - before_binary_search);
    difference_print = binary_difference.count();

    std::cout << "\nTime of Binary Search: " << difference_print << " milliseconds\n";

    std::cout << "\n";
    std::cout << "=====================================";
    std::cout << "\n\n";

    //performs linear search for "aaaaa" and subtracts inital time from final time to output total time taken
    before_linear_search = std::chrono::high_resolution_clock::now();

    std::cout << "Index of aaaaa: " << linear_search(big_vector, "aaaaa");

    since_linear_search = std::chrono::high_resolution_clock::now();
    linear_difference = std::chrono::duration_cast<std::chrono::milliseconds>(since_linear_search - before_linear_search);
    differencePrint = linear_difference.count();

    std::cout << "\nTime of Linear Search: " << differencePrint << " milliseconds\n";


    std::cout << "\n";


    //performs binary search for "aaaaa" and outputs total time to output.
    before_binary_search = std::chrono::high_resolution_clock::now();

    std::cout << "Index of aaaaa: " << binary_search(big_vector, "aaaaa");

    since_binary_search = std::chrono::high_resolution_clock::now();
    binary_difference = std::chrono::duration_cast<std::chrono::milliseconds>(since_binary_search - before_binary_search);
    difference_print = binary_difference.count();

    std::cout << "\nTime of Binary Search: " << difference_print << " milliseconds\n";




    return 0;
}
