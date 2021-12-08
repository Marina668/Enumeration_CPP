/* File Enumeration_functions.cpp
Realization of functions for enum classes
Done by Kostiuchenko Maryna (group computer mathematics 2)
Date 08.12.2021
Implementations of functions
*/


#include "Enumeration.h"


// Console or file

int console_or_file() {
    int console_or_file;
    cout << "Console or file? (console - 1, file - 0) ";
    cin >> console_or_file;
    cin.ignore(1024, '\n');
    if (console_or_file) return 1;
    else return 0;
}


void skip_to(ifstream &fptr, const string &str) {
    string c;
    do{
        getline(fptr, c);
    }
    while (str != c);
}


//Task 1

//a

int day_2_int(const string &day) {
    if (day == "Monday")
        return static_cast<int>(DayOfWeek::MONDAY);
    else if (day == "Tuesday")
        return static_cast<int>(DayOfWeek::TUESDAY);
    else if (day == "Wednesday")
        return static_cast<int>(DayOfWeek::WEDNESDAY);
    else if (day == "Thursday")
        return static_cast<int>(DayOfWeek::THURSDAY);
    else if (day == "Friday")
        return static_cast<int>(DayOfWeek::FRIDAY);
    else if (day == "Saturday")
        return static_cast<int>(DayOfWeek::SATURDAY);
    else if (day == "Sunday")
        return static_cast<int>(DayOfWeek::SUNDAY);
    else return -1;
}

string int_2_day(DayOfWeek day) {
    if (day == static_cast<DayOfWeek>(DayOfWeek::MONDAY))
        return "Monday";
    else if (day == static_cast<DayOfWeek>(DayOfWeek::TUESDAY))
        return "Tuesday";
    else if (day == static_cast<DayOfWeek>(DayOfWeek::WEDNESDAY))
        return "Wednesday";
    else if (day == static_cast<DayOfWeek>(DayOfWeek::THURSDAY))
        return "Thursday";
    else if (day == static_cast<DayOfWeek>(DayOfWeek::FRIDAY))
        return "Friday";
    else if (day == static_cast<DayOfWeek>(DayOfWeek::SATURDAY))
        return "Saturday";
    else if (day == static_cast<DayOfWeek>(DayOfWeek::SUNDAY))
        return "Sunday";
    else return "Incorrect number of day";
}


//b

int month_2_int(const string &month) {
    if (month == "January")
        return static_cast<int>(MonthOfYear::JANUARY);
    else if (month == "February")
        return static_cast<int>(MonthOfYear::FEBRUARY);
    else if (month == "March")
        return static_cast<int>(MonthOfYear::MARCH);
    else if (month == "April")
        return static_cast<int>(MonthOfYear::APRIL);
    else if (month == "May")
        return static_cast<int>(MonthOfYear::MAY);
    else if (month == "June")
        return static_cast<int>(MonthOfYear::JUNE);
    else if (month == "July")
        return static_cast<int>(MonthOfYear::JULY);
    else if (month == "August")
        return static_cast<int>(MonthOfYear::AUGUST);
    else if (month == "September")
        return static_cast<int>(MonthOfYear::SEPTEMBER);
    else if (month == "October")
        return static_cast<int>(MonthOfYear::OCTOBER);
    else if (month == "November")
        return static_cast<int>(MonthOfYear::NOVEMBER);
    else if (month == "December")
        return static_cast<int>(MonthOfYear::DECEMBER);
    else return -1;
}

