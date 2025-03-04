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

    int i,j,t,sm,pos;
    for(i=0;i<n-1;i++){
        sm=arr[i];
        pos=i;
        for(j=i+1;j<n;j++){
            if(sm>arr[j]){
                sm=arr[j];
                pos=j;
            }
        }
        t=arr[pos];
        arr[pos]=arr[i];
        arr[i]=t;
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
