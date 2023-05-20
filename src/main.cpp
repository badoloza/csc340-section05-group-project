/*********************************************
 *  @file main.cpp
 *  @brief Spring 2023 - CSC340.05 Final Project
 *
 *  This is the final project to make a custom
 *  LinkedList and Node class project for
 *  Spring 2023 - CSC340.05
 *
 *  @author Ashley Ching
 *  @author Charlene Breanne Calderon
 *  @author Eduardo Loza
 *  @author Lennart Richter
 ***********************************************/

#include "LinkedList.hpp"
#include "FunctionTests.hpp"

int main(int argc, const char* argv[]) {
    
    if (argc == 2 && (std::string(argv[1]) == "-t" || std::string(argv[1]) == "--test")) {
        testLinkedList();
    }
    else {
        demo();
    }
    return 0;
}
