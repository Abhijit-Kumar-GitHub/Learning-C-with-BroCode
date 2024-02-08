


#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)) {                    // to check for alphabet
        printf("%c is an alphabet.\n", ch);
        if ( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
            printf("%c is a vowel",ch);
        }
        else{
            printf("%c is a consonent",ch);
        }
    }

    else if (ch >= 48 && ch <= 57) {                                      // to check for digits
        printf("%c is a digit.\n", ch);
    }
   
    else {
        printf("%c is a special character.\n", ch);
    }

    return 0;
}
