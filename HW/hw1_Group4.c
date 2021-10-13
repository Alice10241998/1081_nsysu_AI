#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){
	int i,k,m,n,o, random,array[100],arraykeep[100],counter;
	srand(time(NULL));
	
	for(i=0;i<100;i++){               //random 

		array[i]=rand()%2;    
		arraykeep[i]=array[i];
	}


	for(counter=1;counter<=1000;counter++){
	random=rand()%100;
	array[random]=!array[random];

    for(m=0;m<100;m++){              //change or not
    	if(array[m]>arraykeep[m]){ 
            arraykeep[random]=array[random];
            
        }  
	}
	array[random]=arraykeep[random];
	}
	for(o=0;o<100;o++)
	printf("%d",arraykeep[o]);
	
	return 0;
}
