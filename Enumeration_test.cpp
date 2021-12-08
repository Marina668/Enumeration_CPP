/* File Enumeration_test.cpp
Realization of tests for enum classes functions
Done by Kostiuchenko Maryna (group computer mathematics 2)
Date 08.12.2021*/

#include "Enumeration.h"

using namespace std;



int main() {
    ifstream finp;
    ofstream fout;
    string filename = "enumeration_input.txt";
    string filename_out = "enumeration_output.txt";

    int number_of_task = 0;
    cout << "Enter task to test (1-6):";
    cin >> number_of_task;
    cin.ignore(1024, '\n');
    int is_console = console_or_file();


    //Task 1

    if (number_of_task == 1) {
        task1(filename, filename_out, is_console);
    }


    //Task 2

    else if (number_of_task == 2) {
        task2(filename, filename_out, is_console);
    }


    //Task 3

    else if (number_of_task == 3) {
        task3(filename, filename_out, is_console);
    }


    // Task 4

    else if (number_of_task == 4) {
        task4(filename, filename_out, is_console);
    }


    // Task 5

    else if (number_of_task == 5) {
        task5(filename, filename_out, is_console);
    }


    // Task 6

    else if (number_of_task == 6) {
        task6(filename, filename_out, is_console);
    }

    return 0;
}