string int_2_month(MonthOfYear month) {
    if (month == static_cast<MonthOfYear>(MonthOfYear::JANUARY))
        return "January";
    else if (month == static_cast<MonthOfYear>(MonthOfYear::FEBRUARY))
        return "February";
    else if (month == static_cast<MonthOfYear>(MonthOfYear::MARCH))
        return "March";
    else if (month == static_cast<MonthOfYear>(MonthOfYear::APRIL))
        return "April";
    else if (month == static_cast<MonthOfYear>(MonthOfYear::MAY))
        return "May";
    else if (month == static_cast<MonthOfYear>(MonthOfYear::JUNE))
        return "June";
    else if (month == static_cast<MonthOfYear>(MonthOfYear::JULY))
        return "July";
    else if (month == static_cast<MonthOfYear>(MonthOfYear::AUGUST))
        return "August";
    else if (month == static_cast<MonthOfYear>(MonthOfYear::SEPTEMBER))
        return "September";
    else if (month == static_cast<MonthOfYear>(MonthOfYear::OCTOBER))
        return "October";
    else if (month == static_cast<MonthOfYear>(MonthOfYear::NOVEMBER))
        return "November";
    else if (month == static_cast<MonthOfYear>(MonthOfYear::DECEMBER))
        return "December";
    else return "Incorrect number of month";
}

//c

int color_2_int(const string &color) {
    if (color == "Red")
        return static_cast<int>(SpectrumColor::RED);
    else if (color == "Orange")
        return static_cast<int>(SpectrumColor::ORANGE);
    else if (color == "Yellow")
        return static_cast<int>(SpectrumColor::YELLOW);
    else if (color == "Green")
        return static_cast<int>(SpectrumColor::GREEN);
    else if (color == "Cyan")
        return static_cast<int>(SpectrumColor::CYAN);
    else if (color == "Blue")
        return static_cast<int>(SpectrumColor::BLUE);
    else if (color == "Violet")
        return static_cast<int>(SpectrumColor::VIOLET);
    else return -1;
}

string int_2_color(SpectrumColor color) {
    if (color == static_cast<SpectrumColor>(SpectrumColor::RED))
        return "Red";
    else if (color == static_cast<SpectrumColor>(SpectrumColor::ORANGE))
        return "Orange";
    else if (color == static_cast<SpectrumColor>(SpectrumColor::YELLOW))
        return "Yellow";
    else if (color == static_cast<SpectrumColor>(SpectrumColor::GREEN))
        return "Green";
    else if (color == static_cast<SpectrumColor>(SpectrumColor::CYAN))
        return "Cyan";
    else if (color == static_cast<SpectrumColor>(SpectrumColor::BLUE))
        return "Blue";
    else if (color == static_cast<SpectrumColor>(SpectrumColor::VIOLET))
        return "Violet";
    else return "Incorrect number of color";
}

//d

int piece_2_int(const string &piece) {
    if (piece == "King")
        return static_cast<int>(ChessPieces::KING);
    else if (piece == "Queen")
        return static_cast<int>(ChessPieces::QUEEN);
    else if (piece == "Rook")
        return static_cast<int>(ChessPieces::ROOK);
    else if (piece == "Bishop")
        return static_cast<int>(ChessPieces::BISHOP);
    else if (piece == "Knight")
        return static_cast<int>(ChessPieces::KNIGHT);
    else if (piece == "Pawn")
        return static_cast<int>(ChessPieces::PAWN);
    else return -1;
}

string int_2_piece(ChessPieces piece) {
    if (piece == static_cast<ChessPieces>(ChessPieces::KING))
        return "King";
    else if (piece == static_cast<ChessPieces>(ChessPieces::QUEEN))
        return "Queen";
    else if (piece == static_cast<ChessPieces>(ChessPieces::ROOK))
        return "Rook";
    else if (piece == static_cast<ChessPieces>(ChessPieces::BISHOP))
        return "Bishop";
    else if (piece == static_cast<ChessPieces>(ChessPieces::KNIGHT))
        return "Knight";
    else if (piece == static_cast<ChessPieces>(ChessPieces::PAWN))
        return "Pawn";
    else return "Incorrect number of chess piece";
}

//Task 2

