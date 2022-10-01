#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

void initialize_queue(Queue *pq)
{
    pq->front = pq->rear = NULL;
    pq->items = 0;
}

int queue_is_full(const Queue *pq)
{
    return pq->items == MAXQUEUE;
}

int queue_is_empty(const Queue *pq)
{
    return pq->items == 0;
}

int queue_item_count(const Queue *pq)
{
    return pq->items;
}

int enqueue(Item item, Queue *pq)
{
    if (queue_is_full(pq))
    {
        // 1. if the queue if full return -1

        return -1;
    }
    Node *new_node = (Node *)malloc(sizeof(Node));
    // 2. Create a new node
    new_node->item = item;
    // 3. Copy item to the node
    new_node->next = NULL;
    // 4. Set next pointer to NULL
    if (queue_is_empty(pq))
    {
        // 5.Set front node if queue was empty
        pq->front = new_node;
        pq->rear = new_node;
    }
    else
    {
        // 6.Set current rear node’s next
        //   pointer to new node if queue already exists
        pq->rear->next = new_node;
        pq->rear = new_node;
        // 7. Set rear pointer to new node
    }
    pq->items ++;
    // 8. Add 1 to item count
    return 0;
}

int dequeue(Item *pitem, Queue *pq)
{
    // add missing stuff
    return 0;
}

void empty_queue(Queue *pq)
{
    Item dummy;
    while (!queue_is_empty(pq))
    {
        dequeue(&dummy, pq);
    }
}