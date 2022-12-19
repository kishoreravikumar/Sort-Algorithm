#include <iostream>
//#include <algorithm>
using namespace std;

void sortFunction(int *aRy, const int &n)
{
    for(int i =0 ; i< n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            if(aRy[i] > aRy[j] && j > i)
            {
                int first = aRy[i];
                aRy[i] = aRy[j];
                aRy[j] = first;
                cout << "sorting numbers"<< endl;
                for(int k =0 ; k <n; k++)
                    cout  << aRy[k]<<" ";
                cout << endl;
            }
        }
        cout << "sorting numbers final"<<endl;
        for(int k =0 ; k <n; k++)
            cout  << aRy[k]<<" ";
        cout << endl;
    }
    cout << "sorting numbers final2"<<endl;
    for(int k =0 ; k <n; k++)
        cout  << aRy[k]<<" ";
    cout << endl;
}

int main()
{
    cout << "Hello welcome to sort algorithm" << endl;
    int  n;
    cin >>n;
    int arr[n];
    for(int i =0 ; i <n; i++)
        cin>>arr[i];
    cout << "numbers before sorting"<<endl;
    for(int i =0 ; i <n; i++)
        cout << arr[i]<<" ";
    cout << endl;
    sortFunction(arr, n);
    cout << "numbers After sorting"<<endl;
    for(int i =0 ; i <n; i++)
        cout << arr[i]<<" ";
    cout << endl;
    return 0;
}

