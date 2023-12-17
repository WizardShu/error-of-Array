#include <iostream>
using namespace std;
int sumArray (int arr[] , int size){
    int sum ; 
    for (int  i = 0; i < size ; i++)
    {
        sum +=arr[i];
    }
    return sum ;
} 
int main() {
    //single dimensions  
    int size = 3;
    int arr [size][size]={{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int arr2[size];
    for(int i=0;i<size;i++)
        arr2[i]=arr[2][i];
    int sumArr =  sumArray(arr2, size);
    return 0;
}
