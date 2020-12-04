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
    if( lenght_check(args[1]) && En_check(args[1]))
    {
        std::cout<<"suceess"<<std::endl;
        return 0;
    }
    else 
    {
        std::cout<<"fail"<<std::endl;
        if( !lenght_check(args[1]) )
        {
            std::string str=args[1];
            if(str.size() < 8) std::cout<<"The lenght of string less than 8"<<std::endl;
            else if(str.size() > 16 ) std::cout<<"The lenght of string more than 16"<<std::endl;
        }
        if( !En_check(args[1]) ) std::cout<< "Lack of A-Z"<<std::endl;

        return 1;
    }
}
