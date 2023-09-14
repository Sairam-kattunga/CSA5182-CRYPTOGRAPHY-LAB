#include <stdio.h>
#include <string.h>
#include <ctype.h>
int encrypt(char plaintext[], char key[])
 {
 	int j=0;
    int keyLength = strlen(key);
    for (int i =0; plaintext[i] != '\0'; i++) 
	{
        if (isalpha(plaintext[i])) 
		{
            char offset = islower(plaintext[i]) ? 'a' : 'A';
            char keyChar = key[j % keyLength];
            int shift = tolower(keyChar) - 'a';
            char encryptedChar = (plaintext[i] - offset + shift) % 26 + offset;
            printf("%c", encryptedChar);
            j++;
        } 
		else
		 {
            printf("%c", plaintext[i]);
        }
    }
}
int main() {
    char key[100];
    char plaintext[100];
    printf("Enter the key: ");
    scanf("%s", key);
    printf("Enter the plaintext: ");
    scanf(" %[^\n]", plaintext);
    printf("Ciphertext: ");
    encrypt(plaintext, key);
    return 0;
}
