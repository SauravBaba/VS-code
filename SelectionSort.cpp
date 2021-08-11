#include<iostream>
using namespace std;

void selectionSort(int *a,int n){
    for(int i=0;i<n-1;i++){
        for(int j=i;j<=n;j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}


void display(int a[],int n){
    for(int i=0;i<n;i++)
       cout<<a[i]<<" ";
    cout<<endl;   
}

int main(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
       cin>>a[i];
   display(a,n); 
   selectionSort(a,n);
   display(a,n);
 return 0;
}