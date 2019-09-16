#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;

#define UNASSIGNED 0
#define SQN 3
#define N 9
bool isSafe(int grid[N][N], int row, int col, int num);
bool FindUnassignedLocation(int grid[N][N], int &row, int &col);
bool UsedInRow(int grid[N][N], int row, int num);
bool UsedInCol(int grid[N][N], int col, int num);
bool UsedInBox(int grid[N][N], int boxStartRow, int boxStartCol, int num);

bool SolveSudoku(int grid[N][N])
{ 	int row, col;
if (!FindUnassignedLocation(grid, row, col))
return true; // success!

for (int num = 1; num <= N; num++)
{
if (isSafe(grid, row, col, num)) // if looks promising
{
		grid[row][col] = num; // make tentative assignment
		if (SolveSudoku(grid)) // return, if success
				return true;
		grid[row][col] = UNASSIGNED; // failure, unmake & try again
}
} return false; // this triggers backtracking
}

bool FindUnassignedLocation(int grid[N][N], int &row, int &col)
{
		for (row = 0; row < N; row++)
				for (col = 0; col < N; col++)
						if (grid[row][col] == UNASSIGNED)
								return true;
return false;
}

bool isSafe(int grid[N][N], int row, int col, int num)
{
return !UsedInRow(grid, row, num) && !UsedInCol(grid, col, num)
 				&& !UsedInBox(grid, row - row%SQN , col - col%SQN, num);
}

bool UsedInRow(int grid[N][N], int row, int num)
{
for (int col = 0; col < N; col++)
	if (grid[row][col] == num)
		return true;
return false; }

bool UsedInCol(int grid[N][N], int col, int num)
{
for (int row = 0; row < N; row++)
	if (grid[row][col] == num)
			return true;
return false; }

bool UsedInBox(int grid[N][N], int boxStartRow, int boxStartCol, int num)
{
for (int row = 0; row < SQN; row++)
	for (int col = 0; col < SQN; col++)
		if (grid[row+boxStartRow][col+boxStartCol] == num)
			return true;
return false;
}

int main(int argc, char **argv)
{
	int grid[N][N];
	cout<<"\nEnter the matrix \n";
	for(int i=0;i<N;i++){
	for(int j=0;j<N;j++){
	cin>>grid[i][j];
}}
if(SolveSudoku(grid)){
	cout<<"\n Sudoku Solved!\n";
	for(int i=0;i<N;i++){
	for(int j=0;j<N;j++){
	cout<<grid[i][j]<<"  ";
}
cout<<"\n";
}
}
else
cout<<"\n No solution exists";
return 0;
}
