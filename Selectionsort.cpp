/*
- The name itself indicates the sorting process done based on selection  .
- Find the least(or greatest) value in the array, swap it into the leftmost(or rightmost) component, and then forget the leftmost component, Do this repeatedly.
- Let a[n] be a linear array of n elements. The selection sort works as follows:
-  Pass 1: Find the location loc of the smallest element in the list of n elements a[0], a[1], a[2], a[3],........., a[n-1] and then interchange a[loc] and a[0].
- Pass 2: Find the location loc of the smallest element int the sub-list of n-1 elements a[1], a[2], a[3],.........,a[n-1] and then interchange a[loc] and a[1] such that a[0], a[1] are sorted. 
- Then we will get the sorted list a[0]<=a[2]<=a[3]......<=a[n-1]

*/

#include<iostream>

#include<bits/stdc++.h>

using namespace std;

int selection_sort(int array[],int n)
{
    int index,temp;
    
    for(int i=0;i<n;i++)
    {
        index = i ;

        for(int j=i+1;j<n;j++)
        {
            if (array[j]<array[index])
            {
                index = j;
            }
        }
        temp         = array[index];
        array[index] = array[i];
        array[i]     = temp;
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
    selection_sort(array,number_of_elements);
}