#include <iostream>
#include <string>
#include "include/init.hpp"
int main (int argv,char*args[])
{
    char en[26];
    char EN[26];
    char number[10];
    initial(en,EN,number);
    for(int i =0 ;i < 26;i++)
    {
        std::cout << en[i] <<","<<EN[i]<<",";
        if(i<10)std::cout<<number[i]<<std::endl;
        else std::cout<<std::endl;
    }
}
