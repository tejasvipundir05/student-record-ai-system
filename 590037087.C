#include <stdio.h>

#define MAX_STUDENTS 100

struct Student {
    long long sapID;
    int rollNo;
    char name[100];
    char phone[20];
    char email[100];
    int year;
    int semester;
    float sgpa[8];
};

struct Student students[MAX_STUDENTS];
int studentCount = 0;

void displayMenu() {
    printf("\n====================================\n");
    printf(" STUDENT RECORD MANAGEMENT SYSTEM\n");
    printf("====================================\n");
    printf("1. Add Student\n");
    printf("2. Search Student\n");
    printf("3. Calculate CGPA\n");
    printf("4. Average CGPA by Year\n");
    printf("5. Display All Students\n");
    printf("6. Delete Student\n");
    printf("7. Sort by SAP ID\n");
    printf("8. Sort by Name\n");
    printf("9. AI Academic Advisor\n");
    printf("0. Exit\n");
    printf("Enter your choice: ");
}

int main() {
    int choice;

    do {
        displayMenu();

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input.\n");
            return 1;
        }

        switch (choice) {
            case 0:
                printf("Thank you! Goodbye.\n");
                break;

            case 1: case 2: case 3:
            case 4: case 5: case 6:
            case 7: case 8: case 9:
                printf("Feature coming soon!\n");
                break;

            default:
                printf("Invalid choice. Try again.\n");
        }

    } while (choice != 0);

    return 0;
}
