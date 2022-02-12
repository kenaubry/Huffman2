NAME = huffman

all: 
	gcc sort/sort_carac.c sort/sort_occur.c algo/huffman.c main.c -o $(NAME)

clean:
	rm -rf sort_carac.o sort_occur.o huffman.o main.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re 
