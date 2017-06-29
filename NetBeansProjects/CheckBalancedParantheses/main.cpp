/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Shubham Mehrotra
 *
 * Created on 29 June 2017, 23:25
 */

#include <cstdlib>
#include <iostream>
#include <stack>
#include <string.h>
using namespace std;

bool ArePair(char a,char b)
{
    if(a=='(' && b==')')return true;
    if(a=='{' && b=='}')return true;
    if(a=='[' && b==']')return true;
    return false;
}
bool check(string s)
{
    stack<char> p;
    
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
        {
            p.push(s[i]);
        }
        else if(s[i] == ')' || s[i] == '}' || s[i] == ']')
        {
            if((p.empty()) || (!ArePair(p.top(),s[i])) )
            {
                return false;
            }
            else
                p.pop();
        }
    }
    if(p.empty())
        return true;
}
int main() 
{
    string s;
    cin>>s;
    
    if(check(s))
		cout<<"Balanced\n";
	else
		cout<<"Not Balanced\n";
    return 0;
}

