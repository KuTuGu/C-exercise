//运行正确
#include <stdio.h>
int main()
{
    int M,N,i=0,A[10000]={0},a,j,b,c=1,d=0;
    scanf("%d %d",&M,&N);
    for(a=2;A[N]==0;a++){ 
        b=0;
        for(j=2;j<=a/2;j++){
            if(a%j==0){
                b++;
                break;
            }
        }
        if(b==0){
            A[c]=a;
            c++;
        }
    }
    for(M=M;M<=N;M++){
        d++;
        if(d%10!=0)
            printf("%d ",A[M]);
        else if(d%10==0)
            printf("%d\n",A[M]);
    } 
    return 0;
}
