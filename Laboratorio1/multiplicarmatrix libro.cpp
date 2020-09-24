#include <iostream>
#include<stdlib.h>
#include <ctime>
using namespace std;


int main()
{
    cout << "lineas caches" << endl;
    int i, j;
    int MAX=5000;
    double A[MAX][MAX], x[MAX], y[MAX];
    srand(time(NULL));
    for(i=0;i<MAX;i++){
        for(j=0;j<MAX;j++){
            A[i][j]=rand()%51;
        }
        x[i]=rand()%51;
        y[i]=0;
    }
    const auto t0=clock();
    //cout<<t0;
    for(i=0;i<MAX;i++){
        for(j=0;j<MAX;j++){
            y[i]+=A[i][j]*x[j];
        }
    }
    const auto t1=clock();
    double time = (double(t1-t0)/CLOCKS_PER_SEC);
    cout << "tiempo de ejecucion version 1: " << time << endl;

;
    const auto t2=clock();
    for(j=0;j<MAX;j++){
        for(i=0;i<MAX;i++){
            y[i]+=A[i][j]*x[j];
        }
    }
    const auto t3 = clock();

    double time2 = (double(t3-t2)/CLOCKS_PER_SEC);
    cout << "tiempo de ejecucion version 2: " << time2 << endl;

    return 0;
}
