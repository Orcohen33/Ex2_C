#include <stdio.h>
#include "my_mat.h"
int main(){
	int arr[10][10],i,j;
	char _case ='w';
	while(_case!='D'){
	scanf("%s",&_case);
		if(_case=='A'){
			create_matrix(arr);
//			change_matrix_byAlgorithm(arr);
		}
		if(_case=='B'){
		scanf("%d", &i);
		scanf("%d", &j);
		there_is_a_route(arr,i,j);
		}
		if(_case=='C'){
		scanf("%d", &i);
        scanf("%d", &j);
		shortest_path(arr,i,j);
		}
	}
	return 0;
}

