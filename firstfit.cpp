#include<bits/stdc++.h>
using namespace std;
void firstfit(int blocks[],int m,int process[],int n)
{
    int allocation[n];
    memset(allocation,-1,sizeof(allocation));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(blocks[j]>=process[i])
            {
                allocation[i]=j;
                blocks[j]-=process[i];
                break;
            }
        }
    }
    cout << "\nProcess No.\tProcess Size\tBlock no.\n";
    for (int i = 0; i < n; i++)
    {
        cout << " " << i+1 << "\t\t"<< process[i] << "\t\t";
        if (allocation[i] != -1)
            cout << allocation[i] + 1;
        else
            cout << "Not Allocated";
        cout << endl;
    }
}
int main()
{
    int m,n;
    cout<<"Enter the number of blocks:"<<endl;
    cin>>m;
    int blocksize[m];
    cout<<"Enter the block sizes:"<<endl;
    for(int i=0;i<m;i++)
    {
        cin>>blocksize[i];
    }
    cout<<"Enter the number of process:"<<endl;
    cin>>n;
    int processSize[n];
    cout<<"Enter the process sizes:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>processSize[i];
    }
    firstfit(blocksize,m,processSize,n);
    return 0;
}