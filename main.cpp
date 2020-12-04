#include <iostream>
#include <string>
#include "include/function.hpp"

int main (int argv,char*args[])
{
    int debugmod = 0;
    char en[26];
    char EN[26];
    char number[10];
    initial(en,EN,number); // giving array en EN number first value
    if(debugmod)
    {
        for(int i =0 ;i < 26;i++)
        {
            std::cout << en[i] <<","<<EN[i]<<",";
            if(i<10)std::cout<<number[i]<<std::endl;
            else std::cout<<std::endl;
        }
    }
    std::cout<<lenght_check(args[1]) <<std::endl;
    if( lenght_check(args[1]) )
    {
        std::cout<<"suceess"<<std::endl;
        return 0;
    }
    else 
    {
        std::cout<<"fail"<<std::endl;
        return 1;
    }
}
