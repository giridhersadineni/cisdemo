#include<stdio.h>
#include<stdlib.h>
void studentmodule();
void exammodule();

int main(){
    int modopt;
    system("clear");
    printf("\tCOLLEGE INFORMATION SYSTEM\n\n");
    printf("SELECT MODULE\n");
    printf("1. STUDENT INFO\n");
    printf("2. EXAMS INFO\n");
    scanf("%d",&modopt);

    switch (modopt)
    {
        case 1:
                studentmodule();
                  break;
        case 2:
                exammodule();
                  break;

        default:
            break;
    }
    return 0;
}


void studentmodule(){
    int modopt;
    system("clear");
    printf("\tCOLLEGE INFORMATION SYSTEM\n\n");
    printf("SELECT MODULE\n");
    printf("1. ADD STUDENT\n");
    printf("2. VIEW ALL STUDENTS DATA\n");
    printf("3. SEARCH A STUDENT\n");
    printf("4. EDIT STUDENT RECORD\n");
    printf("5. DELETE STUDENT RECORD\n");
    printf("6. PRINT STUDENT DETAILS\n");
    scanf("%d",&modopt);

    switch (modopt)
    {
        case 1:
                studentmodule();
                  break;
        case 2:
                exammodule();
                  break;

        default:
            break;
    }

}

void exammodule(){
    int modopt;
    printf("\tCOLLEGE INFORMATION SYSTEM\n\n");
    printf("SELECT MODULE\n");
    printf("1. STUDENT INFO\n");
    printf("2. EXAMS INFO\n");
    scanf("%d",&modopt);

    switch (modopt)
    {
        case 1:
                studentmodule();
                  break;
        case 2:
                exammodule();
                  break;

        default:
            break;
    }

}