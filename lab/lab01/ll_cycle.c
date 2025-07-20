#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    /* your code here */
    node *p = head, *q = head;
    while (q != NULL && q->next != NULL && q->next->next != NULL) {
        p = p->next;
        q = q->next->next;
        if (p == q && p != NULL) {
            return 1;
        }
    }
    return 0;
}
