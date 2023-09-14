o#include <stdio.h>
#include <string.h>
#include <ctype.h>
int encrypt(char plaintext[], char key[])
 {
    for (int i = 0; plaintext[i] != '\0'; i++) 
	{
        if (isalpha(plaintext[i])) 
		{
            if (islower(plaintext[i]))
                printf("%c", tolower(key[plaintext[i] - 'a']));
            else
                printf("%c", toupper(key[plaintext[i] - 'A']));
        } else 
		{
            printf("%c", plaintext[i]);
        }
    }
}
int main() 
{
    char key[100];
    char plaintext[100];
    printf("Enter the key : ");
    scanf("%s", key);
    printf("Enter the plaintext: ");
    scanf(" %[^\n]", plaintext);
    printf("Ciphertext: ");
    encrypt(plaintext, key);
    return 0;
}
