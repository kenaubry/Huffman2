#include "algo/huffman.h"
#include "sort/sort.h"

int main(int ac, char **av)
{
    char *letters;
    int *occur;
    int i = 0;
    int size;
    
    if (ac != 2)
    {
        printf("Wrong number of arguments.");
        return (0);
    }
    letters = sort_carac(av[1]);
    occur = sort_occur(letters, av[1]);
    size = ft_strlen(letters);
    printf(" -------------------\n| STRING EN ENTREE |\n -------------------\n\n%s\n\n", av[1]);
    printf(" ------------------------------\n| FONCTION DE TRI DE LA STRING |\n ------------------------------\n\n");
    while (letters[i])
    {
        printf("%c = %d\n", letters[i], occur[i]);
        i++;
    }
    printf("\n -----------------------\n| ALGORITHME DE HUFFMAN |\n -----------------------\n\n");
    HuffmanCodes(letters, occur, size);
    return (0);
}