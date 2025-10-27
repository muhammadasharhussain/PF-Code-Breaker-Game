#include<stdio.h>
int main(){
    int i,j,k=0,z=0,attempt,score=115,level;
    int randomNum[4]={0,6,8,9};
    int num[4];
 
  for(attempt=1;attempt<=5;attempt++){
        printf("\nAttempt %d: " ,attempt);

        scanf("%d%d%d",&num[0],&num[1],&num[2]);
        z=0;
            for(i=0;i<4;i++){
                    if(num[i]==randomNum[i]){
                        printf( " ✅");
                        z++;
                        if(z==4)
                            break;
                        continue;
                    }
                    for(j=0;j<4;j++){
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
            if(z==4){
                printf("\nYou Won!");
                break;
            }
    }if(z!=4){
        printf("\nYou Lost!");
        score=0;
    }   
        printf(" Your score is %d",score);
return 0;

}