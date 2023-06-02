#include <stdio.h>

struct University {
    char* name;
    int numberOfStudents;
    int rating;
};

float averageStudents(struct University data[], int n) {
    int totalStudents = 0;
    
    for (int i = 0; i < n; i++) {
        totalStudents += data[i].numberOfStudents;
    }
    
    float average = (float)totalStudents / n;
    return average;
}

int main() {
    // Пример использования функции averageStudents
    
    struct University universities[3];
    
    universities[0].name = "A";
    universities[0].numberOfStudents = 1250;
    universities[0].rating = 4.2;
    
    universities[1].name = "B";
    universities[1].numberOfStudents = 2400;
    universities[1].rating = 4.9;
    
    universities[2].name = "C";
    universities[2].numberOfStudents = 1100;
    universities[2].rating = 3.1;
    
    int size = sizeof(universities) / sizeof(universities[0]);
    float average = averageStudents(universities, size);
    
    printf("%.2f\n", average);
    
    return 0;
}
