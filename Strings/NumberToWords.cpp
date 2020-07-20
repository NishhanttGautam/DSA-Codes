#include<bits/stdc++.h>
using namespace std;
string convertToWords(long n);
string one[] = { "", "one ", "two ", "three ", "four ",
                 "five ", "six ", "seven ", "eight ",
                 "nine ", "ten ", "eleven ", "twelve ",
                 "thirteen ", "fourteen ", "fifteen ",
                 "sixteen ", "seventeen ", "eighteen ",
                 "nineteen " };
string ten[] = { "", "", "twenty ", "thirty ", "forty ",
                 "fifty ", "sixty ", "seventy ", "eighty ",
                 "ninety " };
string solve(int n,string s)
{
    string str="";
    if(n>19)
    str+=ten[n/10]+one[n%10];
    else
    str+=one[n];

    if(n)
    str+=s;
    return str;
}
string convertToWords(long n)
{
    string ans="";

    ans+=solve(n/10000000,"crore ");
    ans+=solve((n/100000)%100,"lakh ");
    ans+=solve((n/1000)%100,"thousand ");
    ans+=solve((n/100)%10,"hundred ");

    if(n>100&&n%100)
    ans+="and ";
    ans+=solve(n%100,"");
    return ans;

}
int main()
{
    long int n;
    cin>>n;
    cout<< convertToWords(n) <<endl;
    return 0;
}
