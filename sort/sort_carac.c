// a utiliser avant huffman
// deux fonctions pour recup les caracteres et leurs occurences
// prend une chaine de caractere en parametre
// une fonction va renvoyer tous les caracteres sans doublon
// la seconde va renvoyer le nombre d'occurence dans l'ordre d'apparition des caracteres

#include "sort.h"

int nb_char(char *str)
{
    int i = 0;
    char   dico[127];
    int size = 0;

    while (str[i])
    {
        if (str[i] != dico[str[i]])
        {
            dico[str[i]] = str[i];
            size++;
        }
        i++;
    }
    return (size);
}  

int doublon(char *letters, char letter)
{
    int i = 0;

    while (letters[i])
    {
        if (letter == letters[i])
            return (1);
        i++;
    }    
    return (0);
}

char    *sort_carac(char *str)
{
    char *letters;
    int size = nb_char(str);
    int i = 0;
    int j = 0;

    letters = malloc(sizeof(char) * (size + 1));
    if (!letters)
        return (NULL);
    while (i < size)
    {
        if (doublon(letters, str[j]) == 0)
        {
            letters[i] = str[j];
            i++;
        }
        j++;
    }
    letters[size] = '\0';
    return (letters);
}
