int bagOfTokensScore(int* tokens, int tokensSize, int power) {
    
    for(int i=0;i<tokensSize;i++){
        int minindex=i;
        for(int j=i+1;j<tokensSize;j++){
            if(tokens[j]<tokens[minindex]){
                minindex=j;
            }

        }
        int temp=tokens[i];
        tokens[i]=tokens[minindex];
        tokens[minindex]=temp;
    }

    int score=0;
    int left=0;
    int right =tokensSize-1;
    while(left<=right){
        if(power>=tokens[left]){
            score++;
            power -= tokens[left];
            left++;
        }
      else if(score>0 && right>left && tokens[right]>power){
            score--;
            power += tokens[right];
            right--;
        }else if(power >=tokens[right]){

            score--;
            power += tokens[right];
            right--;
        }else{
            break;
        }
    }
    return score;
    
}


 