/* File Enumeration.h
Realization of enum classes and functions for it (Task 11)
Done by Kostiuchenko Maryna (group computer mathematics 2)
Date 08.12.2021
Headers for enum classes and functions
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


/*
 * Read from console or file
 * return 1 - from console
 * return 0 - from file
*/
int console_or_file();

//In file skip to the place where reading starts (all 6 tasks in one file and its need to read right task)
void skip_to(ifstream &fptr, const string &str);


//Classes and functions for Task 1


//a

//enum class for days
enum class DayOfWeek {
    MONDAY = 1,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

/* Input day
 * @param day - name of the day
 * result - enumerator value of day */
int day_2_int(const string &day);

/* Input enumerator value
 * @param i - enumerator value
 * result - name of day that corresponds to this number */
string int_2_day(DayOfWeek day);

//b

//enum class for months
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

/* Input month
 * @param month - name of the month
 * result - enumerator value of month */
int month_2_int(const string &month);

/* Input enumerator value
 * @param i - enumerator value
 * result - name of month that corresponds to this number */
string int_2_month(MonthOfYear month);

//c

//enum class for colors
enum class SpectrumColor {
    RED = 1,
    ORANGE,
    YELLOW,
    GREEN,
    CYAN,
    BLUE,
    VIOLET
};

/* Input color
 * @param color - name of the color
 * result - enumerator value of color */
int color_2_int(const string &color);

/* Input enumerator value
 * @param i - enumerator value
 * result - name of color that corresponds to this number */
string int_2_color(SpectrumColor color);

//d

//enum class for chess pieces
enum class ChessPieces {
    KING = 1,
    QUEEN,
    ROOK,
    BISHOP,
    KNIGHT,
    PAWN
};

/* Input chess piece
 * @param chess piece - name of the chess piece
 * result - enumerator value of chess piece */
int piece_2_int(const string &piece);

/* Input enumerator value
 * @param i - enumerator value
 * result - name of chess piece that corresponds to this number */
string int_2_piece(ChessPieces piece);

//Function to test task 1
void task1(const string &filename, const string &filename_out, int is_console);


//Classes and functions for Task 2

//enum class for Types of card
enum class Types {
    SPADES = 1,
    CLUBS,
    DIAMONDS,
    HEARTS
};

//enum class for Ranks of card
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

//structure Card
typedef struct {
    enum Ranks rank;
    enum Types type;
} Card;

/*Print card
 * result - rank and type of card*/
void print_card(Card a);

/* Input rank
 * @param rank - rank of card
 * result - int: enumerator value */
int input_ranks(const string &rank);

/* Input enumerator value
 * @param i - enumerator value
 * result - name of rank that corresponds to this number */
string int_2_rank(Ranks rank);

/* Input type
 * @param type - type of card
 * result - int: enumerator value */
int input_types(const string &type);

/* Input enumerator value
 * @param i - enumerator value
 * result - name of type that corresponds to this number */
string int_2_type(Types type);

//Does the first card beat the second card
string beat(Card x, Card y, enum Types z);

//Function to test task 2
void task2(const string &filename, const string &filename_out, int is_console);


//Classes and functions for Task 3

//enum class for Unit Of Length
enum class UnitOfLength {
    MILLIMETER,
    CENTIMETER,
    DECIMETER,
    METER,
    KILOMETER
};

/* Input unit of length
 * @param unit
 * result int: enumerator value */
int input_unit_of_length(const string &unit);

//This length in meters
double length_in_meters(double length, enum UnitOfLength unit);

//Function to test task 3
void task3(const string &filename, const string &filename_out, int is_console);


//Classes and functions for Task 4

//enum class for Case
enum class Case {
    DENOMINATIVE,
    GENITIVE,
    DATIVE,
    ACCUSATIVE,
    ABLATIVE,
    LOCAL,
    VOCATIVE
};

/* Input case
 * @param vidminok - case
 * result - int: enumerator value */
int case_2_int(const string &vidminok);

//Declension of words (програмування, мова, комп'ютер)
string declaration_of_words(Case vidminok);

//Function to test task 4
void task4(const string &filename, const string &filename_out, int is_console);


//Classes and functions for Task 5

//enum class for Vowels
enum class Vowels {
    A = 1,
    E,
    I,
    O,
    U,
    Y
};

/* Input vowel
 * @param vowel - vowel
 * result - int: enumerator value */
int input(char vowel);

//Count syllables in sentence
int syllables(const string &sentence);

//Function to test task 5
void task5(const string &filename, const string &filename_out, int is_console);


//Classes and functions for Task 6

//enum class for Course
enum class Course {
    NORTH,
    EAST,
    SOUTH,
    WEST
};

//enum class for Order
enum class Order {
    FORWARD,
    BACK,
    LEFT,
    RIGHT
};

/*Input course
 * @param course - course
 * result - int: enumerator value */
enum Course input_course(const string &course);

/* Input enumerator value
 * @param course - enumerator value
 * result - name of type that corresponds to this number */
string int_2_course(Course course);

/*Input order
 * @param order - order
 * result - int: enumerator value */
enum Order input_order(const string &order);

//Find final order of the ship
enum Course run_order(Course current_course, Order order);

//Function to test task 6
void task6(const string &filename, const string &filename_out, int is_console);


#endif //ENUMERATION_CPP_ENUMERATION_H
