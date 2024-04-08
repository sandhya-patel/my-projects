#include <iostream>
#include <conio.h>
#include <string>
#include <stdlib.h>
#include <windows.h>
using namespace std;
/*Function definition for setting cursor position in the console
window*/
void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
/*Class definition*/
class applicant
{
    /*Defining data members for storing applicant details*/
    string name;
    int age;
    string address;
    int m_sal;
    int h_loan;
    int p_loan;
    int no_chq_bounce;
    char own_house;
    char spouse_working;
    char dependent_parents;
    int company_tier;

public:
    /*Class funtion declarations*/
    void get_data();
    int calc_liability();
    void display_score();
};
/*Function for receiving and storing loan applicant’s details*/
void applicant::get_data()
{
    system("cls");

    gotoxy(31, 8);
    cout << "Name of applicant: ";

    getline(cin, name);
    gotoxy(31, 10);
    cout << "Age: ";

    cin >> age;
    cin.clear();

    cin.ignore(1000, '\n');
    gotoxy(31, 12);
    cout << "Address: ";

    getline(cin, address);
    cin.clear();

    cin.ignore(1000, '\n');

    gotoxy(31, 14);
    cout << "Monthly Salary: ";

    cin >> m_sal;

    gotoxy(31, 16);
    cout << "Total Home Loan EMI: ";

    cin >> h_loan;
    gotoxy(31, 18);
    cout << "Total Personal Loan EMI: ";

    cin >> p_loan;

    gotoxy(31, 20);
    cout << "Number of cheque bounces in last six months: ";

    cin >> no_chq_bounce;
    gotoxy(31, 22);

    cout << "Own house? (y or n): ";

    cin >> own_house;
    gotoxy(31, 24);

    cout << "Spouse working? (y or n): ";

    cin >> spouse_working;
    gotoxy(31, 26);

    cout << "Dependent parents? (y or n): ";

    cin >> dependent_parents;
    gotoxy(31, 28);

    cout << "Company Tier? (1, 2 or 3): ";

    cin >> company_tier;
} // End of get_data()
/*Function for calculating credit score*/
int applicant::calc_liability()
{
    int score = 0; /*Initializing the score variable for storing credit
     score*/
    int liability;
    if (age > 22 && age <= 30)
        score = score + 2;
    else if (age > 30 && age <= 35)
        score = score + 1;
    else
        score = score - 1;
    liability = h_loan + p_loan;
    if (liability <= m_sal / 4)
        score = score + 5;
    if (liability > m_sal / 4 && liability <= m_sal / 3)
        score = score + 3;
    if (liability > m_sal / 3 && liability <= m_sal / 2)
        score = score + 1;
    if (liability > m_sal / 2)
        score = score - 1;
    if (no_chq_bounce > 1)
        score = score - 2;
    if (no_chq_bounce == 1)
        score = score - 1;
    if (no_chq_bounce == 0)
        score = score + 1;
    if (p_loan > h_loan)
        score = score - 1;
    else

        score = score + 1;
    if (own_house == 'y')
        ;
    score = score + 1;
    if (spouse_working == 'y')
        score = score + 1;
    if (dependent_parents == 'y')
        ;
    else
        score = score + 1;
    if (company_tier == 1)
        score = score + 3;
    if (company_tier == 2)
        score = score + 2;
    else
        score = score + 1;
    return (score);
} // End of calc_liability()
/*Function for displaying credit score and applicant rating*/
void applicant::display_score()
{
    int sc = calc_liability(); /*Calling calc_liability() function to
     calculate applicant’s credit score*/
    system("cls");
    /*Displaying the results*/
    if (sc > 9)
    {
        gotoxy(26, 7);
        cout << "The applicant " << name << " is at low risk.\n"
             << endl;
        gotoxy(26, 8);
        cout << "Credit score = " << sc << " Credit can be given."<<endl;
        cout<<"----------------------------------------------------------------------------------------------------------";
    }
    else
    {
        if (sc > 5 && sc <= 9)
        {
            gotoxy(26, 9);
            cout << "The applicant " << name << " is at average risk ";
            gotoxy(26, 10);
            cout << " Credit score= " << sc << " Credit can be given with due precaution"<<endl;
                cout<<"----------------------------------------------------------------------------------------------------------";
        }
        else
        {
            gotoxy(26, 11);
            cout << "The applicant " << name << " is at high risk.\n";
            gotoxy(26, 12);
            cout << "Credit score = " << sc << " \nCredit can not be given."<<endl;
                cout<<"----------------------------------------------------------------------------------------------------------";
        }
    }
    getch();
} // End of display_score()
/*Main Function*/
int main()
{
    char flag = 'f';
    applicant a;
    char ch;
    while (1)
    {
        system("cls");

        gotoxy(31, 8);
        cout << "Credit CalC";
        gotoxy(31, 9);
        cout << "___________";
        gotoxy(22, 12);
        cout << "1 - Enter loan applicant’s details";
        gotoxy(22, 13);
        cout << "2 - Display credit score";
        gotoxy(22, 14);
        cout << "3 - Exit";
        gotoxy(22, 16);
        cout << "Select an option by typing the numeric code: ";
        ch = getch();
        switch (ch)
        {
        case ('1'):
        {

            a.get_data();
            flag = 't';
            break;
        }
        case ('2'):
        {
            if (flag == 'f')
            {
                gotoxy(22, 18);
                cout << "Loan applicant’s details not yet entered! Press any key to continue..";

                getch();
            }
            else

                a.display_score();
            break;
        }
        case ('3'):
        {
            exit(1);
            break;
        }
        default:
        {
            gotoxy(22, 18);
            cout << "Invalid Choice! Press any key to continue..";
            getch();
        }
        } // End of switch-case block
    }
    return 0; // End of while block
} // End of main()
