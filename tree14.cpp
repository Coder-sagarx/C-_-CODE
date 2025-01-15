// lowest comman ansestor
#include <iostream>
#include <queue>
using namespace std;
class heap
{
public:
    int size;
    int arr[100];
    heap()
    {
        size = 0;
        arr[0] = -1;
    }
    void insert(int val)
    {
        size = size + 1;
        int index = size;
        arr[index] = val;

        while (index > 1)
        {
            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }
    void traverse()
    {
        for (int i = 0; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    void deleteonenode(){
        if(size==0){
            cout<<"nothing to delete "<<endl;
            return ;
        }
        //delete the node step 1
        arr[1]=arr[size];
        //step 2
        size--;
        // correct the position step 3
        int i=1;
        while(i<size){
            int leftindex=2*i;
            int rightindex=2*i+1;
            if(leftindex<size && arr[i]<arr[leftindex]){
                swap(arr[i],arr[leftindex]);
                i=leftindex;
            }
            else if(rightindex<size && arr[i]<arr[rightindex]){
                 swap(arr[i],arr[rightindex]);
                i=rightindex;
            }
            else{
                return ;
            }
            }}

};
void heapify(int arr[],int n,int i){
     int largest=i;
    int left=2*i;
    int right=2*i+1;

    if(left < n && arr[largest] <arr[left]){
        largest=left;
    }
    if(right < n && arr[largest] <arr[right]){
        largest=right;
    }
    if(largest!=i){
    swap(arr[largest],arr[i]);
    heapify(arr,n,largest);
    }
}

int main(){
    
    heap h1;
    h1.insert(10);
    h1.insert(20);
    h1.insert(30);
    h1.insert(40);
    h1.insert(50);
    h1.traverse();
    // cout<<"the node is deleted  :";
    // h1.deleteonenode();
    int i=1,arr[7]={-1,21,62,51,4,95,36},n=6;
    cout<<"the original one  ->"<<endl;
    for(int i=1;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=n/2 ; i>0 ; i--){
        heapify(arr,n,i);
    }
    cout<<"\nprint the array now ->"<<endl;
    for(int i=1;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}