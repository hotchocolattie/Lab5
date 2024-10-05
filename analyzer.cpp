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
    return -1;
}

int main() {
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


    return 0;
}
