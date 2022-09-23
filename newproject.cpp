#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

class Library
{
public:
    int Id;
    int Price;
    int Pages;
    char Name[100];
    char AuthorName[100];
    char StudentName[100];
};

int main()
{
    Library s1[20];
    int input = 0;
    int count = 0;

    while (input != 3)
    {
        cout << "Enter 1 to input datails like  name, id,author ,student , price,pages: " << endl;
        cout << "Enter 2 to display datails: " << endl;
        cout << "Enter 3 to exit: " << endl;
        cin >> input;

        switch (input)
        {
        case 1:
        start:
            cout << "Enter book id: " << endl;
            cin >> s1[count].Id;
            cout << "Enter book name: " << endl;
            cin.getline(s1[count].Name, 100, ',');
            cout << "Enter book author name: " << endl;
            cin.getline(s1[count].AuthorName, 100, ',');
            cout << "Enter Student name: " << endl;
            cin.getline(s1[count].StudentName, 100, ',');
            cout << "Enter book price : " << endl;
            cin >> s1[count].Price;
            cout << "Enter bookpages: " << endl;
            cin >> s1[count].Pages;
            count++;
            break;

        case 2:
            for (int i = 0; i < count; i++)
            {
                cout << "Book id: " << s1[i].Id << endl;
                cout << "Book name: " << s1[i].Name;
                cout << "Book Author name: " << s1[i].AuthorName;
                cout << "Book Student name: " << s1[i].StudentName;
                cout << "Book price: " << s1[i].Price << endl;
                cout << "Book pages: " << s1[i].Pages << endl;
            }
            break;

        case 3:
            exit(0);
            break;
        default:
            cout << "Entered wrong value";
            goto start;
        }
    }
}