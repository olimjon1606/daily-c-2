#include<iostream>
#include<string>
using namespace std;

struct IntArray{
    int size;
    int pointer;

    void create(int n){
        string* arr= new string[n];
    }
};