#include "sort.h"

int main()
{
    char str[] = "aaaabbbbbbccccccddddddabceekenzaeejjj";
    char *letters;
    int *occur;
    int i = 0;
    
    letters = sort_carac(str);
    occur = sort_occur(letters, str);
    while (occur[i] != 0)
    {
        printf("%c = %d\n", letters[i], occur[i]);
        i++;
    }
    return (0);
}