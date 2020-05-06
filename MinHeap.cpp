#include <iostream>
#include <string>
#include "MinHeap.h"
using namespace std;

// Used for index in heap
int x = -1;
Country heap[10];
// Predefining the heap array
MinHeap::MinHeap(int cap)
{
    heap_size = 0;
    capacity = cap;
    Country temp;
    for(int i=0;i<10;i++)
    	heap[i]=temp;


}


// Defining formation of the heap
void MinHeap::heapForm(Country k)
{
    x++;

    heap[x] = k;

    int child = x;

    Country tmp;

    int index = x / 2;

    // Iterative heapiFy
    while (index >= 0) {

        // Just swapping if the element
        // is smaller than already
        // stored element
        if (heap[index].name > heap[child].name) {

            // Swapping the current index
            // with its child
            tmp = heap[index];
            heap[index] = heap[child];
            heap[child] = tmp;
            child = index;

            // Moving upward in the
            // heap
            index = index / 2;
        }
        else {
            break;
        }
    }
}

// Defining heap sort
void MinHeap::heapSort()
{
    int left1, right1;

    while (x >= 0) {
        Country k;
        k = heap[0];

        // Taking output of
        // the minimum element
        k.display();
        cout << "\n";

        // Set first element
        // as a last one
        heap[0] = heap[x];

        // Decrement of the
        // size of the string
        x = x - 1;

        Country tmp;

        int index = 0;

        int length = x;

        // Initilizing the left
        // and right index
        left1 = 1;

        right1 = left1 + 1;

        while (left1 <= length) {

            // Process of heap sort
            // If root element is
            // minimum than its both
            // of the child then break
            if (heap[index].name <= heap[left1].name
                && heap[index].name <= heap[right1].name) {
                break;
            }

            // Otherwise checking that
            // the child which one is
            // smaller, swap them with
            // parent element
            else {

                // Swapping
                if (heap[left1].name < heap[right1].name) {
                    tmp = heap[index];
                    heap[index] = heap[left1];
                    heap[left1] = tmp;
                    index = left1;
                }

                else {
                    tmp = heap[index];
                    heap[index] = heap[right1];
                    heap[right1] = tmp;
                    index = right1;
                }
            }

            // Changing the left index
            // and right index
            left1 = 2 * left1;
            right1 = left1 + 1;
        }
    }
}

// Utility function
void MinHeap::sort(Country k[], int n)
{

    // To heapiFy
    for (int i = 0; i < n; i++) {
        heapForm(k[i]);
    }


    // Calling heap sort function
    heapSort();
}
