#include <stdio.h>
#include <string.h>

struct Student{
    char name[12];
    float cgpa;
};

int main(){

    struct Student student1 = {"Ram", 10.0};
    struct Student student2 = {"Shyam", 11.0};
    struct Student student3 = {"aam", 0.0};
    struct Student student4 = {"kaam", 5.0};


    struct Student students[] = {student1, student2, student3, student4};

    for(int i = 0; i < (sizeof(students)/sizeof(students[0])); i++){

        printf("%-12s\t", students[i].name);
        printf("%.2f\n", students[i].cgpa);
    }


    return 0;
}