int input_ranks(const string &rank) {
    if (rank == "Seven")
        return static_cast<int>(Ranks::SEVEN);
    else if (rank == "Eight")
        return static_cast<int>(Ranks::EIGHT);
    else if (rank == "Nine")
        return static_cast<int>(Ranks::NINE);
    else if (rank == "Ten")
        return static_cast<int>(Ranks::TEN);
    else if (rank == "Jack")
        return static_cast<int>(Ranks::JACK);
    else if (rank == "Queen")
        return static_cast<int>(Ranks::QUEEN);
    else if (rank == "King")
        return static_cast<int>(Ranks::KING);
    else if (rank == "Ace")
        return static_cast<int>(Ranks::ACE);
    else
        return -1;
}

string int_2_rank(Ranks rank) {
    if (rank == static_cast<Ranks>(Ranks::SEVEN))
        return "Seven";
    else if (rank == static_cast<Ranks>(Ranks::EIGHT))
        return "Eight";
    else if (rank == static_cast<Ranks>(Ranks::NINE))
        return "Nine";
    else if (rank == static_cast<Ranks>(Ranks::TEN))
        return "Ten";
    else if (rank == static_cast<Ranks>(Ranks::JACK))
        return "Jack";
    else if (rank == static_cast<Ranks>(Ranks::QUEEN))
        return "Queen";
    else if (rank == static_cast<Ranks>(Ranks::KING))
        return "King";
    else if (rank == static_cast<Ranks>(Ranks::ACE))
        return "Ace";
    else return "Incorrect number of rank";
}

int input_types(const string &type) {
    if (type == "Spades")
        return static_cast<int>(Types::SPADES);
    else if (type == "Clubs")
        return static_cast<int>(Types::CLUBS);
    else if (type == "Diamonds")
        return static_cast<int>(Types::DIAMONDS);
    else if (type == "Hearts")
        return static_cast<int>(Types::HEARTS);
    else
        return -1;
}

string int_2_type(Types type) {
    if (type == static_cast<Types>(Types::SPADES))
        return "Spades";
    else if (type == static_cast<Types>(Types::CLUBS))
        return "Clubs";
    else if (type == static_cast<Types>(Types::DIAMONDS))
        return "Diamonds";
    else if (type == static_cast<Types>(Types::HEARTS))
        return "Hearts";
    else return "Incorrect number of type";
}

void print_card(Card a) {
    cout << int_2_rank(a.rank) << ends << int_2_type(a.type) << endl;
}

string beat(Card x, Card y, enum Types z) {
    if ((x.type == z && y.type != z) || (x.type == y.type && x.rank > y.rank))
        return "x beat y";
    else
        return "x not beat y";
}


// Task 3

int input_unit_of_length(const string &unit) {
    if (unit == "Millimeter")
        return static_cast<int>(UnitOfLength::MILLIMETER);
    else if (unit == "Centimeter")
        return static_cast<int>(UnitOfLength::CENTIMETER);
    else if (unit == "Meter")
        return static_cast<int>(UnitOfLength::METER);
    else if (unit == "Decimeter")
        return static_cast<int>(UnitOfLength::DECIMETER);
    else if (unit == "Kilometer")
        return static_cast<int>(UnitOfLength::KILOMETER);
    else
        return -1;
}

double length_in_meters(double length, UnitOfLength unit) {
    if (unit == static_cast<UnitOfLength>(UnitOfLength::MILLIMETER)) {
        return length / 1000;
    } else if (unit == static_cast<UnitOfLength>(UnitOfLength::CENTIMETER)) {
        return length / 100;
    } else if (unit == static_cast<UnitOfLength>(UnitOfLength::DECIMETER)) {
        return length / 10;
    } else if (unit == static_cast<UnitOfLength>(UnitOfLength::METER)) {
        return length;
    } else if (unit == static_cast<UnitOfLength>(UnitOfLength::KILOMETER)) {
        return length * 1000;
    }
    else return 0;
}


// Task 4

