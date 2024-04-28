#include "sort.h"
/**
 * swap - swap
 * @befor: first node
 * @after: second node
 */
void swap(listint_t *before, listint_t *after)
{
    if (after->next != NULL)
        after->next->prev = before;
    if (before->prev != NULL)
        before->prev->next = after;
            
    before->next = after->next;
    after->prev = before->prev;
    before->prev = after;
    after->next = before;
}
/**
 * insertion_sort_list - insertion sort linked list (brings the smallest element at the beginning)
 * @list: double linked list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
    listint_t *key, *checker;

    if (list == NULL || *list == NULL || (*list)->next == NULL)
        return;
    key = (*list)->next;
    while (key != NULL)
    {
        checker = key;
        key = key->next;
        while(checker && checker->prev)
        {
            if (checker->n < checker->prev->n)
            {
                swap(checker->prev, checker);
                if (checker->prev == NULL)
                    *list = checker;
                print_list((const listint_t *)*list);
            }
            else
                checker = checker->prev;
        }
    }
}