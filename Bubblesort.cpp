/*
- In bubble sort, each element is compared with its adjacent element.
- We begin with the 0th element and compare it with the 1st element.
- If it is found to be greater than the 1st element, then they are interchanged.
- In this way all the elements are compared(excluding last)with their next element and are interchanged if required.
- On completing the first iteration , largest element gets placed at the last position. Similarity in second iteration second largest element gets placed at the second last position and so on.

*/


#include<iostream>

#include<bits/stdc++.h>

using namespace std;

int bubble_sort(int array[],int n)
{
    int temp;

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if (array[i]>array[j])
            {
                temp     = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
     cout<<"The sorted array is"<<endl;
     
    for(int i=0;i<n;i++)
    {
       
        cout<<array[i]<<" ";
    }
    return 0;
}

int main()
{
    int number_of_elements;
    cout<<"Enter number of elements to be inserted into an array:";
    cin >> number_of_elements;
    int array[number_of_elements];
    for(int i=0;i<number_of_elements;i++)
    {
        cout<<"Enter element at "<<i+1<<" st position"<<endl;
        cin>>array[i];
    }
    bubble_sort(array,number_of_elements);
}