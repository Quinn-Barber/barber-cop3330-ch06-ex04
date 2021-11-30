#include <bits/stdc++.h>
#include <iostream>

using namespace std;

/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Quinn Barber
 */


class Name_value{
public:
    string name;
    int value;
Name_value(string str, int num):
    name(str), value(num){}
};

 int main(void)
 {
     vector<Name_value> pairs;

     string n;
     int v;

     while((cin >> n >> v) && (n != "NoName") && (v != 0))
     {
         int exit = 0;
         for(int i = 0; i < pairs.size(); i++)
         {
             if(n == pairs[i].name)
             {
                 printf("Already Entered\n");
                 exit = 1;
                 break;
             }
         }
        if(exit == 0){
                pairs.push_back(Name_value(n, v));
        }
     }
     int i = 0;
     while(i < pairs.size())
     {
         cout << "(" << pairs[i].name << ", " << pairs[i].value << ")";
         i++;
     }


     return 0;
 }
