#include<iostream>
using namespace std;

void bubbleSort(int *a,int n){
    int counter=1;
    while(counter<n){
        for(int j=0;j<n-counter;j++){
            if(a[j]>a[j+1]){
                int temp =a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
        counter++;
    } 
}

void display(int *a,int n){
    for(int i=0;i<n;i++)
        cout<<a[i];
    cout<<endl;    
}

int main(){
   int n;cin>>n;
   int a[n];for(int i=0;i<n;i++)cin>>a[i];

   display(a,n);
   bubbleSort(a,n);
   display(a,n);
   
 return 0;
}