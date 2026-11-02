
#include "stud.h"

void stud_show(ST *ptr)
{
    if(ptr == NULL)
    {
        printf("No Records Found...\n");
        return;
    }

    printf("\n---------------------------------------\n");
    printf("%-10s %-15s %-15s\n","RollNo","Name","Percentage");
    printf("---------------------------------------\n");

    while(ptr)
    {
        printf("%-10d %-15.15s %-15.2f\n",ptr->roll,ptr->name,ptr->per);

        ptr = ptr->next;
    }

    printf("---------------------------------------\n");
}
