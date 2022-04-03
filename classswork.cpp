class Solution {
public:
double MedianSortedArrays(vector& vect1, vector& vect2) {
float n = vect1.size();
float m = vect2.size();
vector nums3(m+n);
merge(vect1.begin(),vect1.end(),nums2.begin(),nums2.end(),nums3.begin());
m = m+n-1;
n = 0;
float a = 0.00;
if (nums3.size() < 2)
{
a = nums3[0];
return a;
}
while(n <= m)
{

        if(n+1 == m){
            a = (nums3[n] + nums3[m])/2;
            break;
        }
        else if(m == n)
        {
            a = nums3[n];
           break;
        }
        n++;
        m--;
        
    }
    return a;
    
}
};