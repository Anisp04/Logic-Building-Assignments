//////////////////////////////////////////////////////////////////////////////////////////////
// File Name:   LB Assignment 24.3
// Description:  Accept string from user and check whether it has vowel or not
// Author:      Anis Patel     
// Date:        10/06/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#include<stdbool.h>


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :         ChkVowel 
// Function Description :  it is used to Accept string from user and check whether it has vowel or not
// Author :                Anis Patel
// Date :                  10/06/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool ChkVowel(char *str)
{ 
    bool bFlag = false;
    
   while(*str != '\0')
   {
    if(*str == 'A'||*str == 'E'||*str == 'I'||*str == 'O'||*str == 'U'
     || *str == 'a'||*str == 'e'||*str == 'i'||*str == 'o'||*str == 'u')
    {
        bFlag = true;
        break;
    }
    str++;
    }
    return bFlag;

}
int main()
{
    char Arr [20] = {'\0'};
    bool bRet = 0;

    printf("Enter the String : \n");
    scanf("%[^\n]s",Arr);

   bRet =  ChkVowel(Arr);
   if(bRet == true)
   {
     printf("the Vowels are present\n");
   }
   else
   {
    printf("the Vowels are not present\n");
   }
    

    return 0;
}