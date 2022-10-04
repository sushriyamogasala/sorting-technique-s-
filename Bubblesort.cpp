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