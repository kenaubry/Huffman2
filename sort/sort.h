#ifndef SORT_H
# define SORT_H

# include <stdlib.h>
# include <stdio.h>


// SORT_OCCUR //
int *sort_occur(char *letters, char *str);
int ft_strlen(char *str);

// SORT_CARAC //
char    *sort_carac(char *str); // main function
int     doublon(char *letters, char letter); // check doublon in string
int     nb_char(char *str); // check the number total of different characters in string

#endif