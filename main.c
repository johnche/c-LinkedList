#include <stdio.h>
#include "linked_list.h"

int main() {
    LinkedList* list = newLinkedList();

    printf("only NULL\n");
    printLL(list);

    printf("pop empty list\n");
    leftLLPop(list);
    printLL(list);

    printf("single node case\n");
    addLLNode(list, 1);
    printLL(list);

    printf("pop left node with single\n");
    leftLLPop(list);
    printLL(list);

    printf("add nodes, 3 5 7\n");
    addLLNode(list, 3);
    addLLNode(list, 5);
    addLLNode(list, 7);
    printLL(list);

    printf("pop left node with multiple\n");
    leftLLPop(list);
    printLL(list);

    printf("add 1\n");
    addLLNode(list, 1);
    printLL(list);

    printf("dispose multiple nodes\n");
    disposeLL(list);

    printf("dispose single node\n");
    LinkedList* single_node_list = newLinkedList();
    addLLNode(single_node_list, 1);
    disposeLL(single_node_list);

    printf("dispose empty list\n");
    LinkedList* empty_list = newLinkedList();
    disposeLL(empty_list);
}
