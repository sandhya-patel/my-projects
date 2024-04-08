#include <iostream>
#include <string>
#include <iomanip>
#include <windows.h>
using namespace std;

/*Function definition for setting cursor position in the console
window*/
// void gotoxy(int x, int y)
// {
//     COORD coord;
//     coord.X = x;
//     coord.Y = y;
//     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
// }

struct Menuitem
{
    string menulist;
    double prize;
};
Menuitem menu[40];
void get_data();
void show_menu();

void select_item();
void print_bill();
int c[27];

int ch[40];

int main()
{
    
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;

    double t;
    get_data();
    show_menu();
    cout<<endl;
cout<<endl;
cout<<endl;
    select_item();
    print_bill();
    return 0;
}
void get_data()
{
    menu[1].menulist = "Chhole Bhature";
    menu[1].prize = 100;
    menu[2].menulist = "Masala Dosa";
    menu[2].prize = 60;
    menu[3].menulist = "Chaat";
    menu[3].prize = 40;
    menu[4].menulist = "Dal Makhani";
    menu[4].prize = 120;
    menu[5].menulist = "Matar Paneer";
    menu[5].prize = 100;
    menu[6].menulist = "chapati";
    menu[6].prize = 30;
    menu[7].menulist = "Idli";
    menu[7].prize = 80;
    menu[8].menulist = "biryani";
    menu[8].prize = 150;
    menu[9].menulist = "Chowmein";
    menu[9].prize = 60;
    menu[10].menulist = " Manchurian";
    menu[10].prize = 110;
    menu[11].menulist = "Spring Rolls";
    menu[11].prize = 90;
    menu[12].menulist = "Noodles";
    menu[12].prize = 50;
    menu[13].menulist = "Momos";

    menu[13].prize = 80;
    menu[14].menulist = "Pizza";
    menu[14].prize = 160;
    menu[15].menulist = "Pasat";
    menu[15].prize = 110;
    menu[16].menulist = "Arancini";
    menu[16].prize = 140;
    menu[17].menulist = "Risotto";
    menu[17].prize = 80;
    menu[18].menulist = "Truffles";
    menu[18].prize = 130;
    menu[19].menulist = "Gelato(ice cream)";
    menu[19].prize = 100;
    menu[20].menulist = "Chicken Biryani";
    menu[20].prize = 150;
    menu[21].menulist = "Mutton Korma";
    menu[21].prize = 200;
    menu[22].menulist = "Keema Samosa";
    menu[22].prize = 180;
    menu[23].menulist = "Parmesan Fish Fingers";
    menu[23].prize = 250;
    menu[24].menulist = "Chicken Chettinad";
    menu[24].prize = 130;
    menu[25].menulist = "Egg Curry";
    menu[25].prize = 100;
}
void show_menu()
{
   

    cout << "<--------WELCOME TO SANDHYA'S RESTAURENT--------->" << endl;


    cout << "<--------------------MENU------------------------->" << endl;
    cout << endl;
    

    cout << "-------Indian Food------------" << endl;
    
    cout << 1 << "\t" << menu[1].menulist << setw(16) << "RS " << menu[1].prize << endl;
    
    cout << 2 << "\t" << menu[2].menulist << setw(19) << "RS " << menu[2].prize << endl;
    
    cout << 3 << "\t" << menu[3].menulist << setw(25) << "RS " << menu[3].prize << endl;
    
    cout << 4 << "\t" << menu[4].menulist << setw(19) << "RS " << menu[4].prize << endl;
    
    cout << 5 << "\t" << menu[5].menulist << setw(18) << "RS " << menu[5].prize << endl;
    
    cout << 6 << "\t" << menu[6].menulist << setw(23) << "RS " << menu[6].prize << endl;
    
    cout << 7 << "\t" << menu[7].menulist << setw(26) << "RS " << menu[7].prize << endl;
    
    cout << 8 << "\t" << menu[8].menulist << setw(23) << "RS " << menu[8].prize << endl;
    
    cout << "------------Chaines Food--------------" << endl;
    
    cout << 9 << "\t" << menu[9].menulist << setw(22) << "RS " << menu[9].prize << endl;
    
    cout << 10 << "\t" << menu[10].menulist << setw(19) << "RS " << menu[10].prize << endl;
    
    cout << 11 << "\t" << menu[11].menulist << setw(18) << "RS " << menu[11].prize << endl;
    
    cout << 12 << "\t" << menu[12].menulist << setw(23) << "RS " << menu[12].prize << endl;
    
    cout << 13 << "\t" << menu[13].menulist << setw(25) << "RS " << menu[13].prize << endl;
    
    cout << "-------------Italian Food-------------" << endl;
    
    cout << 14 << "\t" << menu[14].menulist << setw(25) << "RS " << menu[14].prize << endl;
    
    cout << 15 << "\t" << menu[15].menulist << setw(25) << "RS " << menu[15].prize << endl;
    
    cout << 16 << "\t" << menu[16].menulist << setw(22) << "RS " << menu[16].prize << endl;
    
    cout << 17 << "\t" << menu[17].menulist << setw(23) << "RS " << menu[17].prize << endl;
    
    cout << 18 << "\t" << menu[18].menulist << setw(22) << "RS " << menu[18].prize << endl;
    
    cout << 19 << "\t" << menu[19].menulist << setw(13) << "RS " << menu[19].prize << endl;
    
    cout << "-------------------Non-Veg--------------------" << endl;
    
    cout << 20 << "\t" << menu[20].menulist << setw(15) << "RS " << menu[20].prize << endl;
    
    cout << 21 << "\t" << menu[21].menulist << setw(18) << "RS " << menu[22].prize << endl;
    
    cout << 23 << "\t" << menu[23].menulist << setw(9) << "RS " << menu[23].prize << endl;
    
    cout << 24 << "\t" << menu[24].menulist << setw(13) << "RS " << menu[24].prize << endl;
    //    gotoxy(31, 40);
    //     cout << 25 << "\t" << menu[25].menulist << setw(21) << "RS " << menu[25].prize << endl;
}
void select_item()
{
    int ch, quantity;
    char yes_or_no;
    do
    {

        
        cout << "enter your choice :" << endl;
        cin >> ch;
        
        cout << "enter the quantity of items  :" << endl;
        cin >> quantity;
        
        switch (ch)
        {
        case 1:
        {
            c[1] = c[1] + quantity;

            cout << " you have selected  " << menu[1].menulist << endl;
            break;
        }
        case 2:
        {
            c[2] = c[2] + quantity;

            cout << " you have selected  " << menu[2].menulist << endl;
            break;
        }
        case 3:
        {
            c[3] = c[3] + quantity;
            cout << " you have selected  " << menu[3].menulist << endl;
            break;
        }
        case 4:
        {
            c[4] = c[4] + quantity;
            cout << " you have selected  " << menu[4].menulist << endl;
            break;
        }
        case 5:
        {
            c[5] = c[5] + quantity;
            cout << " you have selected  " << menu[5].menulist << endl;
            break;
        }
        case 6:
        {
            c[6] = c[6] + quantity;
            cout << " you have selected  " << menu[6].menulist << endl;
            break;
        }
        case 7:
        {
            c[7] = c[7] + quantity;
            cout << " you have selected  " << menu[7].menulist << endl;
            break;
        }
        case 8:
        {
            c[8] = c[8] + quantity;
            cout << " you have selected  " << menu[8].menulist << endl;
            break;
        }
        case 9:
        {
            c[9] = c[9] + quantity;
            cout << " you have selected  " << menu[9].menulist << endl;
            break;
        }
        case 10:
        {
            c[10] = c[10] + quantity;
            cout << " you have selected  " << menu[10].menulist << endl;
            break;
        }
        case 11:
        {
            c[11] = c[11] + quantity;
            cout << " you have selected  " << menu[11].menulist << endl;
            break;
        }
        case 12:
        {
            c[12] = c[12] + quantity;
            cout << " you have selected  " << menu[12].menulist << endl;
            break;
        }
        case 13:
        {
            c[13] = c[13] + quantity;
            cout << " you have selected  " << menu[13].menulist << endl;
            break;
        }
        case 14:
        {
            c[14] = c[14] + quantity;
            cout << " you have selected  " << menu[14].menulist << endl;
            break;
        }
        case 15:
        {
            c[15] = c[15] + quantity;
            cout << " you have selected  " << menu[15].menulist << endl;
            break;
        }
        case 16:
        {
            c[16] = c[16] + quantity;
            cout << " you have selected  " << menu[16].menulist << endl;
            break;
        }
        case 17:
        {
            c[17] = c[17] + quantity;
            cout << " you have selected  " << menu[17].menulist << endl;
            break;
        }
        case 18:
        {
            c[18] = c[18] + quantity;
            cout << " you have selected  " << menu[18].menulist << endl;
            break;
        }
        case 19:
        {
            c[19] = c[19] + quantity;
            cout << " you have selected  " << menu[19].menulist << endl;
            break;
        }
        case 20:
        {
            c[20] = c[20] + quantity;
            cout << " you have selected  " << menu[20].menulist << endl;
            break;
        }
        case 21:
        {
            c[21] = c[21] + quantity;
            cout << " you have selected  " << menu[21].menulist << endl;
            break;
        }
        case 22:
        {
            c[22] = c[22] + quantity;
            cout << " you have selected  " << menu[22].menulist << endl;
            break;
        }
        case 23:
        {
            c[23] = c[23] + quantity;
            cout << " you have selected  " << menu[23].menulist << endl;
            break;
        }
        case 24:
        {
            c[24] = c[24] + quantity;
            cout << " you have selected  " << menu[24].menulist << endl;
            break;
        }
        case 25:
        {
            c[25] = c[25] + quantity;
            cout << " you have selected  " << menu[25].menulist << endl;
            break;
        }
        case 26:
        {
            cout << "Invaild input" << endl;
        }
        }
        cout << "Select more items (y/n) ";
        cin >> yes_or_no;

    } while (yes_or_no != 'n');
}
void print_bill()
{
    double total = 0, tax, due;
    system("cls");

    cout << endl;

    cout << "-------WELCOME TO PATEL'S RESTAURENT-------" << endl

         << endl
         << endl;
    cout << " Your_Bill ";
    cout << endl;

    cout << endl;
    cout << "QUNATITY "
         << "\t"
         << "  DISH    "
         << "\t"
         << "PRIZE" << endl
         << endl;

    for (int i = 0; i < 26; i++)
    {
        if (c[i] > 0)
        {

            cout << c[i] << "\t" << menu[i].menulist << setw(16) << "RS " << menu[i].prize << endl;
            total = total + (menu[i].prize * c[i]);
        }
    }
    tax = total + 0.05;
    due = total + tax;

    cout << "          Tax(5%)"
         << "              " << tax << endl;

    cout << "<-------------------------------------------------->" << endl
         << endl;

    cout << "total amount                      RS " << due << endl;
    cout << endl;
    cout << "<---------------------------------------------------->" << endl;
    cout << endl;

    cout << "<------------------****    THANKYOU     ****---------------->" << endl;
    cout << "<---------------*******   VISIT AGAIN   *******---------------->" << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
}