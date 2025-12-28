// Bubble, Selection, Insertion
#include <iostream>
using namespace std;

void bubble(int *p1, int size)
{
    int i=0, j, temp;
    int s=size;
    while (size--)
    {
        i=0;
        while (i < s - 1)
        {
            if (p1[i] > p1[i + 1])
            {
                temp = p1[i];
                p1[i] = p1[i + 1];
                p1[i + 1] = temp;
            }
            i++;
        }
    }
    cout<<"sorted array using bubble sort is: \t";
    for(i=0;i<s;i++){
        cout<<p1[i]<<"\t";
    }
    cout<<endl;
}
void selection(int *p2, int size)
{
    int i,j,k,temp,s=size;
    for(i=0;i<s-1;i++){
        k=i;
        for(j=i+1;j<s;j++){
            if(p2[j]<p2[k]){
                k=j;
            }
        }
        temp=p2[k];
        p2[k]=p2[i];
        p2[i]=temp;
    }
    cout<<"sorted array using selection sort is: \t";
    for(i=0;i<s;i++){
        cout<<p2[i]<<"\t";
    }
    cout<<endl;
};

void insertion(int *p3,int size){
    int i,j,temp,s=size;
    for(i=0;i<s-1;i++){
        for(j=0;j<i;j++){
            if(p3[i]<p3[j]){
                temp = p3[j];
                p3[j]=p3[i];
                p3[i]=temp;
            }
        }
    }
    cout<<"sorted array using insertion sort: \t";
    for(i=0;i<s;i++){
        cout<<p3[i]<<"\t";
    }
    cout<<endl;
}

int main(){
    int a[]={20,50,60,80,10,5,1};
    bubble(a,7);
    selection(a,7);
    insertion(a,7);
    return 0;

}