#include <stdio.h>
#include "linked_list.h"

int main() {
    LinkedList* list = newLinkedList();

    printf("only NULL\n");
    printLinkedList(list);

    printf("pop empty list\n");
    leftLLPop(list);
    printLinkedList(list);

    printf("single node case\n");
    addLLNode(list, 1);
    printLinkedList(list);

    printf("pop left node with single\n");
    leftLLPop(list);
    printLinkedList(list);

    printf("add nodes, 3 5 7\n");
    addLLNode(list, 3);
    addLLNode(list, 5);
    addLLNode(list, 7);
    printLinkedList(list);

    printf("pop left node with multiple\n");
    leftLLPop(list);
    printLinkedList(list);

    printf("add 1\n");
    addLLNode(list, 1);
    printLinkedList(list);

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
