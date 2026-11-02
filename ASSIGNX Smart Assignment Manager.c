#include <stdio.h>
#include <string.h>

#define MAX 100
#define POINTS 10

struct Assignment
{
int id;
char title[100];
char subject[50];
int completed;
};

struct Assignment a[MAX];
int count = 0;
int totalPoints = 0;

// Function to save data
void saveData()
{
FILE *fp = fopen("assignments.dat", "wb");

if (fp == NULL)
{
    printf("\nError saving file!\n");
    return;
}

fwrite(&count, sizeof(int), 1, fp);
fwrite(&totalPoints, sizeof(int), 1, fp);
fwrite(a, sizeof(struct Assignment), count, fp);

fclose(fp);

}

// Function to load data
void loadData()
{
FILE *fp = fopen("assignments.dat", "rb");

if (fp == NULL)
    return;

if (fread(&count, sizeof(int), 1, fp) != 1 ||
    fread(&totalPoints, sizeof(int), 1, fp) != 1 ||
    count < 0 || count > MAX)
{
    count = 0;
    totalPoints = 0;
    fclose(fp);
    return;
}

if (fread(a, sizeof(struct Assignment), count, fp)
    != (size_t)count)
{
    count = 0;
    totalPoints = 0;
}

fclose(fp);

}

// Function to add assignment
void addAssignment()
{
if (count >= MAX)
{
printf("\nMaximum assignment limit reached!\n");
return;
}

a[count].id = count + 1;

printf("\nEnter Assignment Title: ");
scanf(" %99[^\n]", a[count].title);

printf("Enter Subject Name: ");
scanf(" %49[^\n]", a[count].subject);

a[count].completed = 0;

count++;

saveData();

printf("\nAssignment Added Successfully!\n");

}

// Function to view assignments
void viewAssignments()
{
int i;

if (count == 0)
{
    printf("\nNo Assignments Found!\n");
    return;
}

printf("\n========== ASSIGNMENT LIST ==========\n");

for (i = 0; i < count; i++)
{
    printf("\nID: %d\n", a[i].id);
    printf("Title: %s\n", a[i].title);
    printf("Subject: %s\n", a[i].subject);

    if (a[i].completed == 1)
        printf("Status: Completed\n");
    else
        printf("Status: Pending\n");

    printf("-------------------------------------\n");
}

}

// Function to complete assignment
void completeAssignment()
{
int id, i;

if (count == 0)
{
    printf("\nNo assignments available!\n");
    return;
}

printf("\nEnter Assignment ID to complete: ");
scanf("%d", &id);

for (i = 0; i < count; i++)
{
    if (a[i].id == id)
    {
        if (a[i].completed == 1)
        {
            printf("\nThis assignment is already completed!\n");
            return;
        }

        a[i].completed = 1;
        totalPoints += POINTS;

        printf("\nCongratulations!\n");
        printf("Assignment Completed Successfully!\n");
        printf("You earned %d points!\n", POINTS);
        printf("Total Points: %d\n", totalPoints);

        saveData();
        return;
    }
}

printf("\nInvalid Assignment ID!\n");

}

// Function to display points and level
void showPoints()
{
int level;
int remaining;

level = (totalPoints / 50) + 1;
remaining = 50 - (totalPoints % 50);

printf("\n========== YOUR REWARDS ==========\n");
printf("Total Points: %d\n", totalPoints);
printf("Current Level: %d\n", level);
printf("Points needed for next level: %d\n", remaining);

printf("\nKeep completing assignments to level up!\n");

}

// Function to display progress
void showProgress()
{
int i;
int completed = 0;
int pending = 0;

for (i = 0; i < count; i++)
{
    if (a[i].completed == 1)
        completed++;
    else
        pending++;
}

printf("\n========== PROGRESS REPORT ==========\n");
printf("Total Assignments: %d\n", count);
printf("Completed Assignments: %d\n", completed);
printf("Pending Assignments: %d\n", pending);

if (count > 0)
{
    printf("Completion Percentage: %.2f%%\n",
           (completed * 100.0) / count);
}
else
{
    printf("No assignments added yet!\n");
}

}

// Main function
int main()
{
int choice;

loadData();

printf("\n========================================\n");
printf("       WELCOME TO ASSIGNX\n");
printf("    SMART ASSIGNMENT MANAGER\n");
printf("========================================\n");

do
{
    printf("\n============== MAIN MENU ==============\n");

    printf("1. Add New Assignment\n");
    printf("2. View All Assignments\n");
    printf("3. Complete Assignment\n");
    printf("4. View Points and Level\n");
    printf("5. View Progress Report\n");
    printf("6. Exit\n");

    printf("\nEnter Your Choice: ");

    if (scanf("%d", &choice) != 1)
    {
        printf("\nInvalid input! Please enter a number.\n");

        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF);

        continue;
    }

    switch (choice)
    {
        case 1:
            addAssignment();
            break;

        case 2:
            viewAssignments();
            break;

        case 3:
            completeAssignment();
            break;

        case 4:
            showPoints();
            break;

        case 5:
            showProgress();
            break;

        case 6:
            saveData();

            printf("\nThank you for using AssignX!\n");
            printf("Keep Learning and Keep Earning Points!\n");
            break;

        default:
            printf("\nInvalid Choice! Please Try Again.\n");
    }

} while (choice != 6);

return 0;

}