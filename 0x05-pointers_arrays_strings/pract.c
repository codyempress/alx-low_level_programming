#include <stdio.h>

void rev(char *str)
{
	    str = "Love";
	        int n = sizeof(*str) + 1;
		    
		    str[n] = '\0';
		        int i = 0;
			    for (*(str + n) = '\0'; *(str + n - i) < '\0'; i++)
				        {
						        putchar(*(str + n - i));
							    }
}
