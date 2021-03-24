#include <stdbool.h>
#include <ctype.h>
#include <stdio.h> 
#include <string.h>

bool retval = false;
bool IsIsogram(char *str) 
{   
    
    if (isalpha(*str) || *str == '_') 
    {
      if( (str+1)[0] == '\0')
      {
        retval = true;
      }
      else if( strchr((str+1), tolower(*str)) == NULL && strchr((str+1), toupper(*str)) == NULL )
      {
        printf("%s not contains %c %c\n", (str+1), tolower(*str), toupper(*str) );
        str++;
        IsIsogram(str);
      } 
      else{
        printf("%s Contains %c %c\n", (str+1), tolower(*str), toupper(*str) );
        retval = false;
      } 

    }
    else 
    {
       printf("Hiba: %c\n", *str);
       retval = false; 
    }
     
    return retval;
}
