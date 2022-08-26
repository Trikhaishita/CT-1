// Ishita Trikha
// 2010991010
// SET - 4
// Ques - 1
#include <iostream>
using namespace std;

void Checkarr(int arr[],int n){
    int a=0;
    int flag=0;
    while(a!=(n-1)){
    for(int i=0;i<n;i++){
        int demo = arr[a];
        if(arr[i]==demo){
            flag++;
            a++;
        }
    }
  }
  if(flag>=0)
    cout<<"The minimum index of repeating element is "<<a<<endl;
  else
    cout<<"Invalid input"<<endl;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    Checkarr(arr,n);
    return 0;
}