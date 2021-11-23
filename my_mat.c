#include <stdio.h>
#include "my_mat.h"



int min(int x, int y){
   if(x<y) return x;
   else return y;
}

void change_matrix_byAlgorithm(int arr[10][10]) {
	for (int k = 0;k < 10;k++) {
		for (int i = 0;i < 10;i++) {
			if (i == k) continue;
			for (int j = 0; j < 10;j++) {
				if (j == k) continue;
				if ((i == j) || (arr[i][j] == 0 && arr[i][k] == 0) || (arr[i][j] == 0 && arr[k][j] == 0)) {
					arr[i][j] = 0;
				}
				else if (arr[i][k] != 0 &&
					arr[k][j] != 0) {
					arr[i][j] = min(arr[i][j], arr[i][k] + arr[k][j]);
				}
			}
		}
	}
}

void create_matrix(int arr[10][10]){
int x ,check_input;
  for(int i=0;i<10;i++){
	for(int j=0;j<10;j++){
		check_input=scanf("%d", &x);
		if(check_input!=0){
			arr[i][j] = x;
		}else{
			arr[i][j]=0;
		}
      }
	}
  change_matrix_byAlgorithm(arr);
}



void there_is_a_route(int arr[10][10], int i, int j){
	if(arr[i][j] != 0){
	printf("True \n");}
	else {
	printf("False \n");}
}

void shortest_path(int arr[10][10], int i, int j){
	if(arr[i][j] != 0){
	printf("%d\n",arr[i][j]);
	}else{
	printf("-1\n");}
}

