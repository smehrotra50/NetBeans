/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Shubham Mehrotra
 *
 * Created on 29 June 2017, 19:34
 */

//by stack
#include <iostream>
#include <stack>
#include <string.h>
using namespace std;
string Reverse(string s)
{
    stack<char> p;
    for(int i=0;s[i];i++)
    {
        p.push(s[i]);
    }
    for(int i=0;s[i];i++)
    {
        s[i]=p.top();
        p.pop();
    }
    return s;
}
int main()
{
    string s;
    cin>>s;
    cout<<Reverse(s);
    
}


