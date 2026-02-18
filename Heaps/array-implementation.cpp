                                         //MAX - HEAP
#include<iostream>
using namespace std;
class MaxHeap
{
  int *arr;
  int size; //Total elements in the array 
  int total_size; //Total size of arr
  public:
  MaxHeap(int n){
      arr = new int[n];
      size = 0;
      total_size = n;
  }
  //Insert into MaxHeap
  void insert(int val)
  {
      //Check if the  heap  size is available or not
      if(size == total_size){
          cout<<"Heap OverFlow"<<endl;
          return;
      }
      arr[size] = val;
      int index = size;
      size++;
      //Comparisons
      while(index > 0 && arr[(index-1)/2] < arr[index]){
          swap(arr[(index-1)/2],arr[index]);
          index = (index-1)/2;
      }
      cout<<arr[index]<<" is inserted to the heap\n";
  }
  void Heapify(int index){
      int largest = index;
      int left = 2*index+1;
      int right = 2*index+2;
      //Largest will store the  element which is greater between parent, left child and  right child
      if(left < size && arr[left] > arr[largest]){
          largest = left;
      }
      if(right < size && arr[right] > arr[largest]){
          largest = right;
      } 
      if(largest != index){
          swap(arr[index],arr[largest]);
          Heapify(largest);
      }
  }
  
  void print(){
      for(int i = 0; i < size;i++)
      cout<<arr[i]<<" ";
      cout<<endl;
  }
  
  void Delete()
  {
      if(size == 0){
          cout<<"UnderFlow\n";
          return;
      }
      cout<<arr[0]<<" Deleted from the heap\n";
      arr[0] = arr[size-1];
      size--;
      
      Heapify(0);
      
  }
  
};
int main(){
    MaxHeap H1(7);
    H1.insert(5);
    H1.insert(45);
    H1.insert(9);
    H1.Delete();
    H1.print();
    H1.insert(87);
    H1.print();
    H1.insert(67);
    H1.insert(85);
    H1.insert(1);
    H1.print();
    H1.Delete();
    H1.print();
}

                                             //MIN - HEAP 

#include<iostream>
using namespace std;

class MinHeap {
    int *arr;
    int size;       // Current number of elements
    int total_size; // Capacity

public:
    MinHeap(int n) {
        arr = new int[n];
        size = 0;
        total_size = n;
    }

    // Insert into MinHeap
    void insert(int val) {
        if(size == total_size) {
            cout << "Heap OverFlow" << endl;
            return;
        }
        arr[size] = val;
        int index = size;
        size++;

        // Bubble up smaller values
        while(index > 0 && arr[(index-1)/2] > arr[index]) {
            swap(arr[(index-1)/2], arr[index]);
            index = (index-1)/2;
        }
        cout << arr[index] << " is inserted to the heap\n";
    }

    // Heapify for MinHeap
    void Heapify(int index) {
        int smallest = index;
        int left = 2*index+1;
        int right = 2*index+2;

        if(left < size && arr[left] < arr[smallest]) {
            smallest = left;
        }
        if(right < size && arr[right] < arr[smallest]) {
            smallest = right;
        }

        if(smallest != index) {
            swap(arr[index], arr[smallest]);
            Heapify(smallest);
        }
    }

    void print() {
        for(int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    // Delete root (minimum element)
    void Delete() {
        if(size == 0) {
            cout << "UnderFlow\n";
            return;
        }
        cout << arr[0] << " Deleted from the heap\n";
        arr[0] = arr[size-1];
        size--;
        Heapify(0);
    }
};

int main() {
    MinHeap H1(7);
    H1.insert(5);
    H1.insert(45);
    H1.insert(9);
    H1.Delete();
    H1.print();
    H1.insert(87);
    H1.print();
    H1.insert(67);
    H1.insert(85);
    H1.insert(1);
    H1.print();
    H1.Delete();
    H1.print();
}
                 