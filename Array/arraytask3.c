 #include <stdio.h>

 int main()
 {
     int arr[10] = {12, 23, 74, 20, 21, 100, 34, 23, 100, 15}, n=10, large=0;

     for(int i=0; i<n; i++)
     {
         if(large <= arr[i])
         {
            large = arr[i];
         }
     }
     for(int i=0; i<n; i++)
     {
         if(arr[i] == large)
         {
            printf("%d ", i);
         }
     }
 }
