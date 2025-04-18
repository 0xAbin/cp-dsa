//
// Created by 0xabin on 4/3/25.
//


#include<iostream>
//#include "utils.h"

using namespace std;



int main () {

 int arr[4] = {1,2,3,4};

 // 11 feature
 int *b = begin(arr);
 int *c = end(arr);

while (b != c) {
 cout << *b++ << " ";
}


 return 0;
}