#include <iostream>
#include <string>
#include "MaxHeap.h"
using namespace std;

// Used for index in heap
int xX = -1;
Country heapX[10];
// Predefining the heap array
MaxHeap::MaxHeap(int cap)
{
    heap_sizeX = 0;
    capacityX = cap;
    Country temp;
    for(int i=0;i<10;i++)
    	heapX[i]=temp;


}


// Defining formation of the heap
void MaxHeap::heapFormX(Country k)
{
    xX++;

    heapX[xX] = k;

    int child = xX;

    Country tmp;

    int index = xX / 2;

    // Iterative heapiFy
    while (index >= 0) {

        // Just swapping if the element
        // is smaller than already
        // stored element
        if (heapX[index] < heapX[child]) {

            // Swapping the current index
            // with its child
            tmp = heapX[index];
            heapX[index] = heapX[child];
            heapX[child] = tmp;
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
void MaxHeap::heapSortX()
{
    int left1, right1;

    while (xX >= 0) {
        Country k;
        k = heapX[0];

        // Taking output of
        // the minimum element
        k.display();
        cout << "\n";

        // Set first element
        // as a last one
        heapX[0] = heapX[xX];

        // Decrement of the
        // size of the string
        xX = xX - 1;

        Country tmp;

        int index = 0;

        int length = xX;

        // Initilizing the left
        // and right index
        left1 = 1;

        right1 = left1 + 1;

        while (left1 <= length) {

            // Process of heap sort
            // If root element is
            // minimum than its both
            // of the child then break
            if (heapX[index] >= heapX[left1]
                && heapX[index] >= heapX[right1]) {
                break;
            }

            // Otherwise checking that
            // the child which one is
            // smaller, swap them with
            // parent element
            else {

                // Swapping
                if (heapX[left1] > heapX[right1]) {
                    tmp = heapX[index];
                    heapX[index] = heapX[left1];
                    heapX[left1] = tmp;
                    index = left1;
                }

                else {
                    tmp = heapX[index];
                    heapX[index] = heapX[right1];
                    heapX[right1] = tmp;
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
void MaxHeap::sortX(Country k[], int n)
{

    // To heapiFy
    for (int i = 0; i < n; i++) {
        heapFormX(k[i]);
    }


    // Calling heap sort function
    heapSortX();
}

