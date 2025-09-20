//write a program to find 5 students grade ABCDEF store that students in array and find the average of the students and find the grade of the students using function??
#include <stdio.h>

char Grade(int marks) {
    if (marks >= 90) return 'A';
    else if (marks >= 80) return 'B';
    else if (marks >= 70) return 'C';
    else if (marks >= 60) return 'D';
    else if (marks >= 50) return 'E';
    else return 'F';
}

int main() {
    int marks[5], i;
    int sum = 0;
    float average;
    char grades[5];

    printf("Enter marks of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("%d: ", i + 1);
        scanf("%d", &marks[i]);
        grades[i] = Grade(marks[i]);
        sum += marks[i];
    }

    average = sum / 5.0;


    for (i = 0; i < 5; i++) {
        printf("%d:  %d ,Grade = %c\n", i + 1, marks[i], grades[i]);
    }
    printf("\nAverage = %.2f\n", average);

    return 0;
}
