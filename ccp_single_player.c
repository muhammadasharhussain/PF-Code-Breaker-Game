#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	
	srand(time(0));
        int i, j, k=0, z=0, attempt, score=115, level, lower, upper, y, l, m;
        time_t start, end;
        
        printf("\t==========🎉🎃WELCOME TO SINGLE PLAYER MODE🎃🎉============");
        printf("\nChoose difficulty Level:\n1. Easy\n2. Medium\n3. Hard\n");
        scanf("%d", &level);
        
        int randomNum1[3];
            for(y=0;y<3;y++){
            	lower=0, upper=9;
				randomNum1[y]=(rand()%(upper-lower+1))+lower;
			}
		int randomNum2[4];
            for(l=0;l<4;l++){
            	lower=0, upper=9;
				randomNum2[l]=(rand()%(upper-lower+1))+lower;
			}
		int randomNum3[5];
            for(m=0;m<5;m++){
            	lower=0, upper=9;
				randomNum3[m]=(rand()%(upper-lower+1))+lower;
			}

        for(attempt=1;attempt<=5;attempt++){
        printf("\nAttempt %d: " ,attempt);
        time(&start);

        switch (level)
        {
        case 1:{
        
            int num[3];
            scanf("%d%d%d",&num[0],&num[1],&num[2]);
            z=0;
                for(i=0;i<3;i++){
                        if(num[i]==randomNum1[i]){
                            printf( " ✅");
                            z++;
                            if(z==3)
                                break;
                            continue;
                        }
                        for(j=0;j<3;j++){
                            if(num[i]==randomNum1[j]){
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
                if(z==3){
                    break;
                    break;
                    }
        break;
    }
            
        
        case 2:{

            int num[4];
            scanf("%d%d%d%d",&num[0],&num[1],&num[2],&num[3]);
            z=0;
                for(i=0;i<4;i++){
                        if(num[i]==randomNum2[i]){
                            printf( " ✅");
                            z++;
                            if(z==4)
                                break;
                            continue;
                        }
                        for(j=0;j<4;j++){
                            if(num[i]==randomNum2[j]){
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
                    break;
                    break;
                    }
        break;
        }

        
        case 3:{
 
            int num[5];
            scanf("%d%d%d%d%d",&num[0],&num[1],&num[2],&num[3],&num[4]);
            z=0;
                for(i=0;i<5;i++){
                        if(num[i]==randomNum3[i]){
                            printf( " ✅");
                            z++;
                            if(z==5)
                                break;
                            continue;
                        }
                        for(j=0;j<5;j++){
                            if(num[i]==randomNum3[j]){
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
                    break;
                    break;
                    }
        break;   
    }
    
        default:
            printf("Invalid Option.");
    }
    if (level == 1 && z == 3) break;
    else if (level == 2 && z == 4) break;
    else if (level == 3 && z == 5) break;
    }
    time(&end);

    if (level == 1 && z == 3) printf("\nYou Won!");
    else if (level == 2 && z == 4) printf("\nYou Won!");
    else if (level == 3 && z == 5) printf("\nYou Won!");
    else {
        printf("\nYou Lost!");
        score = 0;
        switch(level){
        	case 1:
			printf("\nThe number is ");
        	for(int x=0;x<3;x++){
        		printf("%d", randomNum1[x]);
			}
			break;
			case 2:
					printf("\nThe number is ");
					for(int x=0;x<4;x++){
					printf("%d", randomNum2[x]);
			}
			break;
			case 3:
					printf("\nThe number is ");
					for(int x=0;x<5;x++){
					printf("%d", randomNum3[x]);
			}
			break;
		}
		}
		double time_taken=difftime(end, start);

    printf("\n Your score is %d\nTime taken = %.2fsec", score, time_taken);


    return 0;
}