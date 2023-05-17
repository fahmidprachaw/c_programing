#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char str[1001];
    gets(str);

    int capital = 0, small = 0, space = 0;

    int i = 0;

    while (str[i] !='\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            small++;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            capital++;
        }
        else if (str[i] == ' ')
        {
            space++;
        }
        
        i++;
        
    }
    
    printf("Capital - %d\nSmall - %d\nSpaces - %d", capital, small, space);
    return 0;
}