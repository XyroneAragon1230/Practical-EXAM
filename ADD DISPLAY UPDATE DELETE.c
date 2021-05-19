#include<stdio.h>
#include<stdlib.h>
#define N 10
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
void update(){}
void delete(){}

int main(){
	
	int num_of_choice;
	do{
		printf("  \n\n\n         \t\tWELCOME TO RESTAURANT STAFF RECORDS SYSTEM!!!! ");
    	printf("\n\n------------Restaurant Staff Records----------\n");
    	printf("Enter \"1\" to Add new staff\n");
   		printf("Enter \"2\" to View all the staffs\n");
    	printf("Enter \"3\" to Update the information of the staff\n");
    	printf("Enter \"4\" to Delete a staff information\n");
    	printf("Enter \"0\" to Exit\n");
		
		printf("\nEnter your Choice: ");
		scanf ("%d", &num_of_choice);
    	
    	switch(num_of_choice){
    		case 1:
    			add();
    		break;
    		case 2:
    			display();
    		break;
    		case 3:
    			update();
    		break;
    		case 4:
    			delete();
    		break;
		}
	}while(num_of_choice!=0);
	
	return 0;
}
