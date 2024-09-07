#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

#define SUCCESS 0
#define FAILURE -1


void swap(int *a, int *b);
void merge(int *arr, int size, int *Lsa, int mid, int *Rsa, int rsize);
int merge_sort(int *arr, int size);

#endif
