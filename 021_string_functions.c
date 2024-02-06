#include <stdio.h>
#include <string.h>

int main(){

    char string1[] = "Abhijit";
    char string2[] = "-Kumar";

    // some basic string functions


    // strlwr(string1);                             // converts a string to lowercase
    // strupr(string1);                             // converts a string to uppercase
    // strcat(string1, string2);                    // appends string2 to end of string1
    // strncat(string1, string2, 3);                // appends n(3 in this case) characters from string2 to string1
    // strcpy(string1, string2);                    // copy string2 to string1
    // strncpy(string1, string2, 3);                // copy n characters of string2 to string1

    // strset(string1, '?');                        // sets all characters of a string to a given character
    // strnset(string1, '_', 2);                    // sets first n characters of a string to a given character
    // strrev(string1);                             // reverses a string

    // int result = strlen(string1);                // returns the string length as int
    // int result = strcmp(string1, string2);       // string compare all characters and return 0 if they all are same, if not non-zero will be returned
    // int result = strncmp(string1, string2, 3);   // string compare first n characters of the two given string and return 0 if they are same
    // int result = strcpmi(string1, string2);      // string compare all characters IGNORING CASE
    // int result = strncmpi(string1, string2, 3);  // string compare first n characters and IGNORE CASE



    printf("%s", string1);
    // printf("%s", string2);

    //printf("\n%d", result);

    return 0;
}