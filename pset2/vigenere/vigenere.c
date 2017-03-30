// Vigenere Cipher
// Author: Shashanak Shekhar
// Solution to pset2 of cs50

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    //check if user give more or less than two arguments.
    if(argc != 2)
    {
        printf("Provide a valid encryption key.");
        return 1;
    }
    
    else
    {
        //loop through all the chars in keywords and check if they are alphabets.
        for(int i =0, n = strlen(argv[1]); i<n ;i++)
        {
            if(!isalpha(argv[1][i]))
            {
                printf("Enter a alphabetical key");
                return 1;
                //exit from program with exit value 1.
            }
        }
    }
    
    printf("plaintext:  ");
    string k = argv[1];
    int klen = strlen(k);
    string p = get_string();
    
    printf("ciphertext: ");
    
    for(int i = 0, j = 0, n = strlen(p); i<n ; i++)
    {
        //wrap key for plaintext.
        int key = tolower(k[j % klen]) - 97;
        
        if(isalpha(p[i]))
            {
                if(islower(p[i]))
                {
                    printf("%c",((p[i]-97+key)%26)+97); 
                    //for lower case letters.
                    j++; 
                    //increase key for next char.
                    
                }
                else if(isupper(p[i]))
                {
                    printf("%c",((p[i]-65+key)%26)+65); 
                    //for upper case letters.
                    j++;
                    
                }
            }
            
        else
            
        {
            printf("%c",p[i]); 
            //for non alphabetical values.
        }
    }
    printf("\n");
    return 0;
    //exit nicely.
}