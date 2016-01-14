#ifndef TYPES_H /* include  Guarding */
#define TYPES_H

/* structure to hold the informations of a single contact */
typedef struct {
    char firstName[40];
    char lastName[40];
    char mobileNumber[20];
} Contact;

/* enumerator for different search types */
typedef enum { FIRST_NAME, LAST_NAME, MOBILE_NUMBER } search_t;

#endif // TYPES_H
