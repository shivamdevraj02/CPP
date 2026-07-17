// Heap is complete binnary tree 

// All levels are completely filled except the last level.

// At last level , nodes should be filled from left side.

// heaps are of two types :--

// 1) Max heap :-- it must be complete binnary tree and parent node should be greater than or equal to child node .

// 2) Min heap :-- parent node should be less than or equal to its child node.

// for parent index : i ====  (2*1)+1  (for left) and (2*i)+2  (for the right child)

// for child index : i ====== parent : (i-1) /2 


#include<iostream>
using namespace std;

class MaxHeap {

    int *arr;
    int size;
    int total_size;

public:

    MaxHeap(int n) {
        arr = new int[n];
        size = 0;
        total_size = n;
    }

    void insert(int value) {

        if (size == total_size) {
            cout << "Heap Overflow\n";
            return;
        }

        arr[size] = value;
        int index = size;
        size++;

        while (index > 0 && arr[(index - 1) / 2] < arr[index]) {
            swap(arr[index], arr[(index - 1) / 2]);
            index = (index - 1) / 2;
        }

        cout << value << " is inserted into heap\n";
    }


    
    // Heapify
    void Heapify(int ind) {
        int smallest = ind;
        int left = 2 * ind + 1;
        int right = 2 * ind + 2;

        // 'smallest' will store the index of the elemet which is smaller between parent, left child and right child
        if(left < size && arr[left] < arr[smallest])
        smallest = left;
        if(right < size && arr[right] < arr[smallest])
        smallest = right;

        if(smallest != ind) {
            swap(arr[ind], arr[smallest]);
            Heapify(smallest);
        }
    } 

    // Delete Operation
    void Delete() {
        if(size == 0) {
            cout << "Heap Underflow" << endl;
            return;
        }

        cout << arr[0] << " deleted from the Heap" << endl;
        arr[0] = arr[size - 1]; // Replacing heap root with last node
        size--;

        if(size == 0)
        return;

        // Function to keep the heap positions correct
        Heapify(0);
    }

    void print() {

        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {

    MaxHeap H1(6);

    H1.insert(2);
    H1.insert(12);
    H1.insert(22);
    H1.insert(12);

    H1.print();
    H1.Delete();
    H1.print();


    return 0;
}