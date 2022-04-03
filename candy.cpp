#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int x;
  cout<<"enter maximum level of candies should be maintained \n";
    cin>>x;
    cout<<"enter minimum level of candies should be maintained \n";
    int  z;
    cin>>z;
    cout<<"enter the candy demand of customer ";
    int m;
    cin>>m;



    ofstream
    file("CANDIES.txt");
    if(x-m<=m)
    file<<x;
    else
        file<<x-m;


    if(m>x)
    cout<<"INVALID INPUT";


    return 0;
}

