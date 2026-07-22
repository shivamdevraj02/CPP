int heightHeap(int arr[],int n){


    if (n==1)
    {
        return 1;
    }
    

    int height =0;
    
    while (n>0)
    {
        height++;
        n=n/2;
        
    }


    return height;


}

