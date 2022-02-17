#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(){ 
    char isogram[20];          // input
    char checkPool[20];        // Store the charactar that have pass through.
    
    printf("Enter the word\n");              
    scanf("%s",isogram);
    
    for(int i = 0 ; i < strlen(isogram) ; i++ ){       // Using a double loop to search every previus
                                                       // before the pivot caharactar.
        for(int j = 0 ; j < strlen(checkPool) ; j++ ){
            
            if(isogram[i] == checkPool[j]){            // Check the charactar in checkPool.
                printf("This is not isogram");         // If there are same charactar, report and return.
                return 0;
            }
        }
        checkPool[i] = isogram[i];                     // Stored the pivot into checkPool
    }
                                                       // If it pass the whole checking process means 
    printf("\n!!!!!!!\nisogram\n!!!!!!!");             // Its a Isogram!
    return 0;
}
