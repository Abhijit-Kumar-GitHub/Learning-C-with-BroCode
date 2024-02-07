#include <stdio.h>
#include <string.h>

/*
typedef char user[25];          // here we are saying that a character array of 25 bytes length will be called as user data type so forth.



int main(){

    // typedef = reserved keyword that gives an existing datatype a nickname

    // char user1[25] = "Bro";     // programmers often find declaring this type of datatype repeatedly a mindless drone activity, thus they create a nickname for it outside of the main
    user user1 = "Bro";     // ==> used a lot with structsk


    return 0;
}
*/


typedef struct {
    char name[25];
    char password[12];
    int id;
}User;




int main(){

    User user1 = {"Bro", "password123", 123789};
    User user2 = {"Abhijit", "password321", 456456};

    printf("%s has the password %s", user1.name, user1.password);

    return 0;
}