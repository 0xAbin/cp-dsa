//
// Created by 0xabin on 4/3/25.
//


#include<iostream>
//#include "utils.h"

using namespace std;



int main () {

 int arr[] = {1,2,3,4,5};

  // added auto for dynamic type and added reference for reducing copy of the item
 for (auto & x : arr) {
     cout << x ;
 }


 return 0;
}