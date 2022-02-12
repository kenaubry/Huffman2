#ifndef HUFFMAN_H
# define HUFFMAN_H

# include <stdio.h>
# include <stdlib.h>
  
#define MAX_TREE_HT 100

struct MinHeapNode {
    char data;
    unsigned freq;
    struct MinHeapNode *left, *right;
};

struct MinHeap {
    unsigned size;
    unsigned capacity;
    struct MinHeapNode** array;
};

void HuffmanCodes(char data[], int freq[], int size);

#endif