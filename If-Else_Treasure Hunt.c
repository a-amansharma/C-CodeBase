#include <stdio.h>

int main() {
    int a,b,c,d,e,f;
    scanf("%d",&a);
    if(a==1){
        printf("Player chooses the Left path.\n");
        scanf("%d",&b);
        if(b==1){
            printf("Poor choice, Game Over!\n");
            return 0;
        }
        else if(b==2){
            printf("Player found a bridge.\n");
            scanf("%d",&c);
            if(c==1){
                printf("Player crosses the bridge safely.\n");
            }
            else if(c==2){
                printf("Poor luck, Game Over!\n");
                return 0;
            }
        }
    }
    else if(a==2){
        printf("Player chooses the Middle path.\n");
        scanf("%d",&d);
        if(d==582){
            printf("Player solved the puzzle.\n");
        }
        else{
            printf("Foolish player, Game Over!\n");
            return 0;
        }
    }
    else if(a==3){
        printf("Player chooses the Right path.\n");
        scanf("%d",&e);
        if(e==30){
            printf("Player solved the puzzle.\n");
        }
        else{
            printf("Foolish player, Game Over!\n");
            return 0;
        }
    }

        scanf("%d",&f);
        if(f==1){
            printf("All that glitters is not gold, Game Over!");
        }
        else if(f==2){
            printf("All your efforts were for nothing, Game Over!");
        }
        else if(f==3){
            printf("Congratulations!! You won the treasure.");
        }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}