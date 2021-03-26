#include<iostream>

using namespace std;

void bubblesort(int a[], int size){
    int snapped = 0;
    do{
        snapped = 0;
        for(int i = 0 ; i < size - 1; i++){
            if(a[i] > a[i+1]){
                int tmp = a[i];
                a[i] = a[i + 1];
                a[i+1] = tmp;
                snapped = 1;
            }
        }
    } while (snapped == 1);
}
void printarray(int a[],int size){
    for(int i = 0; i < size; i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}
int main(){
    int a[] = {3,5,1,9,12,7,4,8};
    bubblesort(a,8);
    printarray(a,8);
    return 0;
}