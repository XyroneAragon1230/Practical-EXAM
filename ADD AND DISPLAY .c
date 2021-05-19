#include <stdio.h>
#include <stdlib.h>

#define N 10 //N is the number of employees. It is used for displaying the data

struct employee{
    int rollNo;
    char name[100];
    int age;
    char add[100];
    char bday[100];
    int num[11];
    char mail[50];
    float sal;
}emp[100];

void choice();
void add();
void display();

int main()
{
    choice();
}

void choice(){
    FILE *employees;
    int num_of_choice;
    printf("  \n\n\n         \t\tWELCOME TO RESTAURANT STAFF RECORDS SYSTEM!!!! ");
    printf("\n\n------------Restaurant Staff Records----------\n");
    printf("Enter \"1\" to Add new staff\n");
    printf("Enter \"2\" to View all the staffs\n");
    printf("Enter \"3\" to Update the information of the staff\n");
    printf("Enter \"4\" to Delete a staff information\n");
    scanf ("%i", &num_of_choice);

    switch(num_of_choice){
        case 1:
        system("cls");
        {
            add();
            printf("\n");
            printf("\nNew Staff added in the records\n");
            printf("\nPress any key to return to HomePage\n");
            getch();
            system("cls");
            choice();
        }
        break;

        case 2:
        system("cls");
        {
            display();

            printf("\nPress any key to return to HomePage\n");
            getch();
            system("cls");
            choice();
        }
        break;

        case 3:
        system("cls");
        {
            printf("update");

            printf("\nPress any key to return to HomePage\n");
            getch();
            system("cls");
            choice();
        }
        break;

        case 4:
        system("cls");
        {
            printf("delete");

            printf("\nPress any key to return to HomePage\n");
            getch();
            system("cls");
            choice();
        }
        break;
    }
}
void add(){
    FILE * file;
    file  = fopen("employeEes.c", "a+");

    int num, i, rollNo, rollnumInfile;

        printf("How many employees do you wanna add?: ");
        scanf("%d", &num);

        if (file == NULL){
            printf("\nERROR: File can't be found\n");
        }
        else
            for(i=1; i <= num; i++){
                printf("Enter Roll number: ");
                scanf("%d", &rollNo);
                    for(i=1; i <= 5; i++){
                        unique(rollNo);
                    }
                fprintf(file,"%d\n", emp->rollNo);

                printf("Enter Name: ");
                scanf("%s", &emp->name);
                fprintf(file,"%s\n", emp->name);
                fflush(stdin);

                printf("Enter Age: ");
                scanf("%d", &emp->age);
                fprintf(file,"%d\n", emp->age);
                fflush(stdin);

                printf("Enter Address: ");
                scanf("%s", &emp->add);
                fprintf(file,"%s\n", emp->add);
                fflush(stdin);

                printf("Enter Birthday: ");
                scanf("%s", &emp->bday);
                fprintf(file,"%s\n", emp->bday);

                printf("Enter Phone Number: ");
                scanf("%s", &emp->num);
                fprintf(file,"%s\n", emp->num);

                printf("Enter Email: ");
                scanf("%s", &emp->mail);
                fprintf(file,"%s\n", emp->mail);

                printf("Enter Salary: ");
                scanf("%f", &emp->sal);
                fprintf(file,"%f\n", emp->sal);
        }
    fclose(file);
}


void display(){
    FILE * file;
    file  = fopen("employeEes.c", "r");
    int i;

        printf("----------Staff Records----------\n");
        printf("\n\n");

        if (file == NULL){
            printf("\nERROR: File can't be found\n");
        }
        else

            for(i=1; i <= N; i++){
                fscanf(file, "%d", &emp->rollNo);
                printf("Roll Number:%d\n", emp->rollNo);

                fscanf(file, "%s", &emp->name);
                printf("Name: %s\n", emp->name);
                fflush(stdin);

                fscanf(file, "%d", &emp->age);
                printf("Age: %d\n", emp->age);
                fflush(stdin);

                fscanf(file, "%s", &emp->add);
                printf("Address: %s\n", emp->add);
                fflush(stdin);

                fscanf(file, "%s", &emp->bday);
                printf("Birthday: %s\n", emp->bday);

                fscanf(file,"%s", &emp->num);
                printf("Phone Number: %s\n", emp->num);

                fscanf(file,"%s", &emp->mail);
                printf("Email Add: %s\n", emp->mail);

                fscanf(file,"%f", &emp->sal);
                printf("Salary: %.2f\n", emp->sal);

                printf("\n\n");
            }
    fclose(file);
}

int unique(int rollNo){
    FILE * file;
    file  = fopen("employeEes.c", "r");

    int num, i, rollnumInfile;

        if(rollNo!=0){
            for(i=0; i<5; i++){
                fscanf(file,"%d", &emp[i].rollNo);
                fscanf(file,"%s", &emp[i].name);
                fscanf(file,"%d", &emp[i].age);
                fscanf(file,"%s", &emp[i].add);
                fscanf(file,"%s", &emp[i].bday);
                fscanf(file,"%d", &emp[i].num);
                fscanf(file,"%s", &emp[i].mail);
                fscanf(file,"%f", &emp[i].sal);
                rollnumInfile = emp[i].rollNo;

                if(rollNo==rollnumInfile){
                    printf("ERROR: This roll number already exists.\n");
                    printf("Please enter another roll number: ");
                    scanf("%d", &rollNo);
                    emp->rollNo=rollNo;

                    return emp->rollNo;
                }
            }
        }
}
