#include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter the number of elements\n";
    cin >>n;

    int arr[n];
    cout<<"Enter "<<n<<" Elements\n";
    for(int i=0;i<n;i++){ 
        cin >>arr[i];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j+1]<arr[j]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<10;i++){
        cout<< arr[i]<<" ";
    }
    return 0;
}