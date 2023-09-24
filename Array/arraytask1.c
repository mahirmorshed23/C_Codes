 #include <stdio.h>

 int main()
 {
     int arr[10] = {12, 23, 74, 20, 21, 1, 34, 23, 21, 15}, n=10, search_key;

     printf("Enter the search key: ");
     scanf("%d", &search_key);

     for(int i=0; i<n; i++)
     {
         if(arr[i] == search_key)
         {
            printf("first index: %d\n", i);
            break;
         }
     }

     for(int i=n-1; i>=0; i--)
     {
         if(arr[i] == search_key)
         {
            printf("last index: %d\n", i);
            break;
         }
     }
     return 0;
 }