int case_2_int(const string &vidminok) {
    if (vidminok == "Denominative")
        return static_cast<int>(Case::DENOMINATIVE);
    else if (vidminok == "Genitive")
        return static_cast<int>(Case::GENITIVE);
    else if (vidminok == "Dative")
        return static_cast<int>(Case::DATIVE);
    else if (vidminok == "Accusative")
        return static_cast<int>(Case::ACCUSATIVE);
    else if (vidminok == "Ablative")
        return static_cast<int>(Case::ABLATIVE);
    else if (vidminok == "Local")
        return static_cast<int>(Case::LOCAL);
    else if (vidminok == "Vocative")
        return static_cast<int>(Case::VOCATIVE);
    else
        return -1;
}


string declaration_of_words(Case vidminok) {
    if (vidminok == static_cast<Case>(Case::DENOMINATIVE))
        return "програмування, мова, комп'ютер";
    else if (vidminok == static_cast<Case>(Case::GENITIVE))
        return "програмування, мови, комп'ютера";
    else if (vidminok == static_cast<Case>(Case::DATIVE))
        return "програмуванню, мові, комп'ютерові/комп'ютеру";
    else if (vidminok == static_cast<Case>(Case::ACCUSATIVE))
        return "програмування, мову, комп'ютер";
    else if (vidminok == static_cast<Case>(Case::ABLATIVE))
        return "програмуванням, мовою, комп'ютером";
    else if (vidminok == static_cast<Case>(Case::LOCAL))
        return "на/у програмуванні, мові, комп'ютері";
    else if (vidminok == static_cast<Case>(Case::VOCATIVE))
        return "програмування, мово, комп'ютере";
    else return "Incorrect number of case";
}


// Task 5

int input(char vowel) {
    if (vowel == 'a')
        return static_cast<int>(Vowels::A);
    else if (vowel == 'e')
        return static_cast<int>(Vowels::E);
    else if (vowel == 'i')
        return static_cast<int>(Vowels::I);
    else if (vowel == 'o')
        return static_cast<int>(Vowels::O);
    else if (vowel == 'u')
        return static_cast<int>(Vowels::U);
    else if (vowel == 'y')
        return static_cast<int>(Vowels::Y);
    else return 0;
}


int syllables(const string &sentence) {
    int count = 0;
    for (char j: sentence) {
        if (input(j))
            count++;
    }
    return count;
}


// Task 6

enum Course input_course(const string &course) {
    if (course == "North")
        return static_cast<Course>(static_cast<int>(Course::NORTH));
    else if (course == "East")
        return static_cast<Course>(static_cast<int>(Course::EAST));
    else if (course == "South")
        return static_cast<Course>(static_cast<int>(Course::SOUTH));
    else if (course == "West")
        return static_cast<Course>(static_cast<int>(Course::WEST));
    else return static_cast<Course>(-1);
}

string int_2_course(Course course) {
    if (course == static_cast<Course>(Course::NORTH))
        return "North";
    else if (course == static_cast<Course>(Course::EAST))
        return "East";
    else if (course == static_cast<Course>(Course::SOUTH))
        return "South";
    else if (course == static_cast<Course>(Course::WEST))
        return "West";
    else return "Incorrect order";
}

enum Order input_order(const string &order) {
    if (order == "Forward")
        return static_cast<Order>(static_cast<int>(Order::FORWARD));
    else if (order == "Back")
        return static_cast<Order>(static_cast<int>(Order::BACK));
    else if (order == "Right")
        return static_cast<Order>(static_cast<int>(Order::RIGHT));
    else if (order == "Left")
        return static_cast<Order>(static_cast<int>(Order::LEFT));
    else return static_cast<Order>(-1);
}

enum Course run_order(Course current_course, Order order) {
    if (order == static_cast<Order>(Order::LEFT)) {
        if (current_course == static_cast<Course>(Course::NORTH))
            return static_cast<Course>(Course::WEST);
        else return static_cast<Course>(static_cast<int>(current_course) - 1);
    } else if (order == static_cast<Order>(Order::RIGHT)) {
        if (current_course == static_cast<Course>(Course::WEST))
            return static_cast<Course>(Course::NORTH);
        else return static_cast<Course>(static_cast<int>(current_course) + 1);
    } else return current_course;
}