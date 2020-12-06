#include <iostream>
#include <string>
#include "include/function.hpp"

int main (int argv,char* (args[]))
{
    int debugmod = 0;
    char en[26];
    char EN[26];
    char number[10];
    initial(en,EN,number); // giving array en EN number first value
    if(debugmod)
    {
        return 0;
    }
    //Check whether the string is empty
   
    if(argv==1)
    {
        std:: cout<< "String is empty"<<std::endl;
        return 1;
    }
    
    //Success check
    if( lenght_check(args[1]) && En_check(args[1]) && symbol_check(args[1]) )
    {
        std::cout<<"suceess"<<std::endl;
        return 0;
    }
    //Fail check and error report
    else 
    {
        std::cout<<"fail"<<std::endl;
        //lenght error report
        if( !lenght_check(args[1]) )
        {
            std::string str=args[1];
            if(str.size() < 8) std::cout<<"The lenght of string less than 8"<<std::endl;
            else if(str.size() > 16 ) std::cout<<"The lenght of string more than 16"<<std::endl;
        }
        //A-Z lacking report
        if( !En_check(args[1]) ) std::cout<< "Lack of A-Z"<<std::endl;
        if( !symbol_check(args[1]) ) std::cout<<"Lack of symbol"<<std::endl;

        return 1;
    }
}
