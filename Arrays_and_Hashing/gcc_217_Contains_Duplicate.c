#include <stdio.h>
#include <stdbool.h>


/* We want to determine if an array contains a duplicate integer, we will proceed as follows:
    1- sorting the array
    2- if there are two equal consecutive integers we return false, else we return true
*/

void sort(int* nums, int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - 1 - i; j++){
            if (nums[j] > nums[j+1]){
                int temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1]= temp;
            }
            
        }

    }
}


bool containsDuplicate(int* nums, int numsSize){
    sort(nums, numsSize);
    for( int i = 0; i < numsSize-1; i++){
        if (nums[i] == nums[i+1]){
            return true;
        }
    }
    return false;
}
// Testing !!!
int main(){
    int a[] = {9,6,2,1};
    int b[] = {9,5,2,1,5};


    printf("%s\n" ,containsDuplicate(a,sizeof(a)/sizeof(a[0])) ? "true" : "false");
    printf("%s\n" ,containsDuplicate(b,sizeof(b)/sizeof(b[0])) ? "true": "false");
}