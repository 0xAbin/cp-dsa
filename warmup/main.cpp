//
// Created by 0xabin on 4/3/25.
//


#include<iostream>
//#include "utils.h"

using namespace std;



int main () {

 int arr[] = {1,2,3,4,5};

  int *s = &arr[0];

  int *l = &arr[5];

  while (s != l) {
      cout << *s;
      ++s;
  }




 return 0;
}