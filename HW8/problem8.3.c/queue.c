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
    pq->items++;
    // 8. Add 1 to item count
    return 0;
}

int dequeue(Item *pitem, Queue *pq)
{
    // 1.If queue is empty do not do anything
    if (queue_is_empty(pq))
    {
        return -1;
    }
    // 2.Copy item to waiting variable
    Node *temp;
    temp = pq->front;
    *pitem = temp->item;
    // way 2 *pitem = pq -> front -> item;

    // 3. Reset front pointer to the next item in queue
    pq->front = pq->front->next;
    // 4. Free memory
    free(temp);

    // 5. Reset front and rear pointers to NULL, if last item is removed
    if (pq->items == 1)
    {
        pq->rear = NULL;
        pq->front = NULL;
    }
    // 6. Decrement item count
    pq->items--;
    return 0;
}

void printq(Queue *pq)
{
    printf("content of the queue: ");
    Node *p;
    for (p = pq->front; p != NULL; p = p->next)
    {
        printf("%d ", p->item);
    }
    printf("\n");
    return;
}
void empty_queue(Queue *pq)
{
    Item dummy;
    while (!queue_is_empty(pq))
    {
        dequeue(&dummy, pq);
    }
}