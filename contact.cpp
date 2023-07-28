#include <iostream>
#include <windows.h>

using namespace std;
void start();
int menu();
int k = 0;

int main()
{
    start();
    string name[100];
    string no[100];
    int check = 0;
    int total_contacts = 0;
    check = menu();

    do
    {
        // Add Contacts
        if (check == 1)
        {
            cout << "\t\t\t\t\tName :";
            cin >> name[k];
            cout << "\t\t\t\t\t\t Phone no :";
            cin >> no[k];
            k++;
            total_contacts++;
        }
        // Display Contacts
        else if (check == 2)
        {
              int check2 = 0;
            for (int i = 0; i < 100; i++)
            {
                if (name[i] != "\0")
                    cout << "\t\t\t\t\t Name :" << name[i] << "         Phone:" << no[i] << endl;
                       check2++;
            }
            if(check2==0){
                 cout << "\t\t\t\t\t";
            }
        }
        // Search By Number
        else if (check == 3)
        {
            string temp;
            cout << "\t\t\t\t\t Number : ";
            cin >> temp;
            int check2 = 0;
            int index;
            for (int i = 0; i < 100; i++)
            {
                if (temp == no[i])
                {
                    cout << "\t\t\t\t\t Number is Found\n ";
                    cout << "\t\t\t\t\t Name :" << name[i] << "         Phone:" << no[i] << endl;
                    check2++;
                }
                if (check2 == 0)
                {
                    cout << "\t\t\t\t\t This number is not found in your contact list\n";
                }
            }
        }
        // Search by Name
        else if (check == 4)
        {
            string temp;
            cout << "\t\t\t\t\t Name : ";
            cin >> temp;
            int check2 = 0;
            int index;
            for (int i = 0; i < 100; i++)
            {
                if (temp == name[i])
                {
                    cout << "\t\t\t\t\t Name is Found\n ";
                    cout << "\t\t\t\t\t Name :" << name[i] << "         Phone:" << no[i] << endl;
                    check2++;
                }
                if (check2 == 0)
                {
                    cout << "\t\t\t\t\t This name is not found in your contact list\n";
                }
            }
        }
        // Update
        else if (check == 5)
        {
            string temp, temp2, temp3;
            cout << "\t\t\t\t\t Name : ";
            cin >> temp;
            int check2 = 0;
            int index;
            for (int i = 0; i < 100; i++)
            {
                if (temp == name[i])
                {
                    cout << "\t\t\t\t\t New Name : ";
                    cin >> temp2;
                    cout << "\t\t\t\t\t New Number : ";
                    cin >> temp3;
                    name[i] = temp2;
                    no[i] = temp3;
                    check2++;
                    cout << "\t\t\t\t\t Updated Successfully : ";
                }
            
            }
                if (check2 == 0)
                {
                    cout << "\t\t\t\t\t This name is not found in your contact list\n";
                }
        }
        // Delete
        else if (check == 6)
        {
            string temp;
            cout << "\t\t\t\t\tFor Delete Enter Name : ";
            cin >> temp;
            int check2 = 0;
            int index;
            for (int i = 0; i < 100; i++)
            {
                if (temp == name[i])
                {
                    cout << "\t\t\t\t\t Deleted Successfully\n ";
                    cout << "\t\t\t\t\t Name :" << name[i] << "         Phone:" << no[i] << endl;
                    name[i] = '\0';
                    no[i] = '\0';
                    check2++;
                    total_contacts--;
                }
            }
            if (check2 == 0)
            {
                cout << "\t\t\t\t\t This name is not found in your contact list\n";
            }
        }
        // Delete All
        else if (check == 7)
        {

            cout << "\t\t\t\t\t All Deleted Successfully\n ";

            for (int i = 0; i < k; i++)
            {
                name[i] = '\0';
                no[i] = '\0';
            }
            k = 0;

            total_contacts = 0;
        }
        // Display no. of contacts
        else if (check == 8)
        {
            cout << "\t\t\t\t\t\t Total Number of contact list are : " << total_contacts << endl;
        }
        check = menu();

    } while (check != 0);
}
int menu()
{
    cout << "\n\n\n\n\n\n";
    cout << "\t\t\t\t\t\t- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n";
    cout << "\t\t\t\t\t\t- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n";
    cout << "\t\t\t\t\t\t|             PHONE BOOK APPLICATION                        |\n";
    cout << "\t\t\t\t\t\t- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n";
    cout << "\t\t\t\t\t\t|                                                           |\n";
    cout << "\t\t\t\t\t\t|             [1]   Add Contacts                            |\n";
    cout << "\t\t\t\t\t\t|             [2]   Display All Contacts                    |\n";
    cout << "\t\t\t\t\t\t|             [3]   Search By Number                        |\n";
    cout << "\t\t\t\t\t\t|             [4]   Search By Name                          |\n";
    cout << "\t\t\t\t\t\t|             [5]   Update                                  |\n";
    cout << "\t\t\t\t\t\t|             [6]   Delete                                  |\n";
    cout << "\t\t\t\t\t\t|             [7]   Delete All                              |\n";
    cout << "\t\t\t\t\t\t|             [8]   Number of Contacts                      |\n";

    cout << "\t\t\t\t\t\t|                                                           |\n";
    cout << "\t\t\t\t\t\t- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n";
    cout << "\t\t\t\t\t\t|                [0]  Exite                                 |\n";
    cout << "\t\t\t\t\t\t- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n";

    int a;
    cin >> a;
    system("cls");
    return a;
}

void start()
{
    system("color 0B");
    cout << "\n\n\n\n\n\n\n\n";
    cout << "\t\t\t\t\t\t\t\t- - - - - - - - - - - - - - - - - - \n";
    cout << "\t\t\t\t\t\t\t\t- - - - - - - - - - - - - - - - - - \n";
    cout << "\t\t\t\t\t\t\t\tPHONE BOOK APPLICATION\n";

    cout << "\t\t\t\t\t\t\t\t- - - - - - - - - - - - - - -  - - - \n\n";
    cout << "\t\t\t\t\t\t\t\tLoading";
    char x = 219;
    for (int i = 0; i < 35; i++)
    {
        cout << x;
        if (i < 10)
            Sleep(300);
        if (i >= 10 && i < 20)
            Sleep(150);
        if (i >= 10)
            Sleep(25);
    }
    system("cls");
}