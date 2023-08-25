#include<iostream>
using namespace std;


void swapAlternate(int arr[],int size){
    for (int i = 0; i < size; i=i+2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }

    }
}
void printArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    


}
int main()
{
    int even[8]={5,7,8,9,23,22,11,12};
    int odd[5]={21,32,90,12,3};

    swapAlternate(even ,8);
    printArray(even,8);
    cout<<endl;

    swapAlternate(odd,5);
    printArray(odd,5);
 return 0;
}
  