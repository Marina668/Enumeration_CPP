/* File Enumeration_task.functions.cpp
Realization of input and output functions
Done by Kostiuchenko Maryna (group computer mathematics 2)
Date 08.12.2021
Implementations of input and output functions for task 1-6
*/

#include "Enumeration.h"

void task1(const string &filename, const string &filename_out, int is_console) {
    int number_of_day, number_of_month, number_of_color, number_of_piece;
    string day, month, color, chess_piece;
    char* end;
    char number_temp[256];

    if (is_console) {
        //Input from console

        //Input number of day
        //if enter not type int - try again
        while(true)
        {
            printf("Enter number of day: ");
            cin >> number_temp;
            number_of_day = strtod(number_temp, &end);
            if (strcmp(end, "") != 0)             //If there is an error the value of *end will be nonzero
                cout << "try again" << endl;
            else
                break;
        }

        //Input day
        cout << "Enter day: ";
        cin >> day;

        //Input number of month
        //if enter not type int - try again
        while(true)
        {
            printf("Enter number of month: ");
            cin >> number_temp;
            number_of_month = strtod(number_temp, &end);
            if (strcmp(end, "") != 0)             //If there is an error the value of *end will be nonzero
                cout << "try again" << endl;
            else
                break;
        }

        //Input month
        cout << "Enter month: ";
        cin >> month;

        //Input number of color
        //if enter not type int - try again
        while(true)
        {
            printf("Enter number of color: ");
            cin >> number_temp;
            number_of_color = strtod(number_temp, &end);
            if (strcmp(end, "") != 0)             //If there is an error the value of *end will be nonzero
                cout << "try again" << endl;
            else
                break;
        }

        //Input color
        cout << "Enter color: ";
        cin >> color;

        //Input number of chess piece
        //if enter not type int - try again
        while(true)
        {
            printf("Enter number of chess piece: ");
            cin >> number_temp;
            number_of_piece = strtod(number_temp, &end);
            if (strcmp(end, "") != 0)             //If there is an error the value of *end will be nonzero
                cout << "try again" << endl;
            else
                break;
        }

        //Input chess piece
        cout << "Enter chess piece: ";
        cin >> chess_piece;

    }

    else {
        //Read from file
        string line;
        ifstream finp;
        finp.open(filename);
        if (!finp.is_open())
            exit(1);

        skip_to(finp, "1.");

        getline(finp, line);
        number_of_day = atof(line.c_str());
        getline(finp, day);
        getline(finp, line);
        number_of_month = atof(line.c_str());
        getline(finp, month);
        getline(finp, line);
        number_of_color = atof(line.c_str());
        getline(finp, color);
        getline(finp, line);
        number_of_piece = atof(line.c_str());
        getline(finp, chess_piece);
        finp.close();
    }

    //Print to console
    //Print day and number of day
    cout << "Number " << number_of_day << " corresponds to the day " << int_2_day(static_cast<DayOfWeek>(number_of_day)) << endl;
    cout << "Day " << day << " corresponds to the number " << day_2_int(day) << endl;

    //Print month and number of month
    cout << "Number " << number_of_month << " corresponds to the month " << int_2_month(static_cast<MonthOfYear>(number_of_month)) << endl;
    cout << "Month " << month << " corresponds to the number " << month_2_int(month) << endl;

    //Print color and number of color
    cout << "Number " << number_of_color << " corresponds to the color " << int_2_color(static_cast<SpectrumColor>(number_of_color)) << endl;
    cout << "Color " << color << " corresponds to the number " << color_2_int(color) << endl;

    //Print chess piece and number of chess piece
    cout << "Number " << number_of_piece << " corresponds to the chess piece " << int_2_piece(static_cast<ChessPieces>(number_of_piece)) << endl;
    cout << "Chess piece " << chess_piece << " corresponds to the number " << piece_2_int(chess_piece) << endl;

    //Write to file
    ofstream fout;
    fout.open(filename_out);
    if (!fout.is_open())
        exit(1);
    fout << "1." << endl;
    fout << "Number " << number_of_day << " corresponds to the day " << int_2_day(static_cast<DayOfWeek>(number_of_day)) << endl;
    fout << "Day " << day << " corresponds to the number " << day_2_int(day) << endl;
    fout << "Number " << number_of_month << " corresponds to the month " << int_2_month(static_cast<MonthOfYear>(number_of_month)) << endl;
    fout << "Month " << month << " corresponds to the number " << month_2_int(month) << endl;
    fout << "Number " << number_of_color << " corresponds to the color " << int_2_color(static_cast<SpectrumColor>(number_of_color)) << endl;
    fout << "Color " << color << " corresponds to the number " << color_2_int(color) << endl;
    fout << "Number " << number_of_piece << " corresponds to the chess piece " << int_2_piece(static_cast<ChessPieces>(number_of_piece)) << endl;
    fout << "Chess piece " << chess_piece << " corresponds to the number " << piece_2_int(chess_piece) << endl;
    fout.close();
}


