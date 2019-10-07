/*
 * quicksort.cpp
 *
 *  Created on: Jun 26, 2019
 *      Author: gurvinder
 */
#include <iostream>
#include <string>
using namespace std;
void quickSort(int[],int,int);
int partition(int[],int,int);///
void printArray(int a[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << a[i] << " ";
    cout << endl;
}
int main()
{
     int a[] = {11, 17, 4, 9, 1, 5, 6, 2};
    int n = sizeof(a) / sizeof(a[0]);
    quickSort(a, 0, n - 1);
    cout << "Sorted array: \n";
    printArray(a, n);
    return 0;
}


int partition(int a[],int l,int u){
    int v,i,j,temp;
    v=a[l];
    i=l;
    j=u+1;
    do{
        do
        i++;
        while (a[i]<v && i<=u);
        do
        j--;
        while(v<a[j]);
        if (i<j){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
}while(i<j);
a[l]=a[j];
a[j]=v;
return (j);
}

void quickSort (int a[],int l, int u){
    int j;
    if (l<u){
        j=partition (a, l, u);
        quickSort(a,l,j-1);
        quickSort(a,j+1, u);
        }

}



