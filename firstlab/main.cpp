#include <iostream>

#include "ArrayClass.h"


using namespace std;

int main()
{

    int n,m;
    cin>>n>>m;
    int **array1;

    array1 = new int*[n];

    for (int i=0;i<n;i++){
        array1[i] = new int[m];
        for (int j=0;j<m;j++){
            scanf("%d",array1[i][j]);
        }
    }

    int n2,m2;
    cin>>n2>>m2;
    int **array2;

    array2 = new int*[n2];

    for (int i=0;i<n2;i++){
        array2[i] = new int[m2];
        for (int j=0;j<m2;j++){
            scanf("%d",array2[i][j]);
        }
    }





    ArrayClass *myclassfirst = new ArrayClass(n,m,array1);
    ArrayClass *myclasssecond = new ArrayClass(n2,m2,array2);

}
