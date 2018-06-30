#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char ect(char t, int k);//Encryption function of a single character
//int k;//our key

int main(int argc, string argv[])
{
    if (argc == 2)// must be 1 argument after program name and it must be number
    {

        int k = atoi(argv[1]);// now argumet become our key number

        printf("plaintext: ");
        string pt = get_string();
        
        printf("ciphertext: ");
        for (int i = 0; i < strlen(pt); i++)//Split the string into symbols
	    {
	        char t = pt[i];// Take 1 character
	        printf("%c", ect (t, k));//Output the encrypted character by our function
	    }
        printf("\n");
        return 0;
        
    }
    
    else
    {
        printf("Usage: ./caesar k\n");
        return 1;
    }
}

char ect(char t, int k)//Encryption function of a single character
{

    int ct;
    if (t>='A' && t<='Z')
    {
        ct = t-65;//to alphabetical order for capital letters
        ct = (ct + k)%26;//Encrypted by algorithm
        ct = ct + 65;// back to ASCII
    }
    
    else if (t>='a' && t<='z')
    {
        ct = (t-97 + k)%26 + 97;// do with lower letters same as we do with capital letters but in 1 line
    }   
    
    else// if not a letter
    {
        ct = t;
    }
    return ct;
}
