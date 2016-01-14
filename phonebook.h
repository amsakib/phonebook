#ifndef PHONEBOOK_H
#define PHONEBOOK_H

/* Function Prototypes */
void addEntry();
void display(int index);
void displayAll();
void search(char *key, search_t type);
void removeEntry(char *mobileNumber);
void readFromFile();
void saveToFile();

#endif // PHONEBOOK_H
