/*Make an array of struct Student given below and tell which student got the highest marks and which student got the lowest marks?

struct Student
{
    char name[100];
    int marks;
    int roll;
    char section;
    int whichClass;
};

For example:
Input
“Akib” 91 29 ‘C’ 9
“Sakib” 99 31 ‘D’ 9
“Rakib” 57 45 ‘D’ 9

Output:
Highest - “Sakib” 99 31 ‘D’ 9
Lowest - “Rakib” 57 22 ‘D’ 9
*/

#include<stdio.h>

struct Student
{
    char name[100];
    int marks;
    int roll;
    char section;
    int whichClass;
};

int main ()
{
    struct Student men[3];
    struct Student Highest;
    struct Student Lowest;
    int high = 0,low = 0;
    for(int i=0; i<3; i++)
    {
        scanf("%s %d %d %c %d",&men[i].name,&men[i].marks,&men[i].roll,&men[i].section,&men[i].whichClass);
        if(high < men[i].marks)
        {
            high = men[i].marks;
            Highest = men[i];
        }
        low = men[0].marks;
        Lowest = men[0];
        if(low > men[i].marks)
        {
            low = men[i].marks;
            Lowest = men[i];
        }


    }
    printf("\n\n\n");
    printf("Highest => %s %d %d %c %d \n",Highest.name,Highest.marks,Highest.roll,Highest.section,Highest.whichClass);
    printf("Lowest => %s %d %d %c %d \n",Lowest.name,Lowest.marks,Lowest.roll,Lowest.section,Lowest.whichClass);
    return 0;
}


