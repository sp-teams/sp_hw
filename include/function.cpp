#include "function.hpp"


void initial(char* en,char EN[],char number[])
{
    for(int i = 0;i<26;i++)
    {
        en[i]=i+97;
        EN[i]=i+65;
        if(i<10)number[i]=i+48;
    }
}
int lenght_check(std::string str)
{
    int len=str.size();
    if(len >= 8 && len <= 16)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}