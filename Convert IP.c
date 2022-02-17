#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char input[15] = "123.456.789.255";
    char *tmp;
    int  ipSeg[4];  // store the segmented ip
    int  ipResult; // result of 32 bit decimal
    
    tmp = strtok(input, "."); //Segment ip into 4 part
    ipSeg[0] = atoi(tmp);
    
    for(int i = 1 ; i < 4 ; i++){
        tmp = strtok(NULL, ".");
        ipSeg[i] = atoi(tmp);
    }
    
                             //Doing mask for binary and shift them to corect position then combined.
    ipResult = (((ipSeg[0] & 0xff) << 24) | ((ipSeg[1] & 0xff) << 16) | ((ipSeg[2] & 0xff) << 8) | (ipSeg[3] & 0xff));
    
    printf("%d\n",ipResult);
    
    return 0;
}
