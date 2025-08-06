#include<iostream>
using namespace std;

int main()
{
    int i, j, n, arr[100], new_no[100], uniqueCount = 0 , count[100] ;
    bool isUnique;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements:\n";
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(i = 0; i < n; i++)
    {
        isUnique = true;
        for(j = 0; j < uniqueCount; j++)
        {
            if(arr[i] == new_no[j])
            {
                isUnique = false;
                break;
            }
        }

        if(isUnique)
        {
            new_no[uniqueCount] = arr[i];
            uniqueCount++;
        }
    }

    
   for(int f = 0; f < uniqueCount; f++) // should start from 0
{
    int countNo = 0;
    for(int s = 0; s < n; s++) // should start from 0
    {
        if(new_no[f] == arr[s])
        {
            countNo++;
        }
    }
    count[f] = countNo;
}


cout << "Unique elements are: ";
    for(i = 0; i < uniqueCount; i++)
    {
        cout << new_no[i] << " Frequency " << count[i] <<endl;
    }



    return 0;
}
