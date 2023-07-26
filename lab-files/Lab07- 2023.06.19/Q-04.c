#include <stdio.h>

int main() {
//assigning variables
char c;

//getting input
printf("Enter a Character ");
scanf("%c",&c);

//switch statement
switch (c) {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("%c is a vowel letter",c);
        break;
    default:
        printf("%c is not a vowel letter",c);

   }
}
