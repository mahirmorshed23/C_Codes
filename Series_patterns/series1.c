#include<stdio.h>

int main()
{
    int N, sum=0;
    printf("Type here: ");
    scanf("%d", &N);
    for(int i=1; i<=N; i++)
    {
        sum+=i*(i+1);
    }
    printf("%d", sum);
}




























// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int i,x,n,sum=0,m,term=1;
//     scanf("%d %d",&x,&n);

//     for(i=0;i<=n;i++);
//     {
//         for(m=0;m<=n;m++);{
//             term*=m;
//         }

//         sum+=pow(x,i)/term;
//     }
//         printf("Sum=%d",sum);
// }
















// int main()
// {
//     int N, sum=0;
//     printf("Type here: ");
//     scanf("%d", &N);
//     for(int i=1; i<=N; i++)
//     {
//         sum+=i*(i+1);
//     }
//     printf("%d", sum);
// }





















// int main()
// {
//     int i,x,n,m,term=1;
//     float sum = 1;
//     scanf("%d %d",&x,&n);

//     for(i=1;i<=n;i++)
//     {
//         term *= i;
//         sum+=(pow(x,i)/(float)term);
//     }
//     printf("Sum=%.2f",sum);
// }











// int main()
// {
//     int x = 1, N, sum = 0;
//     scanf("%d", &N);
//     while(x<=N)
//     {
//         sum+= x;
//         x++;
//     }
//     printf("%d", sum);
// }
