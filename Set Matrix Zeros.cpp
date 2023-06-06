#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	bool firstElement = 0;
	if(matrix[0][0] == 0){
		firstElement = 1;
	}
	bool firstElementRow = 0, firstElementCol = 0;
	int n = matrix.size(),m = matrix[0].size();
	for(int i= 1;i<n;i++){
		if(matrix[i][0] == 0)firstElementCol = 1;
	}
	for(int i= 1;i<m;i++){
		if(matrix[0][i] == 0)firstElementRow = 1;
	}
	for(int i= 1;i<n;i++){
		for(int j = 1;j<m;j++){
			if(matrix[i][j] == 0){
				matrix[0][j] = 0;
				matrix[i][0] = 0;
			}
		}
	}
	for(int i = 1;i<m;i++){
		for(int j = 1;j<n;j++){
			if(matrix[0][i] == 0){
				matrix[j][i] = 0;
			}
		}
	}
	for(int i = 1;i<n;i++){
		for(int j = 1;j<m;j++){
			if(matrix[i][0] == 0){
				matrix[i][j] = 0;
			}
		}
	}
	if(firstElementCol == 1){
		for(int i= 0;i<n;i++){
			matrix[i][0] = 0;
		}
	}
	if(firstElementRow == 1){
		for(int i= 0;i<m;i++){
			matrix[0][i] = 0;
		}
	}
	if(firstElement == 1){
		for(int i= 0;i<m;i++){
			matrix[0][i] = 0;
		}
		for(int i= 0;i<n;i++){
			matrix[i][0] = 0;
		}
	}
}
