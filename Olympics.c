/*  Creates list of rankings for olympics.
    The gold,silver, and bronze metals are weighted depending on year of olympics entered.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main (int argc, char *argv[]){
    struct nation{
        char name[20];
        int gold;
        int silver;
        int bronze;
        int score;
    };
    struct nation nations[] = {{"Unified Team", 45,38,29,0},
    {"United States",37,34,37,0},{"Germany",33,21,28,0}, {"China",16,22,16},
    {"Cuba",14,6,11,0},{"Spain", 13,7,2,0}, {"South Korea",12,5,12,0},
    {"Hungary",11,12,7,0},{"France",8,5,16,0}, {"Australia",7,9,11,0}};
    int x=0;
    int y=0;
    int g,s,b;
    
    if(atoi(argv[1])>2003){
        //most gold
    } else if(atoi(argv[1])>1931){
        g=10;
        s=5;
        b=4;
    }else if(atoi(argv[1])>1927){
        g=6;
        s=5;
        b=4;
    } else if(atoi(argv[1])>1923){
        g=10;
        s=5;
        b=4;
    } else if(atoi(argv[1])>1911){
        g=3;
        s=2;
        b=1;
    } else{
        g=5;
        s=3;
        b=1;
        printf("NOOO");
    }
    
    while(x<10){
         nations[x].score =((nations[x].gold*g)+(nations[x].silver*s)+(nations[x].bronze*b));
         printf("%d. %s score: %d \n",x, nations[x].name,nations[x].score);
         x++;
    }
    
    int temp;
    int index;
    int z=0;
    while(z<10){
        printf("Hi");
        while(y<10){
            if(nations[y].score>temp){
                index=y;
                temp=nations[y].score;
                
            }
            y++;
        }
        y=0;
        temp=0;
        printf("%d. %s",y,nations[index].name);
        z++;
    }
    

   printf("Year: %d \n", atoi(argv[1]));
    return 0;
}