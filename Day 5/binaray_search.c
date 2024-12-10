#include <stdio.h>

void binarysearch(int arr[],int size, int key){
    int low=0,high=size-1,mid;
    int flag=0;
    while (low<=high)
    {
        mid=(low+high)/2;
        if (arr[mid]==key){
            printf("The key element %d is found at index %d\n",key,mid);
            flag=1;
            break;
        }
        else if (arr[mid]<key)
        {
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    if (!flag){
        printf("The key %d is not present in the given array\n",key);
    }
}

int main(){
    int size,key;
    printf("Enter the size of the array : \n");
    scanf("%d",&size);
    int sort_arr[size];
    printf("Enter the array elements in the asending order : \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&sort_arr[i]);
    }
    printf("Enter the key that need to be searched : \n");
    scanf("%d",&key);
    binarysearch(sort_arr,size,key);
}