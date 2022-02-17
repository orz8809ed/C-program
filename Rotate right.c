#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(){ 
    char input[20];
    int k; 
    
    printf("Enter the word\n");            
    scanf("%s" , input);
    printf("Enter the rotate amount\n");            
    scanf("%d" , &k);
    
    char tmp[k];
    
    memcpy(tmp, input+ (strlen(input)-k), k);    // Copy right k charactar to tmp
    memcpy(input+k, input, strlen(input) - k);   // Shift k position toward right
    memcpy(input,tmp,k);                         // Copy back the k charactar in the bigiining,
                                                 // which means the rotation have been done.    
    printf("%s",input)
    
    return 0;
}
