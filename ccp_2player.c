#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	
	srand(time(0));
	int i, j, k=0, z=0, level, lower=0, upper=9, attempt=1;
	int num1[4], num2[4];
	time_t start1, start2, end1, end2;
	
	printf("\t========== WELCOME TO TWO PLAYER MODE ============");
	//instructions
	
	int randomNum1[4];
            for(i=0;i<4;i++){
				randomNum1[i]=(rand()%(upper-lower+1))+lower;
			}
	int randomNum2[4];
            for(i=0;i<4;i++){
				randomNum2[i]=(rand()%(upper-lower+1))+lower;
			}
			
	printf("\nPlayer one's turn:");
	time(&start1);
	
	do{
		printf("\nAttempt %d: ", attempt);
		scanf("%d%d%d%d",&num1[0],&num1[1],&num1[2],&num1[3]);
            z=0;
                for(i=0;i<4;i++){
                        if(num1[i]==randomNum1[i]){
                            printf( " # ");
                            z++;
                            if(z==4)
                                break;
                            continue;
                        }
                        for(j=0;j<4;j++){
                            if(num1[i]==randomNum1[j]){
                                k=1;
                                break;
                            }
                        }
                        if(k!=0)
                            printf(" ~ ");
                        else
                            printf(" x ");
                        k=0;
	}
	attempt++;
}
	while(z!=4);
	time(&end1);
	double time_taken1=difftime(end1, start1);
	
	printf("\nTime taken by 1st player: %.2f seconds", time_taken1);
	attempt=1;
	
	printf("\nPlayer two's turn:");
	time(&start2);
	
	do{
		printf("\nAttempt %d: ", attempt);
		scanf("%d%d%d%d",&num2[0],&num2[1],&num2[2],&num2[3]);
            z=0;
                for(i=0;i<4;i++){
                        if(num2[i]==randomNum2[i]){
                            printf(" # ");
                            z++;
                            if(z==4)
                                break;
                            continue;
                        }
                        for(j=0;j<4;j++){
                            if(num2[i]==randomNum2[j]){
                                k=1;
                                break;
                            }
                        }
                        if(k!=0)
                            printf(" ~ ");
                        else
                            printf(" x ");
                        k=0;
	}
	attempt++;
}
	while(z!=4);
	time(&end2);
	double time_taken2=difftime(end2, start2);
	
	printf("\nTime taken by 2nd player: %.2f seconds", time_taken2);
	
	if(time_taken1<time_taken2)
	printf("\n1ST PLAYER WON!");
	else
	printf("\n2ND PLAYER WON!");
			
	return 0;
}