#include<iostream>
using namespace std;
void   rev(int arr[], int low, int high)
{
    if(low>=high) return;

 swap(arr[low],arr[high]);



    return rev(arr,low+1,high-1);







}
int main()
{

    int arr[]={1,2,3,4,5,6,7};
    rev(arr,0,6);














    return 0;
}
