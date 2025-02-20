#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_PATIENTS 1000

struct Patient {
    int id;
    char name[50];
    int age;
    char gender;
    char diagnosis[500];
};

void printMenu() {
    printf("\n**Patient Record Management System*\n\n\n");
    printf("*\n");
    printf("1. Add Patient\n");
    printf("2. View Patients\n");
    printf("3. Edit Patient\n");
    printf("4. Discharge Patient\n");
    printf("5. Search Patient\n");
    printf("6. Exit\n");
    printf("*\n\n\n");
}

int main() {
    struct Patient pat[MAX_PATIENTS];
    int choice;
    int patientCount = 0;

    while (1) {
        printMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                system("cls");
                if (patientCount >= MAX_PATIENTS) {
                    printf("Maximum number of patients reached.\n");
                    break;
                }
                printf("\n*ADD PATIENT'S DETAILS*\n\n\n");
                printf("\tEnter patient id: ");
                scanf("%d", &pat[patientCount].id);
                printf("\tEnter patient name: ");
                scanf(" %[^\n]", pat[patientCount].name);
                printf("\tEnter patient age: ");
                scanf("%d", &pat[patientCount].age);
                printf("\tEnter patient gender (M/F): ");
                scanf(" %c", &pat[patientCount].gender);
                printf("\tEnter patient's diagnosis: ");
                scanf(" %[^\n]", pat[patientCount].diagnosis);

                FILE *fp = fopen("patient.txt", "a");
                if (fp == NULL) {
                    printf("Error opening the file for appending.\n");
                    return 1;
                }

                if (patientCount == 0) {
                    fprintf(fp, "ID\tNAME\t\t\tAGE\tGENDER\tDiagnosis\n");
                }
                fprintf(fp, "%d\t%s\t\t\t%d\t%c\t%s\n", pat[patientCount].id, pat[patientCount].name, pat[patientCount].age, pat[patientCount].gender, pat[patientCount].diagnosis);
                fclose(fp);

                printf("\n\tPatient added successfully!\n\n");
                patientCount++;
                break;

            case 2:
                {
                    system("cls");
                    FILE *fp = fopen("patient.txt", "r");
                    if (fp == NULL) {
                        printf("Error opening the file for reading.\n");
                        return 1;
                    }

                    char line[256];
                    if (fgets(line, sizeof(line), fp) == NULL) {
                        printf("File is empty.\n");
                    } else {
                        printf("\n----------------------------------- List of Patients --------------------------------------------\n");
                        while (fgets(line, sizeof(line), fp)) {
                            struct Patient patient;
                            sscanf(line, "%d %[^\t] %d %c %s", &patient.id, patient.name, &patient.age, &patient.gender, patient.diagnosis);
                            printf("ID: %d\n", patient.id);
                            printf("Name: %s\n", patient.name);
                            printf("Age: %d\n", patient.age);
                            printf("Gender: %c\n", patient.gender);
                            printf("Diagnosis: %s\n", patient.diagnosis);
                            printf("-------------------------------------------------------------------------------------------------\n");
                        }
                    }

                    fclose(fp);
                    break;
                }

              case 3:
        {
            system("cls");
            fp=fopen("patient.txt", "r+");
            int id;
            char line[256];
            printf("\nEnter the ID of the patient to edit: ");
            scanf("%d", &id);
            getchar();
            FILE *tempFile = fopen("temp.txt", "w");
            if (tempFile == NULL)
            {
                printf("\nError opening a temporary file.\n");
                return 1;
            }
            if(fgets(line, sizeof(line), fp) == NULL)
            {
                printf("File is empty");
                fclose(tempFile);
                remove("temp.txt");
                break;
            }
            else
            {
                fprintf(tempFile,"%s", line);
            }
            int patientFound = 0;
            while (fgets(line, sizeof(line), fp))
            {
                struct Patient patient;
                sscanf(line, "%d %[^\t] %d %c %s", &patient.id, patient.name, &patient.age, &patient.gender, patient.diagnosis);
                if (patient.id == id)
                {
                    patientFound = 1;
                    printf("\nEnter new patient name: ");
                    scanf(" %[^\n]", patient.name);
                    printf("\nEnter new patient age: ");
                    scanf("%d", &patient.age);
                    printf("\nEnter new patient gender (M/F): ");
                    scanf(" %c", &patient.gender);
                    printf("\nEnter new patient's diagnosis: ");
                    scanf(" %[^\n]", patient.diagnosis);
                }
                fprintf(tempFile, "%d\t%s\t\t\t%d\t%c\t%s\n", patient.id, patient.name, patient.age, patient.gender, patient.diagnosis);
            }
            fclose(tempFile);
            if (!patientFound)
            {
                printf("\nPatient with ID %d not found!\n", id);
                remove("temp.txt");
            }
            else
            {
                fclose(fp);
                remove("patient.txt");
                rename("temp.txt", "patient.txt");
                remove("temp.txt");
                printf("\nPatient information updated!\n");
                fp = fopen("patient.txt", "a+");
            }
            fclose(fp);
            break;
        }

        case 4:
        {
            system("cls");
            fp=fopen("patient.txt", "r");
            int id;
            printf("\n\tEnter the ID of the patient to discharge: ");
            scanf("%d", &id);
            getchar();
            FILE *tempFile = fopen("temp.txt", "w");
            if (tempFile == NULL)
            {
                printf("\n\tError opening a temporary file.\n");
                return 1;
            }
            rewind(fp);
            char line[256];
            if(fgets(line, sizeof(line), fp) == NULL)
            {
                printf("\n\tFile is empty");
                fclose(tempFile);
                remove("temp.txt");
                break;
            }
            else
            {
                fprintf(tempFile,"%s", line);
            }
            int patientFound = 0;
            while (fgets(line, sizeof(line), fp))
            {
                struct Patient patient;
                sscanf(line, "%d%[^\t]%d%c%s", &patient.id, patient.name, &patient.age, &patient.gender, patient.diagnosis);
                if (patient.id == id)
                {
                    patientFound = 1;
                    continue;
                }
                fprintf(tempFile, "%d\t%s\t\t\t%d\t%c\t%s\n", patient.id, patient.name, patient.age, patient.gender, patient.diagnosis);
            }
            fclose(tempFile);
            if (!patientFound)
            {
                printf("\n\tPatient with ID %d not found!\n", id);
                remove("temp.txt");
            }
            else
            {
                fclose(fp);
                remove("patient.txt");
                rename("temp.txt", "patient.txt");
                remove("temp.txt");
                printf("\n\tPatient discharged!\n");
                fp = fopen("patient.txt", "a+");
            }
            fclose(fp);
            break;
        }
        case 5:
            system("cls");
            fp=fopen("patient.txt", "r");
            char name[50];
            printf("\nEnter the name of the patient to search for: ");
            scanf(" %[^\n]", name);
            rewind(fp);
            char line[100];
            if(fgets(line, sizeof(line), fp) == NULL)
            {
                printf("File is empty");
                break;
            }
            printf("\n*SEARCH PATIENTS*\n\n");
            struct Patient patient;
            int found = 0;
            while (fscanf(fp, "%d %[^\t] %d %c %s", &patient.id, patient.name, &patient.age, &patient.gender, patient.diagnosis) == 5)
            {
                if (strcmp(patient.name, name) == 0)
                {
                    found = 1;
                    printf("ID: %d\n", patient.id);
                    printf("Name: %s\n", patient.name);
                    printf("Age: %d\n", patient.age);
                    printf("Gender: %c\n", patient.gender);
                    printf("diagnosis: %s\n", patient.diagnosis);
                    printf("\n");
                }
            }
            if(!found)
            {
                printf("No patients with name '%s' found.\n", name);
            }
            fclose(fp);
            break;

            case 6:
                system("cls");
                printf("\n\tExiting the program\n");
                return 0;

            default:
                printf("Invalid choice\n");
                break;
        }

        char wantToContinue;
        printf("\nDo you want to continue the program? [Y/N]: ");
        scanf(" %c", &wantToContinue);

        if (wantToContinue == 'N' || wantToContinue == 'n')
            break;


        system("cls");
    }
return 0;
}