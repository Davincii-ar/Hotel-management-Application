#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
int total = 500;
int g_tot = 0;
int  r_no[15] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
int room;
int tot[15] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
int  r_charge[15];
char r_type[5][7];
char r_cust[15][20] = { "TEST","N.A","N.A","N.A","N.A","N.A","N.A","N.A","N.A","N.A","N.A","N.A","N.A","N.A","N.A" };
char c_city[5][20];
char name[30];
int  c_mem[15];
char c_nat[15][20];
char r_avail[5];
int  r_per[5];
int  no[5];
int year[5];
int month[5];
int day[5];
int i ;
void welcome();
void headerfile();
void check_availability();
void putavail();
void features();
void allocate();
void putcust();
void cancel();
void restaurant();
void deallocate();
void Taxi();
void salles();
void parking();
void Airplanes();
//The code below will display the main menu and all his features
int main()
{
    int ch;
    char ans;
    welcome();
    headerfile();
    do
    {
        cout << " *** Welcome to the HAMZA AR Hotel Main Menu ***  " << endl;
        cout << "1. check whether room is available or not " << endl;
        cout << "2. Features of room " << endl;
        cout << "3. Check In" << endl;
        cout << "4. Show customer details " << endl;
        cout << "5. Restuarant " << endl;
        cout << "6. Cancellation" << endl;
        cout << "7. Check out" << endl;
        cout << "8. Exit" << endl;
        cout << "9. Taxi" << endl;
        cout << "10.salles" << endl;
        cout << "11.parking" << endl;
        cout << "12.Airplanes" << endl;
        cin >> ch;
        switch (ch)
        {
            case 1:
                cout << "welcome to check either room is available or not:" << endl;
                check_availability();
                putavail();
                break;

            case 2:
                features();
                break;
            case 3:
                allocate();
                break;
            case 4:
                putcust();
                break;
            case 5:
                restaurant();
                break;
            case 6:
                cancel();
                break;
            case 7:
                deallocate();
                break;
            case 9:
                Taxi();
                break;
            case 10:
                salles();
                break;
            case 11:
                parking();
                break;
            case 12:
                Airplanes();
                break;
            case 8:
                exit(0);
            default:
                cout << "\n\n\nWrong choice!!!!\n\nPlease choose 1-6";
        }
        cout << "\n\n- Do you want to continue (Y/N):";
        cin >> ans;
    } while (ans == 'y' || ans == 'Y');
}
//The code below will print the HAMZA AR hotel application interface
void welcome()
{
    cout << "\n\n .*.*.*.........*.    WELCOME TO    .*........*.*.*.";;
    cout << "\n.*.*.*.........*.   HAMZA AR HOTEL  .*........*.*.*.";;
    cout << "\n666 Rue Sherbrooke O, Montreal, QC H3A 1G1, Canada";
    cout << "\nOur Hotel Phone number:+1 0 00 00 00 00";
}
//The code below will will print hotel name logo
void headerfile()
{
    std::cout << R"(
 .----------------.  .----------------.  .----------------.  .----------------.  .----------------.   .----------------.  .----------------. 
| .--------------. || .--------------. || .--------------. || .--------------. || .--------------. | | .--------------. || .--------------. |
| |  ____  ____  | || |      __      | || | ____    ____ | || |   ________   | || |      __      | | | |      __      | || |  _______     | |
| | |_   ||   _| | || |     /  \     | || ||_   \  /   _|| || |  |  __   _|  | || |     /  \     | | | |     /  \     | || | |_   __ \    | |
| |   | |__| |   | || |    / /\ \    | || |  |   \/   |  | || |  |_/  / /    | || |    / /\ \    | | | |    / /\ \    | || |   | |__) |   | |
| |   |  __  |   | || |   / ____ \   | || |  | |\  /| |  | || |     .'.' _   | || |   / ____ \   | | | |   / ____ \   | || |   |  __ /    | |
| |  _| |  | |_  | || | _/ /    \ \_ | || | _| |_\/_| |_ | || |   _/ /__/ |  | || | _/ /    \ \_ | | | | _/ /    \ \_ | || |  _| |  \ \_  | |
| | |____||____| | || ||____|  |____|| || ||_____||_____|| || |  |________|  | || ||____|  |____|| | | ||____|  |____|| || | |____| |___| | |
| |              | || |              | || |              | || |              | || |              | | | |              | || |              | |
| '--------------' || '--------------' || '--------------' || '--------------' || '--------------' | | '--------------' || '--------------' |
 '----------------'  '----------------'  '----------------'  '----------------'  '----------------'   '----------------'  '----------------' 
)" << '\n';
}
//The code below will display check in availability with all reservation features
void check_availability()
{
    for (int i = 0; i < 15; i++)
    {
        if (r_no[i] == 1)
        {
            strcpy_s(r_type[i], "Singl");
            r_charge[i] = 500;
            if (strcmp(r_cust[i], "N.A") == 0)
            {
                r_avail[i] = 'Y';
                r_per[i] = 0;

            }

        }
        else if (r_no[i] == 2)
        {
            strcpy_s(r_type[i], "Singl");
            r_charge[i] = 500;
            if (strcmp(r_cust[i], "N.A") == 0)
            {
                r_avail[i] = 'Y';
                r_per[i] = 0;

            }

        }

        else if (r_no[i] == 3)
        {
            strcpy_s(r_type[i], "Singl");
            r_charge[i] = 500;
            if (strcmp(r_cust[i], "N.A") == 0)
            {
                r_avail[i] = 'Y';
                r_per[i] = 0;
            }
        }

        else if (r_no[i] == 4)
        {
            strcpy_s(r_type[i], "Coupl");
            r_charge[i] = 1000;
            if (strcmp(r_cust[i], "N.A") == 0)
            {
                r_avail[i] = 'Y';
                r_per[i] = 0;
            }
        }
        else if (r_no[i] == 5)
        {
            strcpy_s(r_type[i], "Coupl");
            r_charge[i] = 1000;
            if (strcmp(r_cust[i], "N.A") == 0)
            {
                r_avail[i] = 'Y';
                r_per[i] = 0;
            }
        }
        else if (r_no[i] == 6)
        {
            strcpy_s(r_type[i], "Coupl");
            r_charge[i] = 1000;
            if (strcmp(r_cust[i], "N.A") == 0)
            {
                r_avail[i] = 'Y';
                r_per[i] = 0;
            }
        }
        else if (r_no[i] == 7)
        {
            strcpy_s(r_type[i], "tree");
            r_charge[i] = 1200;
            if (strcmp(r_cust[i], "N.A") == 0)
            {
                r_avail[i] = 'Y';
                r_per[i] = 0;
            }

        }else if (r_no[i] == 8)
        {
            strcpy_s(r_type[i], "tree");
            r_charge[i] = 1200;
            if (strcmp(r_cust[i], "N.A") == 0)
            {
                r_avail[i] = 'Y';
                r_per[i] = 0;
            }
        }
        else if (r_no[i] == 9)
        {
            strcpy_s(r_type[i], "tree");
            r_charge[i] = 1200;
            if (strcmp(r_cust[i], "N.A") == 0)
            {
                r_avail[i] = 'Y';
                r_per[i] = 0;
            }
        }
        else if (r_no[i] == 10)
        {
            strcpy_s(r_type[i], "family");
            r_charge[i] = 1500;
            if (strcmp(r_cust[i], "N.A") == 0)
            {
                r_avail[i] = 'Y';
                r_per[i] = 0;
            }
        }else if (r_no[i] == 11)
        {
            strcpy_s(r_type[i], "family");
            r_charge[i] = 1500;
            if (strcmp(r_cust[i], "N.A") == 0)
            {
                r_avail[i] = 'Y';
                r_per[i] = 0;
            }
        }
        else if (r_no[i] == 12)
        {
            strcpy_s(r_type[i], "family");
            r_charge[i] = 1500;
            if (strcmp(r_cust[i], "N.A") == 0)
            {
                r_avail[i] = 'Y';
                r_per[i] = 0;
            }

        }else if (r_no[i] == 13)
        {
            strcpy_s(r_type[i], "two fa");
            r_charge[i] = 2000;
            if (strcmp(r_cust[i], "N.A") == 0)
            {
                r_avail[i] = 'Y';
                r_per[i] = 0;
            }
        }
        else if (r_no[i] == 14)
        {
            strcpy_s(r_type[i], "Two fa");
            r_charge[i] = 2000;
            if (strcmp(r_cust[i], "N.A") == 0)
            {
                r_avail[i] = 'Y';
                r_per[i] = 0;
            }
        }
        else if (r_no[i] == 15)
        {
            strcpy_s(r_type[i], "Two fa");
            r_charge[i] = 2000;
            if (strcmp(r_cust[i], "N.A") == 0)
            {
                r_avail[i] = 'Y';
                r_per[i] = 0;
            }
        }


    }
}
//The code below will show the whether room is available or not and some information about the reservations
void putavail()
{
    cout << "\n                          ROOM AVAILABILITY";
    cout << "\n                         -------------------";
    cout << "\nRoom No| Type | Charge | Availability | Cust_Name | Period |" << endl;
    for (i = 0; i < 15; i++)
    {


        if (i == 0)
        {
            cout << "\n************************* singl *************************""\t";
            cout << "\n";
            cout << r_no[i];
            cout << "\t";
            cout << r_type[i];
            cout << "\t";
            cout << r_charge[i];

        }
        if (i == 1)
        {
            cout << r_no[i];
            cout << "\t";
            cout << r_type[i];
            cout << "\t";
            cout << r_charge[i];

        }
        if (i == 2)
        {
            cout << r_no[i];
            cout << "\t";
            cout << r_type[i];
            cout << "\t";
            cout << r_charge[i];

        }
        if (i == 3)
        {
            cout << "\n************************ couple *************************""\t";
            cout << "\n";
            cout << r_no[i];
            cout << "\t";
            cout << r_type[i];
            cout << "\t";

            cout << r_charge[i];


        }


        if (i == 4)
        {
            cout << r_no[i];
            cout << "\t";
            cout << r_type[i];
            cout << "\t";

            cout << r_charge[i];


        }
        if (i == 5)
        {
            cout << r_no[i];
            cout << "\t";
            cout << r_type[i];
            cout << "\t";

            cout << r_charge[i];


        }

        if (i == 6)
        {
            cout << "\n************************* tree **************************""\t";
            cout << "\n";
            cout << r_no[i];
            cout << "\t";
            cout << r_type[i];
            cout << "\t";

            cout << r_charge[i];


        }

        if (i == 7)
        {
            cout << r_no[i];
            cout << "\t";
            cout << r_type[i];
            cout << "\t";

            cout << r_charge[i];


        }
        if (i == 8)
        {
            cout << r_no[i];
            cout << "\t";
            cout << r_type[i];
            cout << "\t";

            cout << r_charge[i];


        }

        if (i == 9)
        {
            cout << "\n************************ family *************************""\t";
            cout << "\n";
            cout << r_no[i];
            cout << "\t";
            cout << r_type[i];
            cout << "\t";

            cout << r_charge[i];


        }
        if (i == 10)
        {
            cout << r_no[i];
            cout << "\t";
            cout << r_type[i];
            cout << "\t";

            cout << r_charge[i];


        }
        if (i == 11)
        {
            cout << r_no[i];
            cout << "\t";
            cout << r_type[i];
            cout << "\t";

            cout << r_charge[i];


        }

        if (i == 12)
        {
            cout << "\n********************** two family ***********************""\t";
            cout << "\n";
            cout << r_no[i];
            cout << "\t";
            cout << r_type[i];
            cout << "\t";

            cout << r_charge[i];


        }

        if (i == 13)
        {
            cout << r_no[i];
            cout << "\t";
            cout << r_type[i];
            cout << "\t";

            cout << r_charge[i];


        }
        if (i == 14)
        {
            cout << r_no[i];
            cout << "\t";
            cout << r_type[i];
            cout << "\t";

            cout << r_charge[i];


        }


        if ((i == 1) || (i == 2))
        {


            cout << "	   " << r_avail[i] << "\t\t" << r_cust[i] << "\t\t" << r_per[i];
            cout << endl;

        }
        else if ((i == 3) || (i == 4))
        {

            cout << "	   " << r_avail[i] << "\t\t" << r_cust[i] << "\t\t" << r_per[i];
            cout << endl;
        }

        else if ((i == 5) || (i == 6))
        {

            cout << "	   " << r_avail[i] << "\t\t" << r_cust[i] << "\t\t" << r_per[i];
            cout << endl;
        }

        else if ((i == 7) || (i == 8))
        {

            cout << "	   " << r_avail[i] << "\t\t" << r_cust[i] << "\t\t" << r_per[i];
            cout << endl;
        }
        else if ((i == 9) || (i == 10))
        {

            cout << "	   " << r_avail[i] << "\t\t" << r_cust[i] << "\t\t" << r_per[i];
            cout << endl;
        }
        else if ((i == 11) || (i == 12))
        {

            cout << "	   " << r_avail[i] << "\t\t" << r_cust[i] << "\t\t" << r_per[i];
            cout << endl;
        }
        else if ((i == 13) || (i == 14))
        {

            cout << "	   " << r_avail[i] << "\t\t" << r_cust[i] << "\t\t" << r_per[i];
            cout << endl;
        }
        else if ((i == 15) || (i == 16) || (i == 17))
        {

            cout << "	   " << r_avail[i] << "\t\t" << r_cust[i] << "\t\t" << r_per[i];
            cout << endl;
        }


        else
        {

            cout << "	   " << r_avail[i] << "\t\t" << r_cust[i] << "\t\t" << r_per[i];
            cout << endl;
        }

    }
}
//The code below will show all the rooms with all there informations and features.
void features()
{
    int typ;
    cout << "\nChoose the room type:\n1. Single costumer\n2. Couple";
    cout << "\n3. Tree costumers\n4. Family\n5. Two Family\n";
    cin >> typ;
    if (typ > 5)
    {
        cout << "\nWrong choice!! Choose a number between 1-5:";
        features();
    }
    switch (typ)
    {
        case 1:
            cout << "\n Room number            >>>1";
            cout << "\n Advance                >>>150\n\n";
            cout << "\n                      FEATURES OF THIS ROOM                       ";
            cout << "\n------------------------------------------------------------------";
            cout << "\n\n Room Type            >>> Single costumer";
            cout << "\n\n Room charges         >>> 500USD per day";
            cout << "\n\n 1. Bed               >>>      2";
            cout << "\n\n 2.Capacity           >>>      5";
            cout << "\n\n 3.Balcony available     ";
            cout << "\n------------------------------------------------------------------";
            cout << "\n                     ADDITIONAL FEATURES                        ";
            cout << "\n------------------------------------------------------------------";
            cout << "\n\n 1.A/C  available ";
            cout << "\n\n 2.Geyser available";
            cout << "\n\n 3.TV available      ";
            cout << "\n------------------------------------------------------------------";
            cout << "\n NOTE :- Extra bed will cost 50USD per bed ";
            break;
        case 2:
            cout << "\n Room number            >>>2\n\n";
            cout << "\n Advance                >>>500\n\n";
            cout << "\n                      FEATURES OF THIS ROOM                       ";
            cout << "\n-------------------------------------------------------------------";
            cout << "\n\n Room Type            >>> Couple";
            cout << "\n\n Room charges         >>> 1000USD per day";
            cout << "\n\n 1. Bed               >>>      2";
            cout << "\n\n 2.Capacity           >>>      5";
            cout << "\n-------------------------------------------------------------------";
            cout << "\n                    ADDITIONAL FEATURES                        ";
            cout << "\n-------------------------------------------------------------------";
            cout << "\n\n 1.A/C available   ";
            cout << "\n\n 2.Geyser available";
            cout << "\n\n 3.TV available      ";
            cout << "\n-------------------------------------------------------------------";
            cout << "\n NOTE :- Extra bed will cost 50USD per bed ";
            break;
        case 3:
            cout << "\n Room number            >>>3\n\n";
            cout << "\n Advance                >>>500\n\n";
            cout << "\n                      FEATURES OF THIS ROOM                       ";
            cout << "\n-------------------------------------------------------------------";
            cout << "\n\n Room Type            >>> Tree costumers";
            cout << "\n\n Room charges         >>> 1200USD per day";
            cout << "\n\n 1. Bed               >>>      2";
            cout << "\n\n 2.Capacity           >>>      5";
            cout << "\n-------------------------------------------------------------------";
            cout << "\n                    ADDITIONAL FEATURES                        ";
            cout << "\n-------------------------------------------------------------------";
            cout << "\n\n 1.Geyser available      ";
            cout << "\n-------------------------------------------------------------------";
            cout << "\n NOTE :- Extra bed will cost 50USD per bed ";
            break;
        case 4:
            cout << "\n Room number            >>>4\n\n";
            cout << "\n Advance                >>>500\n\n";
            cout << "\n                      FEATURES OF THIS ROOM                       ";
            cout << "\n-------------------------------------------------------------------";
            cout << "\n\n Room Type            >>> Family";
            cout << "\n\n Room charges         >>> 1500USD per day";
            cout << "\n\n 1. Bed               >>>      1";
            cout << "\n\n 2.Capacity           >>>      2";
            cout << "\n-------------------------------------------------------------------";
            cout << "\n                    ADDITIONAL FEATURES                        ";
            cout << "\n-------------------------------------------------------------------";
            cout << "\n\n 1.Geyser available";
            cout << "\n\n 2.TV available      ";
            cout << "\n-------------------------------------------------------------------";
            cout << "\n NOTE :- Extra bed will cost 50USD per bed ";
            break;
        case 5:
            cout << "\n Room number            >>>5\n\n";
            cout << "\n Advance                >>>750\n\n";
            cout << "\n                      FEATURES OF THIS ROOM                       ";
            cout << "\n-------------------------------------------------------------------";
            cout << "\n\n Room Type            >>> TWO Family";
            cout << "\n\n Room charges         >>> 2000USD per day";
            cout << "\n\n 1. Bed               >>>      1";
            cout << "\n\n 2.Capacity           >>>      2";
            cout << "\n-------------------------------------------------------------------";
            cout << "\n                    ADDITIONAL FEATURES                        ";
            cout << "\n-------------------------------------------------------------------";
            cout << "\n\n 1.A/C available   ";
            cout << "\n\n 2.Geyser available";
            cout << "\n\n 3.TV available      ";
            cout << "\n-------------------------------------------------------------------";
            cout << "\n NOTE :- Extra bed will cost 50USD per bed ";
            break;
    }
}
//The code below will show all the Taxi cars with all there informations and features.
void Taxi()
{
    int typ;
    cout << "\nChoose the car type:\n1. standard model\n2. premium model";
    cout << "\n3. luxury model\n";
    cin >> typ;
    if (typ > 3)
    {
        cout << "\nWrong choice!! Choose a number between 1-3:";
        Taxi();
    }
    switch (typ)
    {
        case 1:
            cout << "\n *** standard model *** ";
            cout << "\n                      FEATURES OF THIS CAR                       ";
            cout << "\n------------------------------------------------------------------";
            cout << "\n\n CAR Type            >>> RAUNAULT CLIO";
            cout << "\n\n CAR charges         >>> 35 USD per day";
            cout << "\n------------------------------------------------------------------";
            cout << "\n                     ADDITIONAL FEATURES                        ";
            cout << "\n------------------------------------------------------------------";
            cout << "\n\n 1. NOT available ";
            cout << "\n------------------------------------------------------------------";
            cout << "\n NOTE :- Extra DRINKS will cost 10USD per DRINK ";
            break;
        case 2:
            cout << "\n *** premium model *** ";
            cout << "\n                      FEATURES OF THIS CAR                       ";
            cout << "\n------------------------------------------------------------------";
            cout << "\n\n CAR Type            >>> MERCEDES CLASS A";
            cout << "\n\n CAR charges         >>> 75 USD per day";
            cout << "\n------------------------------------------------------------------";
            cout << "\n                    ADDITIONAL FEATURES                        ";
            cout << "\n-------------------------------------------------------------------";
            cout << "\n\n 3.TV available      ";
            cout << "\n-------------------------------------------------------------------";
            cout << "\n NOTE :- Extra DRINKS will cost 20USD per DRINK ";
            break;
        case 3:
            cout << "\n *** luxury model *** ";
            cout << "\n                      FEATURES OF THIS CAR                       ";
            cout << "\n------------------------------------------------------------------";
            cout << "\n\n CAR Type            >>> Rolls-Royce";
            cout << "\n\n CAR charges         >>> 150 USD per day";
            cout << "\n------------------------------------------------------------------";
            cout << "\n                    ADDITIONAL FEATURES                        ";
            cout << "\n-------------------------------------------------------------------";
            cout << "\n\n 1.TV available      ";
            cout << "\n\n 1.Air conditioner     ";
            cout << "\n-------------------------------------------------------------------";
            cout << "\n NOTE :- Extra DRINKS will cost 70USD  per DRINK ";
            break;

    }
}
//The code below will show all the salles with all there informations and features.
void salles()
{
    int typ;
    cout << "\nChoose the salles type:\n1. salles for fintness\n2. salles for yoga \n";
    cin >> typ;
    if (typ > 2)
    {
        cout << "\nWrong choice!! Choose a number between 1-2:";
        salles();
    }
    switch (typ)
    {
        case 1:
            cout << "\n *** salles pour fitness *** ";
            cout << "\n                     ADDITIONAL FEATURES                        ";
            cout << "\n------------------------------------------------------------------";
            cout << "\n\n coach ";
            cout << "\n\n water machines ";
            cout << "\n------------------------------------------------------------------";
            break;
        case 2:
            cout << "\n *** salles pour yoga *** ";
            cout << "\n                     ADDITIONAL FEATURES                        ";
            cout << "\n------------------------------------------------------------------";
            cout << "\n\n coach ";
            cout << "\n\n water machines ";
            cout << "\n\n private pool ";
            cout << "\n------------------------------------------------------------------";
            break;
    }
}
//The code below will show all the parkings with all there informations and features.
void parking()
{
    int typ;
    cout << "\nChoose the parking type:\n1. First floor\n2. Second floor\n";
    cin >> typ;
    if (typ > 2)
    {
        cout << "\nWrong choice!! Choose a number between 1-2:";
        parking();
    }
    switch (typ)
    {
        case 1:
            cout << "\n *** First floor *** ";
            cout << "\n                     ADDITIONAL FEATURES                        ";
            cout << "\n------------------------------------------------------------------";
            cout << "\n\n Alarme ";
            cout << "\n\n security cameras ";
            cout << "\n------------------------------------------------------------------";
            break;
        case 2:
            cout << "\n *** salles pour yoga *** ";
            cout << "\n                     ADDITIONAL FEATURES                        ";
            cout << "\n------------------------------------------------------------------";
            cout << "\n\n Alarme ";
            cout << "\n\n security cameras ";
            cout << "\n------------------------------------------------------------------";
            break;
    }
}
//The code below make the login information to check in in the HAMZA AR hotel.
void allocate()
{

    check_availability();
    putavail();
    cout << "\n Enter the room number in which you want to stay:";
    cin >> room;
    if (r_avail[room - 1] == 'Y')
    {

        cout << "\n Enter Name of customer living :";
        cin >> r_cust[room - 1];
        cout << "\n Enter city name :";
        cin >> c_city[room - 1];
        cout << "\n Enter nationality :";
        cin >> c_nat[room - 1];
        cout << "\n For how many days cust want the room :";
        cin >> r_per[room - 1];
        cout << "\n Enter no. of member in your group :";
        cin >> c_mem[room - 1];
        if ((room == 1) || (room == 2) || (room == 3))
            if ((c_mem[room - 1] < 1) || (c_mem[room - 1] > 5))
            {
                cout << "\n members cannot be allocated this room.Allowed members are between 1-5.", c_mem[room - 1];
                system("pause");
                allocate();
            }
        if ((room == 4) || (room == 5))
            if ((c_mem[room - 1] < 1) || (c_mem[room - 1] > 2))
            {
                cout << c_mem[room - 1] << "  members cannot be allocated this room.Allowed members are between 1-2.", c_mem[room - 1];
                system("pause");
                allocate();
            }
        cout << "\n Enter the date of arrival :";
        cout << "\n------------------------------";
        cout << "\n Year : ";
        cin >> year[room - 1];
        cout << "\n Month :";
        cin >> month[room - 1];
        cout << "\n Day :";
        cin >> day[room - 1];
        if ((year[room - 1] > 9999) || (month[room - 1] > 12) || (month[room - 1] < 1) || (day[room - 1] < 1) || (((month[room - 1] == 1) || (month[room - 1] == 3) || (month[room - 1] == 5) || (month[room - 1] == 7) || (month[room - 1] == 8) || (month[room - 1] == 10) || (month[room - 1] == 12)) && (day[room - 1] > 31)) || (((month[room - 1] == 4) || (month[room - 1] == 6) || (month[room - 1] == 9) || (month[room - 1] == 11)) && (day[room - 1] > 30)) || ((month[room - 1] == 2) && ((year[room - 1] % 400 == 0) || ((year[room - 1] % 4 == 0) && (year[room - 1] % 100 != 0))) && (day[room - 1] > 29)) || ((month[room - 1] == 2) && (year[room - 1] % 4 != 0) && (day[room - 1] > 28)))
        {
            cout << "\n\n!!!!!INVALID DATE........";
            system("pause");
            allocate();
        }
        else
        {
            cout << "\n... Room is allocated to " << endl;
            cout << "Name:  " << r_cust[room - 1] << endl;
            cout << "room " << room << " is alloted to " << c_mem[room - 1] << " members";
            r_avail[room - 1] = 'N';
            system("pause");
        }
    }
    else
    {
        cout << "\n ERROR : Room cannot be allocated ...";
        cout << "\n Room is not available...";
        system("pause");
    }
}
//The code below will show all the costumers details with all there informations and features.
void putcust()
{
    int j;
    cout << "\nEnter the room number :";
    cin >> room;
    j = strcmp(r_cust[room - 1], "N.A");
    if (j == 0)
    {
        printf("\n Data not available ");
        system("pause");
    }
    else
    {
        cout << "\n Room No        :"<< r_no[room - 1];
        cout << "\n Customer Name  :";
        cout << r_cust[room - 1];
        cout << "\n Period         :"<< r_per[room - 1];
        cout << "\n City           :";
        cout << c_city[room - 1];
        cout << "\n Nationality    :";
        cout << c_nat[room - 1];
        cout << "\n No of member   :"<< c_mem[room - 1];
        cout << "\n Arrival Date   :"<<day[room - 1], month[room - 1], year[room - 1];
        system("pause");
    }
}
//The code below show menu restaurant which is responsible for the all costumers restaurant requests and meals informations and details.
void restaurant()
{
    int count = 0, z = 0, fc[113], answ;
    char ans;
    int price[113] = { 245,245,245,245,240,240,240,240,235,235,250,235,235,220,
                       215,230,215,240,250,250,250,250,250,250,250,255,245,245,245,245,250,240,
                       240,360,290,360,290,370,295,360,290,360,290,250,360,290,360,290,250,370,
                       290,360,290,250,250,280,245,290,235,265,240,290,300,256,240,265,270,255,
                       255,240,240,235,220,25,30,25,30,35,35,25,30,35,25,35,25,25,30,100,105,105,
                       100,105,100,105,125,105,105,100,105,110,115,100,100,100,105,105,105,105,
                       125,105,120,120,100 };
    char food[113][30] = { "SHAHI PANEER","KADAI PANEER","CHEESE KORMA",
                           "MALAI KOFTA","MATAR PANEER","PALAK PANEER","MIX VEG.","ALOO GOBI",
                           "ALOO JEERA","CHANA MASALA","MATAR MUSHROOM","RAJMA MAKHANI","DAL MAKHANI",
                           "MIXED RAITA","BUNDI RAITA","PINEAPPLE RAITA","SALAD(GREEN)","DUM ALOO",
                           "MUSHROOM PANEER","MUTTON MASALA","MUTTON MUGHLAI","MUTTON KORMA",
                           "MUTTON DO PYAZA","MUTTON SAGH","MUTTON DAHI","MUTTON ROGAN JOSH",
                           "MUTTON CURRY","KADAI MUTTON","KEEMA LEVER","KEEMA MATAR","KEEMA EGG",
                           "BRAIN CURRY","EGG CURRY","BUTTER CHICKEN","BUTTER CHICKEN(1/2)",
                           "KADAI CHICKEN","KADAI CHICKEN(1/2)","BUTTER CHICKEN(BL)",
                           "BUTTER CHICKEN(BL)(1/2)","CHICKEN MUGHLAI","CHICKEN MUGHLAI(1/2)",
                           "CHICKEN MASALA","CHICKEN MASALA(1/2)","CHICKEN MASALA(1/4)",
                           "CHICKEN SAGH","CHICKEN SAGH(1/2)","CHICKEN DAHI","CHICKEN DAHI(1/2)",
                           "CHICKEN DAHI(1/4)","CHICKEN KORMA","CHICKEN KORMA(1/2)",
                           "CHICKEN DO PYAZA","CHICKEN DO PYAZA(1/2)","FISH CURRY","CHICKEN CURRY",
                           "CHICKEN CURRY(1/2)","CHICKEN CURRY(1/4)","CHILLI CHICKEN","TANDOORI ALOO",
                           "CHICKEN TIKKA","SEEKH KABAB","FISH TIKKA","CHICKEN TANDOORI",
                           "CHICKEN TANDOORI(1/2)","PANEER TIKKA","CHICKEN SEEKH KABAB",
                           "CHICKEN HARA KABAB","CHICKEN BIRYANI","MUTTON BIRYANI","PANEER PULAO",
                           "VEG.PULAO","JEERA RICE","STEAMED RICE","RUMALI ROTI","ROTI","NAN",
                           "ALOO NAN","PANEER NAN","KEEMA NAN","PARANTHA","ALOO PARANTHA",
                           "PANEER PARANTHA","PUDINA PARANTHA","BUTTER NAN","LACHCHA PARANTHA",
                           "MISSI ROTI","KHASTA ROTI","VEG.BURGER","PANEER BURGER","CHEESE SANDWICH",
                           "VEG.PATTI","CHICKEN PATTI","TEA","COFFEE","COLD COFFEE","PINEAPPLE",
                           "STRAWBERRY","CHOCOLATE","BLACK FOREST","DOUBLE STORIED","TRIPLE STORIED",
                           "SOFT CONE","VANILLA","STRAWBERRY","CHOCOLATE","CHOCO CHIPS","MANGO",
                           "TUTTI FRUITY","LICHI","PISTA BADAM","CHOCOLATE PISTA BADAM","CHOCO DIP",
                           "CHOCOLATE LICHI" };

    cout << "\n                        *********";
    cout << "\n                        MENU CARD";
    cout << "\n                        *********";
    cout << "\n\n                      VEGETARIAN";
    cout << endl;
    for (i = 0; i < 113; count++, i++)
    {

        cout << i + 1 << " " << food[i] << endl;
        cout << price[i];
        if (count == 17)
        {
            count = 0;
            cout << "\n                              PRESS ANY KEY TO CONTINUE";
            system("pause");

        }
        if (i == 18)
        {
            cout << "\n\n       MUTTON\n";
            count += 3;
        }
        if (i == 32)
        {
            cout << "\n\n       CHICKEN\n";
            count += 3;
        }
        if (i == 57)
        {
            cout << "\n\n       BAR-BE-QUE\n";
            count += 3;
        }
        if (i == 72)
        {
            cout << "\n\n       ROTI-NAN-PARANTHA\n";
            count += 3;
        }
        if (i == 91)
        {
            cout << "\n\n       BEVERAGES\n";
            count += 3;
        }
        if (i == 100)
        {
            cout << "\n\n       ICE-CREAMS\n";
            count += 3;
        }
    }
    system("pause");

    cout << "\n\nPRESS 0 TO GO BACK TO MENU CARD\nPRESS 1 TO CONTINUE ";
    cin >> answ;
    switch (answ)
    {
        case 0:
            restaurant();
            break;

        case 1:
            do
            {
                cout << "ENTER THE FOOD CODE YOU WANT TO HAVE :: ";
                cin >> fc[z];
                z++;
                cout << "DO YOU WANT MORE(Y/N) ::";
                cin >> ans;
            }
            while ((ans == 'y') || (ans == 'Y'));
            cout << "\nEnter your room number:";
            cin >> room;
            cout << "\nEnter your name:";
            cin >> name;
            if (strcmp(name, r_cust[room - 1]) != 0)
            {
                cout << "\nWrong name...:";
                system("pause");
            }
            system("pause");
            for (i = 0; i < z; i++)
            {
                cout << food[fc[i] - 1] << endl;
                cout << price[fc[i] - 1] << endl;
                tot[room - 1] += price[fc[i] - 1];
            }
            cout << "TOTAL\t\t\t\t" << tot[room - 1];
            break;
        default:
            cout << "\nWrong choice entered!!!";
            system("pause");
            restaurant();
    }
}
//The code below will show all the flights and airplanes with all there informations and features.
void Airplanes()
{
    int typ;
    cout << "\nChoose the car type:\n1. Europe\n2. Africa\n3. Asia\n";
    cin >> typ;
    if (typ > 3)
    {
        cout << "\nWrong choice!! Choose a number between 1-3:";
        Airplanes();
    }
    switch (typ)
    {
        case 1:
            cout << "\n *** ALL Europe COUNTRIES ***           \n\n";
            cout << "\n                      FEATURES OF THESE Flights                      ";
            cout << "\n-------------------------------------------------------------------";
            cout << "\n\n Airplane Type            >>> Boeing 747-8";
            cout << "\n\n Airplane charges         >>> 400USD per flight";
            cout << "\n-------------------------------------------------------------------";
            cout << "\n                    ADDITIONAL FEATURES                        ";
            cout << "\n-------------------------------------------------------------------";
            cout << "\n\n COMFORTABLE SEATS";
            cout << "\n\n LARGE MEALS MENU";
            cout << "\n\n TV Available";
            cout << "\n-------------------------------------------------------------------";
            cout << "\n NOTE :- Extra features will cost 50USD per seat ";
            break;
        case 2:
            cout << "\n *** ALL Africa COUNTRIES ***           \n\n";
            cout << "\n                      FEATURES OF THESE Flights                      ";
            cout << "\n-------------------------------------------------------------------";
            cout << "\n\n Airplane Type            >>> Boeing 737 NG/737 MAX";
            cout << "\n\n Airplane charges         >>> 400USD per flight";
            cout << "\n-------------------------------------------------------------------";
            cout << "\n                    ADDITIONAL FEATURES                        ";
            cout << "\n-------------------------------------------------------------------";
            cout << "\n\n COMFORTABLE SEATS";
            cout << "\n\n LARGE MEALS MENU";
            cout << "\n\n TV Available";
            cout << "\n-------------------------------------------------------------------";
            cout << "\n NOTE :- Extra features will cost 50USD per seat ";
            break;
        case 3:
            cout << "\n *** ALL Asia COUNTRIES ***           \n\n";
            cout << "\n                      FEATURES OF THESE Flights                      ";
            cout << "\n-------------------------------------------------------------------";
            cout << "\n\n Airplane Type            >>> Boeing 747-8";
            cout << "\n\n Airplane charges         >>> 450USD per flight";
            cout << "\n-------------------------------------------------------------------";
            cout << "\n                    ADDITIONAL FEATURES                        ";
            cout << "\n-------------------------------------------------------------------";
            cout << "\n\n COMFORTABLE SEATS";
            cout << "\n\n LARGE MEALS MENU";
            cout << "\n\n TV Available";
            cout << "\n-------------------------------------------------------------------";
            cout << "\n NOTE :- Extra features will cost 50USD per seat ";
            break;
    }
}
//The code below is responsible for the cancelation of the check in of the costumer.
void cancel()
{
    cout << "\nEnter the room number:";
    cin >> room;
    if (r_cust[room - 1] == "N.A")
    {
        cout << "\nThe room is empty........";
        system("pause");
    }
    else
    {
        cout << "\nEnter the name of the person staying in the room:";
        cin >> name;
        if (strcmp(name, r_cust[room - 1]) == 0)
        {
            cout << "\nReservation for this room is cancelled......", room;
            strcpy_s(r_cust[room - 1], "N.A");
            system("pause");
        }
        else
        {
            cout << "\nInvalid name........";
            system("pause");
        }
    }
    cout << "\n\nYour total bill is :", total;
}
//The code below is responsible for the check out of the costumer from HAMZA AR hotel.
void deallocate()
{
    cout << "\nEnter the room number:";
    cin >> room;
    if (r_cust[room - 1] == "N.A")
    {
        cout << "\nThe room is empty........";
        system("pause");
    }
    else
    {
        cout << "\nEnter the name of the person staying in the room:";
        cin >> name;
        if (strcmp(name, r_cust[room - 1]) == 0)
        {
            cout << "\nThis Room is deallocated......", room;
            strcpy_s(r_cust[room - 1], "N.A");
            system("pause");
        }
        else
        {
            cout << "\nInvalid name........";
            system("pause");
        }
    }
    g_tot = (r_per[room - 1] * r_charge[room - 1]) - total + tot[room - 1];
    cout << "\n\nYour total bill is " << g_tot;
    cout << "\n\n\nThanks for staying in HAMZA AR hotel.........";
}