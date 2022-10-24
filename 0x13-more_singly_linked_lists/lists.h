#ifndef _LISTS_H_
#define _LISTS_H_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * struct listint_s - singly linked list
 * @h: pionter to head node
 *
 * Return: the number of nodes
 * 
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

int putchar(char c);
size_t print_listint(const listint_t *h);
#endif