//////////////////////////////////////////////////////////////////////////////////////////////
// File Name:   LB Assignment 22.5
// Description:  Accept character from user and Display schedule A = 7,B = 8:30,C = 9:20,D = 10
// Author:      Anis Patel     
// Date:        10/06/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :         DisplaySchedule 
// Function Description :  it is used to Accept character from user and Display schedule A = 7,B = 8:30,C = 9:20,D = 10
// Author :                Anis Patel
// Date :                  10/06/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplaySchedule(char chDiv)
{
    if(chDiv == 'A' || (chDiv == 'a'))
    {
        printf("Your exam is at 7\n");
    }
    else if(chDiv == 'B'|| (chDiv == 'b'))
    {
        printf("Your exam is at 8:30\n");
    }
    else if(chDiv == 'C'|| (chDiv == 'c'))
    {
        printf("Your exam is at 9:20\n");
    }
    else if(chDiv == 'D'|| (chDiv == 'd'))
    {
        printf("Your exam is at 10\n");
    }
    
}
int main()
{
    char cValue = {'\0'};
    bool bRet = false;

    printf("Enter the Division : \n");
    scanf("%[^'\n']c",&cValue);

    DisplaySchedule(cValue);

    

    return 0;
}