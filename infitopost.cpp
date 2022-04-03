#include<bits/stdc++.h>
using namespace std;

//Function to check precedence and associativity
int value(char c)
{
  if(c == '^')
		return 4;
	else if(c == '/')
		return 3;
	else if(c=='*')
		return 2;
	else if(c == '+' || c == '-')
		return 1;
	else
		return 0;

}
void infipost(string s)
{

    string postfix="";
    stack <char> st;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(') st.push(s[i]);

       else if((s[i]>='a' && s[i]<='z') ||(s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9'))
        {
            postfix=postfix+s[i];

        }

        else if((s[i]=='/' || s[i]=='*' || s[i]=='+'||s[i]=='-' ||s[i]=='^') &&(st.size()==0))
        {
        st.push(s[i]);

        }

       else if(s[i]=='/' || s[i]=='*' || s[i]=='+'||s[i]=='-' ||s[i]=='^')
        {



            while(value(s[i])<=value(st.top()))
            {
                postfix=postfix+st.top();
                st.pop();
            }

             st.push(s[i]);


        }
       else if(s[i]==')')
        {

            while(st.top()!='(')
            {
                postfix=postfix+st.top();
                st.pop();

            }
            st.pop();


        }


    }

    cout<<"PostFix Expression is : "<<postfix<<endl;

}




int main ()
{
string s="(P/Q+(R-T)*U)";
     infipost(s);

return 0;
}
