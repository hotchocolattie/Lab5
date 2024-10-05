<<<<<<< HEAD
#include <iostream>
#include <string>
#include "StringData.h"
#include <chrono>

int linear_search(const std::vector<std::string>& container, const std::string& element){
    for(int i = 0; i < container.size(); i++){
        if(container[i] == element){
            return i;
        }
    }
    return -1;
}
int binary_search(const std::vector<std::string>& container, const std::string& element){
    int high = container.size() - 1;
    int low = 0;
    while (high >= low){
        int mid = (high + low) / 2;
        if(container[mid] < element){
            low = mid + 1;
        }
        else if(container[mid] > element){
            high = mid - 1;
        }
        else{
            return mid;
        }
    }
=======
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

>>>>>>> 52e6e9699ed3e4f965604ea8dc02966421f01284
    return -1;
}

int main() {
<<<<<<< HEAD
    /*
     *std::cout << "Hello, World!" << std::endl;
    const std::vector<std::string> container = getStringData();

    while (true){
        std::cout << "Welcome to Element Search!" << std::endl;
        std::cout << ("--------") << std::endl;
        std::cout << ("0. Exit\n"
            "1. Linear Search\n"
            "2. Binary Search\n");
        int menu_selection;
        std::cout << ("Select a Menu Option") << std::endl;
        std::cin >> menu_selection;
        if (isdigit(menu_selection)){
            if (menu_selection == 0){
                break;
            }
            else if (menu_selection == 1){
                std::string element;
                std::cout << ("Enter what you would like to search for: ") << std::endl;
                std::cin >> element;
                auto start_time = std::chrono::system_clock::now();
                const int element_index = linear_search(container, element);
                auto end_time = std::chrono::system_clock::now();
                std::cout << element <<(" is at index ") << element_index << std::endl;
                std::chrono::duration<double> elapsed_seconds = end_time - start_time;
                std::cout <<("It took ") << elapsed_seconds << (" seconds to run the search\n") << std::endl;

            }
            else if (menu_selection == 2){
                std::string element;
                std::cout << ("Enter what you would like to search for: ") << std::endl;
                std::cin >> element;
                auto start_time = std::chrono::system_clock::now();
                const int element_index = binary_search(container, element);
                auto end_time = std::chrono::system_clock::now();
                std::cout << element <<(" is at index ") << element_index << std::endl;
                std::chrono::duration<double> elapsed_seconds = end_time - start_time;
                std::cout <<("It took ") << elapsed_seconds << (" seconds to run the search\n") << std::endl;
            }
            else{
                std::cout << ("Invalid Selection\n") << std::endl;
            }
        }
        else{
            std::cout << ("Invalid Selection\n") << std::endl;
        }
    }
     */

    const std::vector<std::string> container = getStringData();
    auto test1 = "aaaaa";
    auto test2 = "mzzzz";
    auto test3 = "not_here";

    // test 1 linear
    std::cout << ("Linear search with ") << test1 << std::endl;

    auto start_time = std::chrono::system_clock::now();
    int element_index = linear_search(container, test1);
    auto end_time = std::chrono::system_clock::now();

    std::cout << test1 <<(" is at index ") << element_index << std::endl;
    std::chrono::duration<double> elapsed_seconds = end_time - start_time;
    std::cout <<("It took ") << elapsed_seconds << (" seconds to run the search\n") << std::endl;

    // test 1 binary
    std::cout << ("Binary search with ") << test1 << std::endl;

    start_time = std::chrono::system_clock::now();
    element_index = binary_search(container, test1);
    end_time = std::chrono::system_clock::now();

    std::cout << test1 <<(" is at index ") << element_index << std::endl;
    elapsed_seconds = end_time - start_time;
    std::cout <<("It took ") << elapsed_seconds << (" seconds to run the search\n") << std::endl;

    // test 2 linear
    std::cout << ("Linear search with ") << test2 << std::endl;

    start_time = std::chrono::system_clock::now();
    element_index = linear_search(container, test2);
    end_time = std::chrono::system_clock::now();

    std::cout << test2 <<(" is at index ") << element_index << std::endl;
    elapsed_seconds = end_time - start_time;
    std::cout <<("It took ") << elapsed_seconds << (" seconds to run the search\n") << std::endl;

    // test 2 binary
    std::cout << ("Binary search with ") << test2 << std::endl;

    start_time = std::chrono::system_clock::now();
    element_index = binary_search(container, test2);
    end_time = std::chrono::system_clock::now();

    std::cout << test2 <<(" is at index ") << element_index << std::endl;
    elapsed_seconds = end_time - start_time;
    std::cout <<("It took ") << elapsed_seconds << (" seconds to run the search\n") << std::endl;

    // test 3 linear
    std::cout << ("Linear search with ") << test3 << std::endl;

    start_time = std::chrono::system_clock::now();
    element_index = linear_search(container, test3);
    end_time = std::chrono::system_clock::now();

    std::cout << test2 <<(" is at index ") << element_index << std::endl;
    elapsed_seconds = end_time - start_time;
    std::cout <<("It took ") << elapsed_seconds << (" seconds to run the search\n") << std::endl;

    // test 3 binary
    std::cout << ("Binary search with ") << test3 << std::endl;

    start_time = std::chrono::system_clock::now();
    element_index = binary_search(container, test3);
    end_time = std::chrono::system_clock::now();

    std::cout << test3 <<(" is at index ") << element_index << std::endl;
    elapsed_seconds = end_time - start_time;
    std::cout <<("It took ") << elapsed_seconds << (" seconds to run the search\n") << std::endl;
=======
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


>>>>>>> 52e6e9699ed3e4f965604ea8dc02966421f01284


    return 0;
}
