/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Alexia Nebrao, Kevin Faucher
 *
 * Created on March 16, 2017, 9:39 PM
 */
#include <iostream>
#include <stdlib.h>
#include "Node.hpp"
#include "LL.hpp"
using namespace std;

int main(){
  LL *LL1 = new LL();
  LL1->push(1);
  LL1->push(2);
  LL1->push(3);
  LL1->printList();
  LL1->removekth(0);
  LL1->removekth(1);
  LL1->removekth(10);
  LL1->printList();
}//end main