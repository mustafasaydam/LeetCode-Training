int findLongestChain(int** pairs, int pairsSize, int* pairsColSize){
    
    int ret = 1;
    int *tmp;
    
    for(int i = 0; i < pairsSize - 1; i++){
        for(int j = i + 1; j < pairsSize; j++){
            if(pairs[i][1] > pairs[j][1]){
                tmp = pairs[i];
                pairs[i] = pairs[j];
                pairs[j] = tmp;            
            }
        }
    }
    int i,j;
    for(int i = 0; i < pairsSize - 1; i++){
        j = i + 1;
        while (j < pairsSize){
            if(pairs[j][0] > pairs[i][1]){
                ret++;
                i = j;
            }
            j++;
        }
    }
    *pairsColSize = 2;
    return(ret);
}