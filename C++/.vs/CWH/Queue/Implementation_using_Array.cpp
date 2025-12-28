#include<iostream>
using namespace std;
struct Queue{
    int cap,size;
    int *arr;
    Queue(int c){
        size =0;
        cap = c;
        arr=new int[cap];
    }
};