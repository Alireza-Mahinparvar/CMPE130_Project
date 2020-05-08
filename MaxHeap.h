
#include "MinHeap.h"
class MaxHeap
{
    //extern Country heap[]; // pointer to array of elements in heap
    int capacityX; // maximum possible size of min heap
    int heap_sizeX; // Current number of elements in min heap
public:
    // Constructor
    MaxHeap(int);
    void heapFormX(Country );
    void sortX(Country k[], int n);
    void heapSortX();

    // Deletes a key stored at index i
    //void deleteKey(Country );

    // Inserts a new key 'k'
    //void insertKey(Country );
};
