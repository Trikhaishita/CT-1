// Ishita Trikha
// 2010991010
// SET - 4
// Ques - 2
#include <iostream>
using namespace std;

void areConsecutive(int arr[], int n)
{
	int i, j;
    //sorting array
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
    //checking for consecutive numbers            
    for(int a=1;a<n;a++)
    {
        if(arr[a]!=arr[a-1]+1)
        {
            cout<<"The array does not contain consecutive integers";
        }
    }
    cout<<"The array contains consecutive integers from "<<arr[0]<<" to "<<arr[n]<<endl;
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	areConsecutive(arr,n);

	return 0;		
}