#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    
    char chr[20];
    
    scanf("%s", chr);
    
    char tmp;
    int left = 0;                  // pointer of left
    int right = strlen(chr) - 1;   // pointer of right
    
    while( left < right ){         // Using two pointer method to change the left char and 
        tmp = chr[left];           // Right char in once. Which means change the first left
        chr[left] = chr[right];    // and first right, then chagne 2nd left and 2nd right.
        chr[right] = tmp;          // Untill the pointers meet each other means done.
        left++;
        right--;
    }
    
    printf("%s" ,chr);
    return 0;
}