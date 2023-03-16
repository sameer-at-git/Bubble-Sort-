#include <iostream>
using namespace std;

int bubbleSort(int a[], int n){
for(int k=0;k<n;k++){
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            swap(a[i],a[i+1]);
        }
    }
}
 cout<<"Sorted:";
        for(int k=0;k<n;k++){
              cout<< a[k]<<" ";}
        }



int main(){
    int n;
cout<<"Enter  size:"<<endl;
cin>>n;
int a[n];
 for(int i=0;i<n;i++){
    cin>>a[i];
 }
 bubbleSort(a,n);

return 0;
}
