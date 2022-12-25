#include <stdio.h>
void shift_element(int* arr, int i);
void insertion_sort(int* arr , int len);


int main()
{
    int arr[10] = {10,9,8,7,6,5,4,3,2,1};
    
    insertion_sort(arr , 10);
    

    return 1;
}

void shift_element(int* arr, int i)
{
    for (int j = i; j > 0; j--)
    {
        *(arr + j) = *(arr + (j - 1));
    }
}

void insertion_sort(int* arr , int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        int key = 0;
        if( *(arr + i) > *(arr + i + 1))
        {
            key = *(arr + i + 1);
            for (int j = 0; j <= i; j++)
            {
                if(key < *(arr + j))
                {
                    shift_element(arr + j, i - j + 1);
                    *(arr + j) = key;
                    break;
                }
            }
              
        }

        for (int i = 0; i < 10; i++)
     {
             printf("%d," , arr[i]);
     }
            printf("\n");
    }
    
}