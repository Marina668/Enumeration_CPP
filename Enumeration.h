//
// Created by Maryna on 29.11.2021.
//

/*
File Enumeration.h
Realization of class enum structure
Done by Kostiuchenko Maryna (group computer mathematics 2)
Date 05.11.2021
Headers for Enumeration
*/

#ifndef ENUMERATION_CPP_ENUMERATION_H
#define ENUMERATION_CPP_ENUMERATION_H

#include <iostream>
#include <fstream>
#include <string>
#include <fstream>
#include <sstream>
#include <windows.h>
#include <cmath>
#define N 80
using namespace std;


// Console or file

int console_or_file();
void skip_to(ifstream &fptr, const string &str);


//Task 1


//a

enum class DayOfWeek {
    MONDAY = 1,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};


int day_2_int(const string& day);
string int_2_day(DayOfWeek day);

//b

enum class MonthOfYear {
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

int month_2_int(const string& month);
string int_2_month(MonthOfYear month);

//c

enum class SpectrumColor {
    RED = 1,
    ORANGE,
    YELLOW,
    GREEN,
    CYAN,
    BLUE,
    VIOLET
};

int color_2_int(const string& color);
string int_2_color(SpectrumColor color);

//d

enum class ChessPieces {
    KING = 1,
    QUEEN,
    ROOK,
    BISHOP,
    KNIGHT,
    PAWN
};

int piece_2_int(const string& piece);
string int_2_piece(ChessPieces piece);
void task1(const string &filename, const string &filename_out, int is_console);


// Task 2

enum class Types {
    SPADES = 1,
    CLUBS,
    DIAMONDS,
    HEARTS
};

enum class Ranks {
    SEVEN = 1,
    EIGHT,
    NINE,
    TEN,
    JACK,
    QUEEN,
    KING,
    ACE
};

typedef struct {
    enum Ranks rank;
    enum Types type;
} Card;


int input_ranks(const string& rank);
string int_2_rank(Ranks rank);
int input_types(const string& type);
string int_2_type(Types type);
void print_card(Card a);
string beat(Card x, Card y, enum Types z);
void task2(const string &filename, const string &filename_out, int is_console);


// Task 3

enum class UnitOfLength {
    MILLIMETER,
    CENTIMETER,
    DECIMETER,
    METER,
    KILOMETER
};

int input_unit_of_length(const string& unit);
double length_in_meters(double length, enum UnitOfLength unit);
void task3(const string &filename, const string &filename_out, int is_console);


// Task 4

enum class Case {
    DENOMINATIVE,
    GENITIVE,
    DATIVE,
    ACCUSATIVE,
    ABLATIVE,
    LOCAL,
    VOCATIVE
};

int case_2_int(const string& vidminok);
string declaration_of_words(Case vidminok);
void task4(const string &filename, const string &filename_out, int is_console);

// Task 5

enum class Vowels {
    A = 1,
    E,
    I,
    O,
    U,
    Y
};

int input(char vowel);
int syllables(const string& sentence);
void task5(const string &filename, const string &filename_out, int is_console);


// Task 6

enum class Course {
    NORTH,
    EAST,
    SOUTH,
    WEST
};

enum class Order {
    FORWARD,
    BACK,
    LEFT,
    RIGHT
};

enum Course input_course(const string &course);
string int_2_course(Course course);
enum Order input_order(const string &order);
enum Course run_order(Course current_course, Order order);
void task6(const string &filename, const string &filename_out, int is_console);


#endif //ENUMERATION_CPP_ENUMERATION_H
