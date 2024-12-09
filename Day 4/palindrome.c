#include <stdio.h>
#include <string.h>


void strrev(char *str) {
    int i, j;
    char temp;
    int len = strlen(str);

    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main(){
    char str[20],rev[20];
    printf("Enter any word : ");
    scanf("%s",str);
    strcpy(rev,str);
    if (strrev(str)==rev)
    {
        printf("The given word is a palindrome \n");
    }
    else{
        printf("The given word is not a palindrome \n");
    }
    
}