#include<iostream>
using namespace std;

int main()
{
    int arr[]={1,2,4,3};
    int brr[]={5,2,3,1};

    int crr[8];   // merged array

    // merge arr
    for(int i=0;i<4;i++)
    {
        crr[i]=arr[i];
    }

    // merge brr
    for(int i=0;i<4;i++)
    {
        crr[i+4]=brr[i];
    }

    // sorting (simple bubble sort)
    for(int i=0;i<8;i++)
    {
        for(int j=i+1;j<8;j++)
        {
            if(crr[i]>crr[j])
            {
                swap(crr[i],crr[j]);
            }
        }
    }

 
    if (condition)
    {
        /* code */
    }
    


    // print array
    for(int i=0;i<8;i++)
    {
        cout<<crr[i]<<" ";
    }

    return 0;
}