#include<iostream>
#include<string>
using namespace std;

class Stack{
    public:
        int *array;
        int top , capacity;

        Stack(int capacity){
            this->capacity=capacity;
            this->array=new int[this->capacity];
            this->top=-1;
        }
        ~Stack(){
            delete[] array;
        }

};

