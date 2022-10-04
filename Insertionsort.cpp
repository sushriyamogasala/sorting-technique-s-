/*
- Suppose an array a[n] with n elements. The insertion sort works as follows:
- Pass 1: a[0] by itself is trivially sorted.
- Pass 2: a[1] is inserted either before or after a[0] so that a[0], a[1] is sorted.
- Pass 3: a[2] is inserted into its proper place in a[0], a[1] that is before a[0], between a[0] and a[1], or after a[1] so that a[0], a[1], a[2] is sorted.
- Pass N: a[n-1] is inserted into its proper place in a[0], a[1], a[2],.......,a[n-2] so that a[0], a[1], a[2],..........,a[n-1] is sorted with n elements.

*/

#include<iostream>

#include<bits/stdc++.h>

using namespace std;

void insertion_sort(int array[],int n)
{
    int i,j,temp;

    for(int i=1;i<n;i++)
    {
        temp = array[i];
        j = i-1 ;
        
       while(j>=0 && temp<array[j])
        {
            array[j+1] = array[j];
            j -= 1;
        }
        array[j+1] = temp;
    }
     cout<<"The sorted array is"<<endl;
     
    for(int i=0;i<n;i++)
    {
       
        cout<<array[i]<<" ";
    }
    
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
    insertion_sort(array,number_of_elements);
}