#include<bits/stdc++.h>
using namespace std;
int main(){
    string HQ="ABCD";
    for (int i = 0; i < 4; i++)
    {
        for (int j = i+1; j < 4; j++)
        {
            for (int k = j+1; k < 4; k++)
            {
                for (int l = k+1; l < 4; l++)
                {
                    cout<<HQ[i];
                    cout<<HQ[j];
                    cout<<HQ[k];
                    cout<<HQ[l]<<endl;
                }
                
            }
            
        }
        
    }
    

}
