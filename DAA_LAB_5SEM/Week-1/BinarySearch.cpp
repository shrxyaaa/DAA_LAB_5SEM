#include <iostream>
using namespace std;


int binarySearch(int arr[], int l, int r, int x,int count)
{   count++;
    if (r >= l) {
        int mid = l + (r - l) / 2;
  
        if (arr[mid] == x)
            return count;
  
        
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x,count);
  
        return binarySearch(arr, mid + 1, r, x,count);
    }
  
    
    return -1;
}


int main(void)
{   int t;
    cin>> t;
    while(t--)
    {
        int n ;
        cin>> n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
           cin>>  arr[i];
        }

        int x ;
        cin>>x;
    
        int result = binarySearch(arr , 0, n - 1, x ,0);
        (result != -1)
            ? cout << "Present "<< result<<"/n"
            : cout << "Not Present "  << n ;
        
    }

    return 0;
}
