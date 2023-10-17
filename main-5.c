/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n1,n2,n3;
    int a[100],b[100],c[200];
    scanf("%d",&n1);
    for(int i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&n2);
    for(int i=0;i<n2;i++){
        scanf("%d",&b[i]);
    }
    n3=n1+n2;
    for(int i=0;i<n1;i++){
        c[i]=a[i];
    }
    for(int i=0;i<n2;i++){
        c[i+n1]=b[i];
    }
    for(int i=0;i<n3;i++){
        printf("%d",c[i]);
    }
    return 0;
}
