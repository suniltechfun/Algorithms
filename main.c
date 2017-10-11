#include <stdio.h>

#define GENERIC_STACK           0
#define TEST_MAIN               0
#define GRAPH_ADJ_MATRIX        0
#define GRAPH_ADJ_LIST          0
#define ARRAY_QUEUE             0
#define LINKED_LIST_QUEUE		0
#define ARRAY_STACK				0
#define ARRAY_STACK_STATIC		0
#define LINKED_LIST_STACK		0
#define DOUBLY_LINKED_LIST		0
#define PRIORITY_QUEUE			0
#define BINARY_MAX_HEAP			0
#define SORTING_ALGORITHMS		0
#define QUICK_SORT_ALGORITHM	1
#define COUNTING_SORT    		0
#define BACKTRACKING_KT			0
#define SIMPLE_HASH				0
#define HASHING_1				0
#define HASHING_2				0

int main()
{
    printf("\n In MAIN()!\n");

#if GENERIC_STACK
    generic_stack_main();
#endif // GENERIC_STACK

#if TEST_MAIN
    test_main();
#endif // TEST_MAIN

#if GRAPH_ADJ_MATRIX
    graph_adj_matrix_main();
#endif // GRAPH_ADJ_MATRIX

#if GRAPH_ADJ_LIST
    graph_adj_list_main();
#endif // GRAPH_ADJ_LIST

#if ARRAY_QUEUE
	array_queue_main();
#endif // ARRAY_QUEUE

#if LINKED_LIST_QUEUE
	linked_list_queue_main();
#endif // LINKED_LIST_QUEUE

#if ARRAY_STACK
	array_stack_main();
#endif // ARRAY_STACK

#if ARRAY_STACK_STATIC
	array_stack_simple_main();
#endif // ARRAY_STACK_STATIC

#if LINKED_LIST_STACK
	linked_list_stack_main();
#endif // LINKED_LIST_STACK

#if DOUBLY_LINKED_LIST
	doubly_linked_list_main();
#endif // DOUBLY_LINKED_LIST

#if PRIORITY_QUEUE
	priority_queue_main();
#endif // PRIORITY_QUEUE

#if BINARY_MAX_HEAP
	binary_max_heap_main();
#endif // BINARY_MAX_HEAP

#if SORTING_ALGORITHMS
	sortingAlgorithms_main();
#endif // SORTING_ALGORITHMS

#if QUICK_SORT_ALGORITHM
	quick_sort_main();
#endif // QUICK_SORT_ALGORITHM

#if COUNTING_SORT
	counting_sort_main();
#endif // COUNTING_SORT
#if BACKTRACKING_KT
	backTrackingKnightsTour_main();
#endif // BACKTRACKING_KT

#if SIMPLE_HASH
	simple_hash_main();
#endif // SIMPLE_HASH

#if HASHING_1
	hashing_1_main();
#endif // HASHING_1

#if HASHING_2
	hashing_2_main();
#endif // HASHING_2
	getche();
    return 0;
}


