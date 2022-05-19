#include<stdio.h>

int maxArray(int[], int);

int main() {
    int arr[] = {4,3,1,6,5};
    
    // passing array to the function
    int max_element = maxArray(arr, 5);
    
    printf("Max element in array = %d", max_element);
    return 0;
}

int maxArray(int array[], int n) {
    int max_element = array[0], i;
    for(i = 1; i < n; i++) {
        if(array[i] > max_element) {
            max_element = array[i];
        }
    }
    return max_element;
}
