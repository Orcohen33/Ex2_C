#include <stdio.h>
#include "my_mat.h"



int min(int x, int y){
   if(x<y) return x;
   else return y;
}

//This fucntion represent Floyd Warshell algorithm
//You can get a full explanation here: https://en.wikipedia.org/wiki/Floyd%E2%80%93Warshall_algorithm
void change_matrix_byAlgorithm(int arr[10][10]) {
	for (int k = 0;k < 10;k++) {
		for (int i = 0;i < 10;i++) {
			if (i == k) continue;
			for (int j = 0; j < 10;j++) {
				if (j == k) continue;
				if ((i == j) || (arr[i][j] == 0 && (arr[i][k] == 0 || arr[k][j] == 0))) {
					arr[i][j] = 0;
				}
				else if(arr[i][j] ==0){
					arr[i][j] = arr[i][k] + arr[k][j];
					}
				else if (arr[i][k] != 0 &&
					arr[k][j] != 0) {
					arr[i][j] = min(arr[i][j], arr[i][k] + arr[k][j]);
				}
			}
		}
	}
}

//Create matrix by getting input from the user and fill the matrix with the values are entered.
//By the end of this function we send the matrix that has been made to "floyd warshell algorithm",
//and the explanation found above explain about this algorithm.
//@Param = arr[][]
void create_matrix(int arr[10][10]){
int x ;
  for(int i=0;i<10;i++){
	for(int j=0;j<10;j++){
		scanf("%d", &x);
			arr[i][j] = x;
      	}
	}
	change_matrix_byAlgorithm(arr);
}

//This function represent if there is a route between two vertex :
//if there is a route return "True" else return "False"
void there_is_a_route(int arr[10][10], int i, int j){
	if(arr[i][j] != 0){
	printf("True\n");}
	else {
	printf("False\n");}
}

//This function represent the shortest path between 2 vertex:
//if there is a shortest path it returns his sum edges num (By weight)
//if there is no path it returns "-1"
void shortest_path(int arr[10][10], int i, int j){
	if(arr[i][j] != 0){
	printf("%d\n",arr[i][j]);
	}else{
	printf("-1\n");}
}

