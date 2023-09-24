 #include <stdio.h>

 int main()
 {
     int arr[10] = {12, 23, 74, 20, 21, 1, 34, 23, 21, 15}, n=10, search_key, index=-1;

     printf("Enter the search key: ");
     scanf("%d", &search_key);
     for(int i=0; i<n; i++)
     {
         if(arr[i] == search_key)
         {
            index = i;
            break;
         }
     }

     for(int i=index; i<n; i++)
     {
         arr[i] = arr[i+1];
     }
     n--;

     for(int i=0; i<n; i++)
     {
         printf("%d ", arr[i]);
     }
 }
