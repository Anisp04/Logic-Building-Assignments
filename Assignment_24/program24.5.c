
//////////////////////////////////////////////////////////////////////////////////////////////
// File Name:   LB Assignment 24.3
// Description:  Accept string from user and Display Difference between capital and small alphabets
// Author:      Anis Patel     
// Date:        10/06/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :         Difference 
// Function Description :  it is used to Accept string from user and Display Difference between capital and small alphabets
// Author :                Anis Patel
// Date :                  10/06/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Revx (char *str)
{
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';
    
   start = str;
   end = str;

    while(*end != '\0')
    {
        end++;
    }
    end--;
    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
         end--; 
    }
    
    
}
int main()
{
    char Arr [20] = {'\0'};
    

    printf("Enter the String : \n");
    scanf("%[^\n]s",Arr);

    Revx(Arr);
   printf("The updated string is : %s\n",Arr);
    

    return 0;
}