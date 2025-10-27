#include<stdio.h>
int main(){
    int i,j,k=0,z=0,attempt,score=115,level;
    int randomNum[5]={0,6,8,9,1};
    int num[5];
 
  for(attempt=1;attempt<=5;attempt++){
        printf("\nAttempt %d: " ,attempt);

        scanf("%d%d%d",&num[0],&num[1],&num[2]);
        z=0;
            for(i=0;i<5;i++){
                    if(num[i]==randomNum[i]){
                        printf( " ✅");
                        z++;
                        if(z==5)
                            break;
                        continue;
                    }
                    for(j=0;j<5;j++){
                        if(num[i]==randomNum[j]){
                            k=1;
                            break;
                        }
                    }
                    if(k!=0)
                        printf(" 🧐 ");
                    else
                        printf(" ❌ ");
                    k=0;
            }
            score-=15;
            if(z==5){
                printf("\nYou Won!");
                break;
            }
    }if(z!=5){
        printf("\nYou Lost!");
        score=0;
    }   
        printf(" Your score is %d",score);
return 0;

}