void task2(const string &filename, const string &filename_out, int is_console) {
    Card cards[N];
    string rank, type, trump;

    if (is_console) {
        //Input from console

        //Input two cards
        //@param rank - rank of card
        //@param type - type of card
        for (int i = 0; i < 2; i++) {
            cout << "Enter card: ";
            cin >> rank >> type;
            cards[i].rank = static_cast<Ranks>(input_ranks(rank));
            cards[i].type = static_cast<Types>(input_types(type));
        }

        //Input trump
        cout << "Enter trump: ";
        cin >> trump;

    }

    else {
        //Read from file
        int i = 0;
        string line;
        ifstream finp;
        finp.open(filename);
        if (!finp.is_open())
            exit(1);

        skip_to(finp, "2.");

        while (i != 2) {
            getline(finp, line);
            int z = 0;
            int n_z = line.find(' ', z);
            while (n_z > 0) {
                cards[i].rank = static_cast<Ranks>(input_ranks(line.substr(z, n_z)));
                cards[i].type = static_cast<Types>(input_types(line.substr(n_z + 1, '\n')));
                z = n_z + 1;
                n_z = line.find('\n', z);

            }
            i++;
        }

        getline(finp, trump);
        finp.close();
    }
    //Print to console
    cout <<"Card x: ";
    print_card(cards[0]);
    cout << "Card y: ";
    print_card(cards[1]);
    cout << "Trump: " << trump << endl;
    cout << beat(cards[0], cards[1], static_cast<Types>(input_types(trump))) << endl;

    //Write to file
    ofstream fout;
    fout.open(filename_out);
    if (!fout.is_open())
        exit(1);
    fout << "2." << endl;
    fout << beat(cards[0], cards[1], static_cast<Types>(input_types(trump))) << endl;
    fout.close();
}


void task3(const string &filename, const string &filename_out, int is_console) {
    double length = 0.0;
    string unit;
    char* end;
    char number_temp[256];

    if (is_console) {
        //Input from console

        //Input length
        //if enter not type int - try again
        while(true)
        {
            printf("Enter length: ");
            cin >> number_temp;
            length = strtod(number_temp, &end);
            if (strcmp(end, "") != 0)             //If there is an error the value of *end will be nonzero
                cout << "try again" << endl;
            else
                break;
        }

        //Input unit of length
        cout << "Enter unit of length: ";
        cin >> unit;

    }

    else {
        //Read from file
        string line;
        ifstream finp;
        finp.open(filename);
        if (!finp.is_open())
            exit(1);

        skip_to(finp, "3.");

        getline(finp, line);
        length = atof(line.c_str());
        getline(finp, unit);
        finp.close();
    }

    //Print distance in meters to console
    double distance = length_in_meters(length, static_cast<UnitOfLength>(input_unit_of_length(unit)));
    cout << "Distance in meters: " << distance;

    //Write distance in meters to file
    ofstream fout;
    fout.open(filename_out);
    if (!fout.is_open())
        exit(1);
    fout << "3." << endl;
    fout << "Distance in meters: " << distance << endl;
    fout.close();

}


