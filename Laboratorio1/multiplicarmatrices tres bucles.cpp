#include <iostream>
#include <sys/time.h>
#include <ctime>
using namespace std;
#define N 500


void MultiplicarMatriz(int A[][N], int B[][N], int C[][N])
{
    int i, j, k;
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            C[i][j]=0;
            for(k=0; k<N; k++)
            {
                C[i][j]+= A[i][k]*B[k][j];
            }
        }
    }
}


int main()
{
    
    int A[N][N];
    int B[N][N];
    int C[N][N];
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
        {
            A[i][j]=2;
            B[i][j]=1;
            C[i][j]=0;
        }
    const auto t0=clock();
    
    MultiplicarMatriz(A,B,C);
    
    const auto t1=clock();
    double time = (double(t1-t0)/CLOCKS_PER_SEC);
    cout<<"Tiempo de ejecucion: "<<time<<"Seg"<<endl;
    
    return 0;
}
