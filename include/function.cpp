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
    if(len >= 8 && len <= 16) return 1;
    else return 0;
}
int En_check(char str[])
{
    std::string str2=str;
    int result=0;
    for(int i =0;i<str2.size();i++)if( str[i] >= 65 && str[i] <= 90) result++;
    return result;
}
int symbol_check(char* str)
{
    std::string str2=str;
    int result =0;

    for(int i =0;i < str2.size();i++)
    {
        if( ( str[i] >= 32 && str[i] <= 47 ) || ( str[i] >= 58 && str[i] <= 64 ) || ( str[i] >= 91 && str[i] <= 96 ) || ( str[i] >= 123 && str[i] <= 126 ) )result++;
    }
    return result;
}
int number_check(char* str)
{
    std::string str2 = str;
    int result=0;
    for(int i =0 ; i < str2.size() ; i++)
    {
        if( ( str[i] >= 48 ) && ( str[i] <= 57) ) result++;
    }
    return result ;
}
int num_word(char* str)
{
    int result=0;
    std::string str2=str,mid="";
    mid=num_sym_word(str);
    for(int i = 0 ; i < str2.size() -1 ; i ++ )
    {
        if( mid[i] == mid[i+1] )
        {
            result++;
        }
    }
    return result;
}
std::string num_sym_word(char* str)
{
    std::string str2 = str,st="";
    for( int i =0 ; i<str2.size() ; i++ )
    {
        if( ( str[i] >= 'a' && str[i] <= 'z' ) || ( str[i] >= 'A' && str[i] <= 'Z' ) )
        {
            st+="1";
        }
        else st+="0";
    }
    return st;
}