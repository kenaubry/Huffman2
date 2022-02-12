#include "sort.h"

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int occur_letter(char c, char *str)
{
    int occur = 0;
    int i = 0;

    while (str[i])
    {
        if (str[i] == c)
            occur++;
        i++;
    }    
    return (occur);
}

int *sort_occur(char *letters, char *str)
{
    int *occur;
    int size = ft_strlen(letters);
    int i = 0;
    occur = malloc(sizeof(int) * size);
    if (!occur)
        return (0);
    while (i < ft_strlen(letters))
    {
        occur[i] = occur_letter(letters[i], str);
        i++;
    }
    return (occur);
}