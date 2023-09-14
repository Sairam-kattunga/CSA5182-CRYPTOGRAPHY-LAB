#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
    unsigned int a[3][3] = { { 6, 24, 1 }, { 13, 16, 10 }, { 20, 17, 15 } };
    unsigned int b[3][3] = { { 8, 5, 10 }, { 21, 8, 21 }, { 21, 12, 8 } };
    int i, j;
    unsigned int c[20], d[20];
    char msg[20];
    int t = 0;
    ;
    printf("Enter plain text\n ");
    scanf("%s", msg);
    for (i = 0; i < 3; i++) {
    	if (islower(msg[i]))
    	{
        c[i] = msg[i] - 'a';
    }
    else
    {
    	c[i]=msg[i]-'A';
	}
        printf("%d ", c[i]);
    }
    for (i = 0; i < 3; i++) {
        t = 0;
        for (j = 0; j < 3; j++) {
            t = t + (a[i][j] * c[j]);
        }
        d[i] = t % 26;
    }
    printf("\nEncrypted Cipher Text :");
    for (i = 0; i < 3; i++){
    	if (islower(msg[i])){

        printf(" %c", d[i] +'a');
    }
    else
    {
    	printf(" %c", d[i] +'A');
	}
}
    for (i = 0; i < 3; i++) {
        t = 0;
        for (j = 0; j < 3; j++) {
            t = t + (b[i][j] * d[j]);
        }
        c[i] = t % 26;
    }
    printf("\nDecrypted Cipher Text :");
    for (i = 0; i < 3; i++)
    {
    	if(islower(msg[i]))
    	{
        printf(" %c", c[i] +'a');
    }
    else
    {
    	printf(" %c", c[i] +'A');
	}
	}
    return 0;
}

