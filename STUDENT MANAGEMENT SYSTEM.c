#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    char aadhaar[13];
    char apaar[15];
    char email[50];
    char phone[11];
};

void addStudent() {
    struct Student s;
    FILE *fp = fopen("students.dat", "ab");

    if (fp == NULL) {
        printf("File error!\n");
        return;
    }

    printf("\nEnter Student Name: ");
    scanf(" %[^\n]", s.name);

    printf("Enter Aadhaar Number (12 digits): ");
    scanf("%s", s.aadhaar);

    printf("Enter APAAR ID: ");
    scanf("%s", s.apaar);

    printf("Enter Email ID: ");
    scanf("%s", s.email);

    printf("Enter Phone Number (10 digits): ");
    scanf("%s", s.phone);

    fwrite(&s, sizeof(s), 1, fp);
    fclose(fp);

    printf("\nStudent record added successfully!\n");
}

void viewStudents() {
    struct Student s;
    FILE *fp = fopen("students.dat", "rb");

    if (fp == NULL) {
        printf("\nNo records found.\n");
        return;
    }

    printf("\n--- Student Records ---\n");

    while (fread(&s, sizeof(s), 1, fp)) {
        printf("\nName   : %s", s.name);
        printf("\nAadhaar: %s", s.aadhaar);
        printf("\nAPAAR  : %s", s.apaar);
        printf("\nEmail  : %s", s.email);
        printf("\nPhone  : %s", s.phone);
        printf("\n----------------------");
    }

    fclose(fp);
}

void searchByAadhaar() {
    struct Student s;
    char aadhaar[13];
    int found = 0;

    FILE *fp = fopen("students.dat", "rb");
    if (fp == NULL) {
        printf("\nNo records found.\n");
        return;
    }

    printf("\nEnter Aadhaar Number to search: ");
    scanf("%s", aadhaar);

    while (fread(&s, sizeof(s), 1, fp)) {
        if (strcmp(s.aadhaar, aadhaar) == 0) {
            printf("\nRecord Found!");
            printf("\nName   : %s", s.name);
            printf("\nAPAAR  : %s", s.apaar);
            printf("\nEmail  : %s", s.email);
            printf("\nPhone  : %s", s.phone);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("\nNo student found with this Aadhaar number.");

    fclose(fp);
}

int main() {
    int choice;

    do {
        printf("\n\n--- Student Identity Management System ---");
        printf("\n1. Add Student");
        printf("\n2. View All Students");
        printf("\n3. Search by Aadhaar");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addStudent(); break;
            case 2: viewStudents(); break;
            case 3: searchByAadhaar(); break;
            case 4: printf("\nExiting program.\n"); break;
            default: printf("\nInvalid choice!");
        }
    } while (choice != 4);

    return 0;
}
