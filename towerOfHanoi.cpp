//Tower of Hanoi
#include<bits/stdc++.h>
using namespace std;
void Hanoi(int n,char src,char dest,char help)
{
 if(n==0) return;
 Hanoi(n-1,src,help,dest);
 cout<<"Ring from "<<src<<" to "<<dest<<"\n";
 Hanoi(n-1,help,dest,src);

    return;

}
int main()
{

    Hanoi(3,'A','C','B');


    return 0;
}
