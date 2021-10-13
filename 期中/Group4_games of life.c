//�Ĥ@�ӧ�v�� 
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
int main(){
	srand(time(NULL));
	
	int i,j,k,l,keep;
	int num[20][20],save[20][20];
	char arr[20][20];
	
	for(i=0;i<20;i++){
		for(j=0;j<20;j++){
			arr[i][j]=' ';
			num[i][j]=0;
			save[i][j]=0;
	    }
	}
    
    //�ĤG�ӧ�v�� 
    for(i=1;i<19;i++){
		for(j=0;j<19;j++){
			num[i][j]=rand()%2;
		}
	}
	
	//�ĤT�ӧ�v�� 
	for(i=0;i<20;i++){
		for(j=0;j<20;j++){
				if(num[i][j]==1)
					arr[i][j]='o';
				else
					arr[i][j]=' '; 
		}	
	}
	for(i=0;i<20;i++){
		for(j=0;j<20;j++){
			printf("%c",arr[i][j]);
		} 
		printf("\n");	
	} 
	
	//�ĥ|�ӧ�v�� :Conway�Ϥ����U 
	while(1){
		
		for(k=1;k<19;k++){
			for(l=1;l<19;l++){
				keep=num[k-1][l-1]+num[k-1][l]+num[k-1][l+1]+num[k][l-1]+num[k][l+1]+num[k+1][l-1]+num[k+1][l]+num[k+1][l+1];
				if(num[k][l]==1){
					if(keep<2)
				    	save[k][l]=0;
				    else if(keep==2 || keep==3)
						save[k][l]=1;
					else if(keep>3)
						save[k][l]=0; 
				}
				else if(num[k][l]==0){
					if(keep==3)
						save[k][l]=1;
					else 
						save[k][l]=0;
				}
			}
		}
		
		//�Ĥ��ӧ�v�� 
		for(i=0;i<20;i++){
			for(j=0;j<20;j++){
				num[i][j]=save[i][j];
			}	
		} 
		
		//�Ĥ��ӧ�v�� 
		for(i=0;i<20;i++){
			for(j=0;j<20;j++){
				if(num[i][j]==1)
					arr[i][j]='o';
				else
					arr[i][j]=' '; 
			}	
		}
		
		system("cls");
		for(i=0;i<20;i++){
			for(j=0;j<20;j++){
			printf("%c",arr[i][j]); 
			}
			printf("\n");	
		} 
		
		Sleep(20);
		
	}//while�j�� 
	
	return 0;
} 
