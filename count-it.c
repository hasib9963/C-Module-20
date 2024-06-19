#include <stdio.h>
#include<string.h>
int main()
{
    char S[1000];
    int small=0,capital=0,space=0;
    fgets(S, sizeof(S), stdin);
    int i=0;
    while (S[i] != '\0')
    {
        if (islower(S[i]))
            small++;
        else if (isupper(S[i]))
            capital++;
        else if (isspace(S[i]))
            space++;
        i++;
    }
    printf("Capital - %d\n",capital);
    printf("Small - %d\n",small);
    printf("Spaces - %d\n",space);
    return 0;
}

