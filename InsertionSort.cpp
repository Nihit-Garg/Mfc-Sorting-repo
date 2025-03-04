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

    for(int i=1;i<n;i++){
        int t=arr[i];
        int j=i-1;

        while(j>=0 && arr[j]>t){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=t;
    }
    cout<<"Sorted Array\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout<<"\nend";
    return 0;
}