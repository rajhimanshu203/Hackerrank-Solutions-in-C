#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct node{
    int data;
    int *array;
};

int main() {
    long n,q;
    scanf("%li%li",&n,&q);
    long query[q][3];
    long i,j;
    for(i=0;i<q;i++){
        for(j=0;j<3;j++){
            scanf("%li",&query[i][j]);
        }
    }

    struct node* sequence;
    sequence=(struct node*)malloc(n*sizeof(struct node));
    for(i=0;i<n;i++){
    	(sequence+i)->data=0;
    	(sequence+i)->array=NULL;
    }

    long t,lastans,temp;
    lastans=0;

    for(i=0;i<q;i++){
        t = (abs(query[i][1]^lastans)) % n;
        if(query[i][0]==1){
        	temp=(sequence+t)->data;
        	(sequence+t)->data++;
        	(sequence+t)->array=realloc((sequence+t)->array,(sequence+t)->data);
        	(sequence+t)->array[temp]=query[i][2];
        }
        else if(query[i][0]==2){
            temp=(query[i][2])%((sequence+t)->data);
            lastans=(sequence+t)->array[temp];
            printf("%li\n",lastans);
        }
    }


    return 0;
}
