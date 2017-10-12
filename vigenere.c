#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    //checking the key
		if (argc != 2)
		{
		printf("Error message");
		return 1;
}
		string key = argv[1];
		unsigned long keyCount = strlen(key);

    //ckeking if entering symbol is letter
		for (int k = 0; k < keyCount; k++)
{
		if (!isalpha(key[k]))
{
		printf("Error message");
		return 1;
}
}
    //cheking if text box is empty
		string p = GetString();
		if (p == NULL)
{
		printf("Error message");
		return 1;
}
    //encryption
		for (int i = 0, l = 0; i < strlen(p); i++)
{
				if (isalpha(p[i]))
{
    //for lowercase letters
					  if (islower(p[i]))
						printf("%c", ((((p[i] - 'a') + ((tolower(key[l++%strlen(key)])) - 'a') % 26) % 26) + 'a'));
  
    //for uppercase letters
		  	  	if (isupper(p[i]))
			    	printf("%c", ((((p[i] - 'A') + ((toupper(key[l++%strlen(key)])) - 'A') % 26) % 26) + 'A'));
}
				else
				printf("%c", p[i]);
}
    //printing entcrypled text
		printf("\n");
		return 0;
}
