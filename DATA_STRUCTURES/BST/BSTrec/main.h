#ifndef MAIN_H
#define MAIN_H

#include<stdio.h>
#include<stdlib.h>

#define DATA_NOT_FOUND -1
typedef int data_t;

data_t binarySearch_recursive(data_t *arr, data_t low, data_t high, data_t key);

#endif
