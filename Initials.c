#include <cs50.h>
#include <stdio.h>

#include <string.h>
#include <ctype.h>

int main(void)
{
    string s = get_string();//full name - coupple of words

    if (s != NULL)// if we have some name
    {
        int x = 0;//just incrementer for name's array
            while (s[x] != '\0')// to the end of name (phraze)
    	    {
    	        while (s[x] == 32)// in ASCII 32=' '
    	        {
    	            x++;//skip spaces in start
    	        }

    	        printf("%c", toupper(s[x]));//first letter after space is our initial, which we do capital letter
    	         
    	        while ((s[x] >= 'a' && s[x] <= 'z' ) || (s[x] >= 'A' && s[x] <= 'Z'))
    	        {
    	            x++;// skip other letters in the name
    	        }
    	        
    	        while (s[x] == 32)// in ASCII 32=' '
    	        {
    	            x++;//skip spaces in finish
    	        }
    
    	    }
    	    printf("\n");
    	    return 0;//we had initials
    }
    else
    {
        return 1;// we do not have initials
    }
}
