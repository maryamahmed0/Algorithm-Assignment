#include <bits/stdc++.h>
using namespace std;

// method to get Max Heap
void heapify(vector<int>& arr,int n,int i) {
    int largest =i;
    int leftChildi=2*i+1;
    int RightChildi=2*i+2;
    if(arr[leftChildi]>arr[largest] && leftChildi<n) {
        largest=leftChildi;
    }
    if(arr[RightChildi]>arr[largest] && RightChildi<n) {
        largest=RightChildi;
    }

    if(largest!=i) {
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
}

void HeapSort(vector<int>& arr) {
    int n = arr.size();
    // rearrange array elements to form a Max Heap
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (int i = n - 1; i > 0; i--) {
        //Swap the root element of the heap with the last element in the heap.
        swap(arr[0], arr[i]);

        heapify(arr, i, 0);
    }

}

int main() {

    int n;
    cout<<"enter the array size :";
    cin>>n;
    vector<int> arr(n);
    cout<<"enter the values to be sorted : ";
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    HeapSort(arr);
    cout<<"Sorted array :";
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}
