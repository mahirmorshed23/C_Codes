 #include <stdio.h>

 int main()
 {
     int arr[10] = {12, 23, 74, 20, 21, 100, 34, 12, 100, 15}, n=10, small;
     small = arr[0];
     for(int i=0; i<n; i++)
     {
         if(arr[i] <= small)
         {
            small = arr[i];
         }
     }
     for(int i=0; i<n; i++)
     {
         if(arr[i] == small)
         {
            printf("%d ", i);
         }
     }
 }
