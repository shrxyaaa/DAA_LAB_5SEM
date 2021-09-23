#include <iostream>
using namespace std;
 
int search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
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
    
        int result = search(arr, n, x);
        (result != -1)
            ? cout << "Present "<< result+1
            : cout << "Not Present "  << result ;
        
    }

    return 0;
}
