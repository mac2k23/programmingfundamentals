#include <iostream>
using namespace std;

int maximum(int* arr,int size)
{
    int max = *arr;
    for(int i=1;i<size;i++)
	{
        if(*(arr+i)>max)
		{
            max = *(arr+i);
        }
    }
    return max;
}
int oddSwap(int* x, int* y) 
{
    int temp = *x;
    *x = *y * 5;
    *y = temp * 5;
    return *x + *y;
}
int* expand(int* arr, int size) 
{
    int* newArr = new int[size * 2];
    for (int i = 0; i < size; ++i) 
	{
        *(newArr + i) = *(arr + i);
    }
    for (int i = size; i < size * 2; ++i) 
	{
        *(newArr + i) = -1;
    }
    return newArr;
}
int* concatenate(int* arr1, int size1, int* arr2, int size2) 
{
    int newSize = size1 + size2;
    int* newArr = new int[newSize];
    for(int i = 0; i < size1; ++i) 
	{
        newArr[i] = arr1[i];
    }
    for(int i = 0; i < size2; ++i) 
	{
        newArr[size1 + i] = arr2[i];
    }
    return newArr;
} 
int main() 
{

    cout<<"Maximum Finder"<<endl;
    int arr[]={1,2,3,4,8};
    int length = sizeof(arr) / sizeof(arr[0]);
    cout<<"The Maximum Value in the array is "<<maximum(arr,length)<<endl;

    cout<<"Odd Swap"<<endl;

 int a = 10, b = 5;
    cout<<"Before swapping: a = "<<a<<", b = "<<b<<endl;
    cout<<"Sum after swapping: "<< oddSwap(&a, &b)<<endl;
    cout<<"After swapping: a = "<<a<<", b = "<<b<<endl;
  

    cout<<"Expand"<<endl;
int arr2[] = {1, 2, 3, 4, 5};
    int length2 = sizeof(arr2) / sizeof(arr2[0]);
    int* newArr = expand(arr2, length2);
    cout<<"Expanded array: ";
    for(int i = 0; i < length2 * 2; ++i) 
	{
        cout<<newArr[i]<<" ";
    }
    
	cout<<endl;
    cout<<"Concatenate"<<endl;
    int firstarr[] = {1, 2, 3};
    int firstlength = sizeof(firstarr) / sizeof(firstarr[0]);
    int secondarr[] = {4, 5, 6};
    int secondlength = sizeof(secondarr) / sizeof(secondarr[0]);

    int* concatenatedArr = concatenate(firstarr, firstlength, secondarr, secondlength);
	
    cout<<"Concatenated array: "<<endl;
    for(int i = 0; i < firstlength + secondlength; ++i) 
	{
        cout<<concatenatedArr[i]<<" ";
    }

    delete[] concatenatedArr;
    delete[] newArr;
    return 0;
} 

