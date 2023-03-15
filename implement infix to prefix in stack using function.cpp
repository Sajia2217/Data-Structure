#include<bits/stdc++.h>
using namespace std;

stack<char>a;
string result;
int check_value(char c)
{
    if(c== '^')
        return 3;
    else if((c=='*')|| (c=='/')||(c=='%'))
        return 2;
        else if((c=='+')||(C=='-'))
            return 1;
        else
            returb -1;

}
void infix_to_prefix(string input)
reverse(input.begin(),input.emd());
for(int i=0; i<input.length();i++)
{
    char c = input [i];
    if(c>= 'A' && c<='2')
    {
        result=c+result;
        else if(c==')')
        {
            push(c);
            else if(c=='('))
            {
                while(s.top()!=')')
            }
        }
    }
}
