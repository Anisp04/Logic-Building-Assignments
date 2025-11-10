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

int Difference(char *str)
{
    int iCountSmall = 0,iCountCapital = 0 ,iDiff = 0;
    
   while(*str != '\0')
   {
    if((*str >= 'a') && (*str <= 'z'))
    {
        iCountSmall++;
    }
    else if((*str >= 'A') && (*str <= 'Z'))
    {
        iCountCapital++;
    }
    str++;

   }
   iDiff = ((iCountSmall) - (iCountCapital));
   return iDiff;
    
}
int main()
{
    char Arr [20] = {'\0'};
    int iRet = 0;

    printf("Enter the String : \n");
    scanf("%[^\n]s",Arr);

   iRet =  Difference(Arr);
   printf("the Frequency of difference is  : %d",iRet);
    

    return 0;
}