void task4(const string &filename, const string &filename_out, int is_console) {
    SetConsoleOutputCP(CP_UTF8);
    string vidminok;

    if (is_console) {
        //Input case from console
        cout << "Enter case: ";
        cin >> vidminok;
    }

    else {
        //Read case from file
        ifstream finp;
        finp.open(filename);
        if (!finp.is_open())
            exit(1);

        skip_to(finp, "4.");

        getline(finp, vidminok);

        finp.close();
    }

    //Print declaration of words to console
    cout << "Case " << vidminok << ": " << declaration_of_words(static_cast<Case>(case_2_int(vidminok))) << endl;

    //Write declaration of words to file
    ofstream fout;
    fout.open(filename_out);
    if (!fout.is_open())
        exit(1);
    fout << "4." << endl;
    fout << "Case " << vidminok << ": " << declaration_of_words(static_cast<Case>(case_2_int(vidminok))) << endl;
    fout.close();

}


void task5(const string &filename, const string &filename_out, int is_console) {
    string sentence;

    if (is_console) {
        //Input sentence from comsole
        cout << "Enter sentence: ";
        getline(cin, sentence);

    }
    else {
        //Read sentence from file
        ifstream finp;
        finp.open(filename);
        if (!finp.is_open())
            exit(1);

        skip_to(finp, "5.");

        getline(finp, sentence);

        finp.close();
    }

    //Print number of syllables in a sentence to console
    cout << "Number of syllables in a sentence: " << syllables(sentence) << endl;

    //Write number of syllables in a sentence to file
    ofstream fout;
    fout.open(filename_out);
    if (!fout.is_open())
        exit(1);
    fout << "5." << endl;
    fout << "Number of syllables in a sentence: " << syllables(sentence) << endl;
    fout.close();
}


void task6(const string &filename, const string &filename_out, int is_console) {
    string cur_course, order;
    enum Order orders_arr[N];
    int number_of_orders;

    double x, y, t = 0, distance;
    double speed = 0.0;
    double time[4];

    if (is_console) {
        //Input from console

        //Input current course
        cout <<"Enter current course:";
        cin >> cur_course;

        //Input number of orders in array of orders
        cout <<"Enter number of orders:";
        cin >> number_of_orders;
        //Input orders and add them to array of orders
        for (int i = 0; i < number_of_orders; i++) {
            cout << "Order:";
            cin >> order;
            orders_arr[i] = input_order(order);
        }

        //Input speed
        cout <<"Enter speed:";
        cin >> speed;

        //Input how many time ship go each course and put to array of times
        for (int i = 0; i < 4; i++) {
            cout <<"How many time ship go " << int_2_course(static_cast<Course>(i)) << ": ";
            cin >> t;
            time[i] = t;
        }
    }

    else {
        //Read from file
        ifstream finp;
        finp.open(filename);
        if (!finp.is_open())
            exit(1);

        skip_to(finp, "6.");

        getline(finp, cur_course);
        string line;
        getline(finp, line);
        int z = 0, i = 0;
        int n_z = line.find(' ', z);
        while (n_z > 0) {
            order = line.substr(z, n_z - z);
            orders_arr[i] = input_order(order);
            z = n_z + 1;
            n_z = line.find(' ', z);
            i++;
        }


        getline(finp, line);
        speed = atof(line.c_str());
        getline(finp, line);
        z = 0, i = 0;
        n_z = line.find(' ', z);
        while (n_z > 0) {
            double tm = atof(line.substr(z, n_z-z).c_str());
            time[i] = tm;
            z = n_z + 1;
            n_z = line.find(' ', z);
            i++;
        }

        finp.close();
    }

    enum Course current_course = input_course(cur_course);
    for (int i = 0; i < 5; i++) {
        current_course = run_order(current_course, orders_arr[i]);
    }

    //Print final order to console
    cout << "Final order: " << int_2_course(current_course) << endl;

    //Find final coordinates of the ship
    x = time[static_cast<int>(Course::EAST)] * speed - time[static_cast<int>(Course::WEST)] * speed;
    y = time[static_cast<int>(Course::NORTH)] * speed - time[static_cast<int>(Course::SOUTH)] * speed;
    //Find distance the ship sailed
    distance = sqrt(x * x + y * y);
    //Print distance to console
    cout << "Distance:" << distance << endl;

    //Write Final order and distance to file
    ofstream fout;
    fout.open(filename_out);
    if (!fout.is_open())
        exit(1);
    fout << "6." << endl;
    fout << "Final order: " << int_2_course(current_course) << endl;
    fout << "Distance: " << distance << endl;
    fout.close();
}