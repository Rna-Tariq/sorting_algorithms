#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include<stdio.h>
#include <time.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void swap(listint_t **list, listint_t *current, listint_t *previous);
void swap2(int *array, size_t start, size_t min);
void swap3(int *array, size_t size, int low, int high);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

#endif