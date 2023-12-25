#include <iostream>
using namespace std;

int binarySearch(int arr[] , int size , int key){

    int start = 0;
    int end = size-1;

    int mid = start + (end - start)/2;

    while(start <= end){

        if(arr[mid] == key){
        return mid;
        }

        if(key>arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1; 
        }

        mid = start + (end - start)/2;
    }

    return -1;
}

int main()
{
    int evenArray[6] = {2,4,6,8,12,18};
    int oddArray[5] = {3,8,11,14,16};
    int keyValue;
    cout<<"Enter key value: "<<endl;
    cin>>keyValue;
    int evenIndex = binarySearch(evenArray , 6 , keyValue);

    cout<<"index value of key is : "<<evenIndex<<endl;
};
