#include <stdio.h>
#include <string.h>

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

/* Find student by SAP ID */
int findStudent(long long sapID) {
    for (int i = 0; i < studentCount; i++) {
        if (students[i].sapID == sapID) {
            return i;
        }
    }
    return -1;
}

/* Display one student's details */
void displayStudent(struct Student s) {
    printf("\nSAP ID: %lld\n", s.sapID);
    printf("Roll Number: %d\n", s.rollNo);
    printf("Name: %s\n", s.name);
    printf("Phone: %s\n", s.phone);
    printf("Email: %s\n", s.email);
    printf("Year: %d\n", s.year);
    printf("Semester: %d\n", s.semester);

    printf("SGPA Details:\n");
    for (int i = 0; i < 8; i++) {
        if (s.sgpa[i] >= 0) {
            printf("Semester %d: %.2f\n",
                   i + 1, s.sgpa[i]);
        }
    }
}

/* Add a student */
void addStudent() {
    if (studentCount >= MAX_STUDENTS) {
        printf("Student database is full.\n");
        return;
    }

    struct Student s;

    printf("Enter SAP ID: ");
    if (scanf("%lld", &s.sapID) != 1) {
        printf("Invalid SAP ID.\n");
        return;
    }

    if (findStudent(s.sapID) != -1) {
        printf("SAP ID already exists!\n");
        return;
    }

    printf("Enter Roll Number: ");
    if (scanf("%d", &s.rollNo) != 1) {
        printf("Invalid roll number.\n");
        return;
    }

    printf("Enter Name: ");
    scanf(" %99[^\n]", s.name);

    printf("Enter Phone Number: ");
    scanf("%19s", s.phone);

    printf("Enter Email ID: ");
    scanf("%99s", s.email);

    printf("Enter Year (1-4): ");
    if (scanf("%d", &s.year) != 1 ||
        s.year < 1 || s.year > 4) {
        printf("Invalid year.\n");
        return;
    }

    printf("Enter Semester (1-8): ");
    if (scanf("%d", &s.semester) != 1 ||
        s.semester < 1 || s.semester > 8 ||
        (s.semester + 1) / 2 != s.year) {
        printf("Invalid semester for this year.\n");
        return;
    }

    for (int i = 0; i < 8; i++) {
        s.sgpa[i] = -1;
    }

    printf("Enter SGPA for completed semesters.\n");
    printf("Use -1 if a result is unavailable.\n");

    for (int i = 0; i < s.semester; i++) {
        printf("Semester %d SGPA: ", i + 1);

        if (scanf("%f", &s.sgpa[i]) != 1) {
            printf("Invalid SGPA input.\n");
            return;
        }

        if (s.sgpa[i] != -1 &&
            (s.sgpa[i] < 0 || s.sgpa[i] > 10)) {
            printf("SGPA must be 0-10 or -1.\n");
            return;
        }
    }

    students[studentCount] = s;
    studentCount++;

    printf("\nStudent added successfully!\n");
}

/* Search for a student */
void searchStudent() {
    long long id;

    printf("Enter SAP ID to search: ");
    if (scanf("%lld", &id) != 1) {
        printf("Invalid SAP ID.\n");
        return;
    }

    int index = findStudent(id);

    if (index == -1) {
        printf("Student not found.\n");
    } else {
        displayStudent(students[index]);
    }
}

/* Display all students */
void displayAllStudents() {
    if (studentCount == 0) {
        printf("No student records available.\n");
        return;
    }

    printf("\n===== ALL STUDENT RECORDS =====\n");

    for (int i = 0; i < studentCount; i++) {
        printf("\nStudent %d\n", i + 1);
        displayStudent(students[i]);
        printf("------------------------------\n");
    }
}

/* Delete a student */
void deleteStudent() {
    long long id;

    printf("Enter SAP ID to delete: ");
    if (scanf("%lld", &id) != 1) {
        printf("Invalid SAP ID.\n");
        return;
    }

    int index = findStudent(id);

    if (index == -1) {
        printf("Student not found.\n");
        return;
    }

    for (int i = index; i < studentCount - 1; i++) {
        students[i] = students[i + 1];
    }

    studentCount--;
    printf("Student deleted successfully!\n");
}

/* Main menu */
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
            printf("Invalid menu input.\n");
            return 1;
        }

        switch (choice) {
            case 1:
                addStudent();
                break;

            case 2:
                searchStudent();
                break;

            case 5:
                displayAllStudents();
                break;

            case 6:
                deleteStudent();
                break;

            case 0:
                printf("Thank you! Goodbye.\n");
                break;

            case 3: case 4:
            case 7: case 8: case 9:
                printf("Feature coming soon!\n");
                break;

            default:
                printf("Invalid choice. Try again.\n");
        }

    } while (choice != 0);

    return 0;
}
