
#include "Hash.h"
class MinHeap
{
    //extern Country heap[]; // pointer to array of elements in heap
    int capacity; // maximum possible size of min heap
    int heap_size; // Current number of elements in min heap
public:
    // Constructor
    MinHeap(int);
    void heapForm(Country );
    void sort(Country k[], int n);
    void heapSort();

    // Deletes a key stored at index i
    //void deleteKey(Country );

    // Inserts a new key 'k'
    //void insertKey(Country );
};
