#include <stdio.h>

struct dob
{
    int day;
    int month;
    int year;
};

struct student_info
{
    int roll_no;
    char name[50];
    float CGPA;
    struct dob age;
};

void displayByValue(struct student_info student)
{
    printf("\n[Call by Value]\n");
    printf("Roll No: %d\n", student.roll_no);
    printf("Name   : %s\n", student.name);
    printf("CGPA   : %.2f\n", student.CGPA);
    printf("DOB    : %02d-%02d-%04d\n", student.age.day, student.age.month, student.age.year);
}

void displayByAddress(struct student_info *student)
{
    printf("\n[Call by Address]\n");
    printf("Roll No: %d\n", student->roll_no);
    printf("Name   : %s\n", student->name);
    printf("CGPA   : %.2f\n", student->CGPA);
    printf("DOB    : %02d-%02d-%04d\n", student->age.day, student->age.month, student->age.year);
}

int main()
{
    struct student_info s;

    s.roll_no = 2306146;
    snprintf(s.name, sizeof(s.name), "Shriyans Mukherjee");
    s.CGPA = 8.2;
    s.age.day = 22;
    s.age.month = 4;
    s.age.year = 2005;

    displayByValue(s);
    displayByAddress(&s);

    return 0;
}
