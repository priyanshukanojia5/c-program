#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CLASSES 2

// Struct for storing fee structure
struct FeeStructure {
    int class_grade;
    float monthly_fee;
    float admission_fee;
};

// Struct for storing lecture schedule
struct Schedule {
    int class_grade;
    char subject[30];
    char day[15];
    char time[20];
};

// Struct for storing student count
struct StudentCount {
    int class_grade;
    int num_students;
};

// Function prototypes
void show_fee_structure(struct FeeStructure fees[], int size);
void show_lecture_schedule(struct Schedule schedules[], int size);
void show_student_counts(struct StudentCount students[], int size);

int main() {
    // Data Initialization
    struct FeeStructure fees[MAX_CLASSES] = {
        {9, 1500.00, 2000.00},
        {10, 1700.00, 2000.00}
    };

    struct Schedule schedules[4] = {
        {9, "Mathematics", "Monday", "5:00 PM - 6:00 PM"},
        {9, "Science", "Wednesday", "5:00 PM - 6:00 PM"},
        {10, "Mathematics", "Tuesday", "6:00 PM - 7:00 PM"},
        {10, "Science", "Thursday", "6:00 PM - 7:00 PM"}
    };

    struct StudentCount students[MAX_CLASSES] = {
        {9, 25},
        {10, 30}
    };

    int choice;

    do {
        printf("\n===== Tuition Class Management =====\n");
        printf("1. View Fee Structure\n");
        printf("2. View Lecture Schedule\n");
        printf("3. View Student Count\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                show_fee_structure(fees, MAX_CLASSES);
                break;
            case 2:
                show_lecture_schedule(schedules, 4);
                break;
            case 3:
                show_student_counts(students, MAX_CLASSES);
                break;
            case 4:
                printf("Exiting program. Thank you!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while(choice != 4);

    return 0;
}

// Function to display fee structure
void show_fee_structure(struct FeeStructure fees[], int size) {
    printf("\n--- Fee Structure ---\n");
    for(int i = 0; i < size; i++) {
        printf("Class %d:\n", fees[i].class_grade);
        printf("  Monthly Fee: ₹%.2f\n", fees[i].monthly_fee);
        printf("  Admission Fee: ₹%.2f\n", fees[i].admission_fee);
    }
}

// Function to display lecture schedule
void show_lecture_schedule(struct Schedule schedules[], int size) {
    printf("\n--- Lecture Schedule ---\n");
    for(int i = 0; i < size; i++) {
        printf("Class %d - %s:\n", schedules[i].class_grade, schedules[i].subject);
        printf("  Day: %s\n", schedules[i].day);
        printf("  Time: %s\n", schedules[i].time);
    }
}