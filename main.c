/**
  * Application Name: PhoneBook
  * Author : Asir Mosaddek Sakib
  * Email : sakib.rangpur@gmail.com
  * License: NO LICENSE !! FEEL FREE TO USE :-)
  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "types.h"
#include "phonebook.h"

void clear();

int main()
{
    readFromFile();
    char selection[41];
    int choice;
    while(1){
        puts("PhoneBook application main menu.");
        puts("    1. Insert a new entry");
        puts("    2. Display All Entry");
        puts("    3. Search by First Name");
        puts("    4. Search by Last Name");
        puts("    5. Search by Mobile Number");
        puts("    6. Delete a contact (by Mobile Number) ");
        puts("    7. Save Database");
        puts("    8. Exit");
        do {
            printf("Enter your choice: ");
            gets(selection);
            choice = atoi(selection);
        } while (choice < 1 || choice > 8);

        switch(choice)
        {
        case 1:
            addEntry();
            clear();
            break;
        case 2:
            displayAll();
            clear();
            break;
        case 3:
            printf("Enter first name to search: ");
            gets(selection);
            search(selection, FIRST_NAME);
            clear();
            break;
        case 4:
            printf("Enter last name to search: ");
            gets(selection);
            search(selection, LAST_NAME);
            clear();
            break;
        case 5:
            printf("Enter mobile number to search: ");
            gets(selection);
            search(selection, MOBILE_NUMBER);
            clear();
            break;
        case 6:
            printf("Enter mobile number to delete: ");
            gets(selection);
            removeEntry(selection);
            clear();
            break;
        case 7:
            saveToFile();
            clear();
            break;
        case 8:
            exit(0);
            break;
        default:
            break;
        }
    }
    return 0;
}


void clear()
{
    system("PAUSE"); // press any key to continue..
    system("CLS"); // clear the screen ( linux: clear // turbo C : clrscr )
}





