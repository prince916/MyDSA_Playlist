#include <bits/stdc++.h>
using namespace std;

int searchInRotatedArray(int arr[], int key, int left, int right){
    if( left > right ){
        return -1;
    }

    int mid = (left+right)/2;
    if(arr[mid] == key){
        return mid;
    }

    if(arr[left] <= arr[mid]){
        if (key >= arr[left] && key <= arr[mid])
        {
            return searchInRotatedArray(arr,key, left, mid-1);
        }
        return searchInRotatedArray(arr,key,mid+1,right);
        
    }

    if(key >= arr[mid] && key <= arr[right]){
        return searchInRotatedArray(arr,key,mid+1,right);
    }
    return searchInRotatedArray(arr,key, left, mid-1);
}

int main()
{
    //first test case

    int arr[] = {6, 7, 8, 9, 10, 1, 2, 5};
    int n = 8; 
    int key = 8;


    int idx = searchInRotatedArray( arr, key, 0 , n-1 );
    if( idx == -1){
        cout << "Key does not exit" <<endl;
    }
    else{
        cout << " key is present at index : " << idx << endl;
    }


    cout << " ***********************" <<endl;

    //Second test case

    int arr1[] = {30, 40, 50, 10, 20};
    int n1 = 5; 
    int key1 = 10;


    int idx1 = searchInRotatedArray( arr1, key1, 0 , n1-1 );
    if( idx1 == -1){
        cout << "Key does not exit" <<endl;
    }
    else{
        cout << " key is present at index : " << idx1 << endl;
    }
    

    return 0;

}

