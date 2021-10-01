// reverse an array
#include <iostream>
using namespace std;

void reverse(int arr[],int i,int j)

{ int x=i;
       int y=j;
       while(x<y){
           int temp=arr[x];
           arr[x]=arr[y];
           arr[y]=temp;
           x++;
             y--;
       }
    
}
int main() {
    int N;
    
    cin>>N;
    int A[N];
    for(int i=0;i<N;i++)
    {
        cin>>A[i];
    }
reverse( A,0,N-1);
for(int i=0;i<N;i++)
    {
        cout<<A[i];
    }
	return 0;
}