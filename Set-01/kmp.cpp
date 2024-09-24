#include<bits/stdc++.h>
using namespace std;

vector<int>lps(1000,0);

void lpsArray(string pat)
{

    int index=0;
    for(int j=1;j<pat.size();)
    {
        if(pat[index] == pat[j])
        {
           
        }
        else{
            if(index!=0)
            {
                
            }
            else
                {
                    lps[j] = 0;
                    j++;
                }
        }

    }

}


void kmp(string t, string p)
{
    int i=0,j=0;
    bool flag = false;

    while(i<t.size())
    {
        if(t[i]==p[j])
        {
            i++,j++;
        }
        else{

            if(i!=0)
            {
                j = lps[j-1];
            }
            else{
                i++;
            }
        }

        if(j==p.size()){
            cout<<"Found at index: "<<i - p.size()<<endl;
            j = lps[j-1];
            flag = true;
        }
    }

    if(!flag)
    {
        cout<<"Not Found"<<endl;
    }


}


int main()
{
    string text,pattern;


    for(int i=0;i<pattern.size();i++)
    {
        cout<<lps[i]<<" ";
    }
    cout<<endl;

    kmp(text,pattern);

    return 0;
}
