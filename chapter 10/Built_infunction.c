#include <stdio.h>
#include <string.h>
int main() {
    //Code
    char str[]="SUJOY";
    printf("The length is :%d\n",strlen(str));
    //*length

    char* ptr=str;

    printf("%s\n",str);
    printf("%s\n",ptr);

    str[0]='m';
    printf("%s\n",str);
    printf("%s\n",ptr);

    return 0;
}