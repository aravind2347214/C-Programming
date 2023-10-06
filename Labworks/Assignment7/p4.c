// Write a C program to Encrypt and Decrypt a password
#include <stdio.h>
#include <string.h>

void encryptionFunction(char pass[],int Ekey)
{
     int i;
    for(i=0;i<strlen(pass);++i)
        pass[i] = pass[i] - Ekey;
}

void decryptionFunction(char pass[],int Ekey)
{
     int i;
    for(i=0;i<strlen(pass);++i)
        pass[i] = pass[i] + Ekey;
    
}
int main()
{
    char pword[20] ;
    printf("Enter the password: \n ");
    scanf("%s",pword);
    printf("Password     = %s \n",pword);
    encryptionFunction(pword,0xFBCD);
    printf("Encrypted value = %s \n",pword);
    decryptionFunction(pword,0xFBCD);
    printf("Decrypted value = %s \n",pword);
    return 0;
}