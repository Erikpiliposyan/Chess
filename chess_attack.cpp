#include <iostream>
#include <string>

class attack {
public:
    void att_k(int x, int y, int** matrix2) {
	matrix2[x][y]++;
	if (y != 0 && y != 7)
	{
		if (x != 0 && x != 7)
		{
			matrix2[x][y + 1]++;
			matrix2[x][y - 1]++;
			matrix2[x + 1][y + 1]++;
			matrix2[x - 1][y - 1]++;
			matrix2[x - 1][y + 1]++;
			matrix2[x + 1][y - 1]++;
			matrix2[x + 1][y]++;
			matrix2[x - 1][y]++;
		}
		if (x == 0)
		{
			matrix2[x][y + 1]++;
			matrix2[x + 1][y + 1]++;
			matrix2[x + 1][y]++;
			matrix2[x + 1][y - 1]++;
			matrix2[x][y - 1]++;
		}
		else if (x == 7) {
			matrix2[x][y + 1]++;
			matrix2[x - 1][y + 1]++;
			matrix2[x - 1][y]++;
			matrix2[x - 1][y - 1]++;
			matrix2[x][y - 1]++;
		}
	}
	else if (y == 0)
	{
		if (x != 0 && x != 7)
		{
			matrix2[x][y + 1]++;
			matrix2[x + 1][y + 1]++;
			matrix2[x - 1][y + 1]++;
			matrix2[x + 1][y]++;
			matrix2[x - 1][y]++;
		}
		if (x == 0)
		{
			matrix2[x][y + 1]++;
			matrix2[x + 1][y + 1]++;
			matrix2[x + 1][y]++;
		}
		else if (x == 7) {
			matrix2[x][y + 1]++;
			matrix2[x - 1][y + 1]++;
			matrix2[x - 1][y]++;
		}
	}
	else if (y == 7)
	{
		if (x != 0 && x != 7)
		{
			matrix2[x][y + 1]++;
			matrix2[x + 1][y + 1]++;
			matrix2[x - 1][y + 1]++;
			matrix2[x + 1][y]++;
			matrix2[x - 1][y]++;
		}
		if (x == 0)
		{
			matrix2[x][y - 1]++;
			matrix2[x + 1][y - 1]++;
			matrix2[x + 1][y]++;
		}
		else if (x == 7) {
			matrix2[x][y - 1]++;
			matrix2[x - 1][y - 1]++;
			matrix2[x - 1][y]++;
		}
	}
}
void att_q(int x, int y, int rows, std::string name, int** matrix2, std::string** matrix1) {
	matrix2[x][y] -= 4;
	for (int i = x; i < rows; i++)
	{
		if (matrix1[i][y] != "__" && matrix1[i][y] != name && matrix1[i][y] != "WK")
		{
			break;
		}
		matrix2[i][y]++;
	}
	for (int i = x; i >= 0; i--)
	{
		if (matrix1[i][y] != "__" && matrix1[i][y] != name && matrix1[i][y] != "WK")
		{
			break;
		}
		matrix2[i][y]++;
	}
	for (int i = 0; i < rows; i++)
	{
		if (matrix1[x][i] != "__" && matrix1[x][i] != name && matrix1[x][i] != "WK")
		{
			break;
		}
		matrix2[x][i]++;
	}
	for (int i = 0; i >= 0; i--)
	{
		if (matrix1[x][i] != "__" && matrix1[x][i] != name && matrix1[x][i] != "WK")
		{
			break;
		}
		matrix2[x][i]++;
	}

	int i = x, j = y;
	do {
		if (matrix1[i][j] != "__" && matrix1[i][j] != name && matrix1[i][j] != "WK") {
			break;
		}
		matrix2[i][j]++;
		i++;
		j++;
	} while (i >= 0 && i < 8 && j >= 0 && j < 8);

	i = x, j = y;
	do {
		if (matrix1[i][j] != "__" && matrix1[i][j] != name && matrix1[i][j] != "WK") {
			break;
		}
		matrix2[i][j]++;
		i--;
		j++;
	} while (i >= 0 && i < 8 && j >= 0 && j < 8);

	i = x, j = y;
	do {
		if (matrix1[i][j] != "__" && matrix1[i][j] != name && matrix1[i][j] != "WK") {
			break;
		}
		matrix2[i][j]++;
		i--;
		j--;
	} while (i >= 0 && i < 8 && j >= 0 && j < 8);

	i = x, j = y;
	do {
		if (matrix1[i][j] != "__" && matrix1[i][j] != name && matrix1[i][j] != "WK") {
			break;
		}
		matrix2[i][j]++;
		i++;
		j--;
	} while (i >= 0 && i < 8 && j >= 0 && j < 8);
}
void att_b(int x, int y, std::string name, int** matrix2, std::string** matrix1) {
	matrix2[x][y] -= 3;
	int i = x, j = y;
	do {
		if (matrix1[i][j] != "__" && matrix1[i][j] != name && matrix1[i][j] != "WK") {
			break;
		}
		matrix2[i][j]++;
		i++;
		j++;
	} while (i >= 0 && i < 8 && j >= 0 && j < 8);

	i = x, j = y;
	do {
		if (matrix1[i][j] != "__" && matrix1[i][j] != name && matrix1[i][j] != "WK") {
			break;
		}
		matrix2[i][j]++;
		i--;
		j++;
	} while (i >= 0 && i < 8 && j >= 0 && j < 8);

	i = x, j = y;
	do {
		if (matrix1[i][j] != "__" && matrix1[i][j] != name && matrix1[i][j] != "WK") {
			break;
		}
		matrix2[i][j]++;
		i--;
		j--;
	} while (i >= 0 && i < 8 && j >= 0 && j < 8);

	i = x, j = y;
	do {
		if (matrix1[i][j] != "__" && matrix1[i][j] != name && matrix1[i][j] != "WK") {
			break;
		}
		matrix2[i][j]++;
		i++;
		j--;
	} while (i >= 0 && i < 8 && j >= 0 && j < 8);
}

void att_n(int x, int y, int** matrix2) {
	matrix2[x][y]++;
	if (x != 1 && x != 0 && x != 6 && x != 7)
	{
		if (y == 1) {
			matrix2[x - 2][y + 1]++;
			matrix2[x - 2][y - 1]++;
			matrix2[x - 1][y + 2]++;
			matrix2[x + 2][y + 1]++;
			matrix2[x + 2][y - 1]++;
			matrix2[x + 1][y + 2]++;

		}
		else if (y == 6) {
			matrix2[x + 2][y + 1]++;
			matrix2[x + 2][y - 1]++;
			matrix2[x + 1][y - 2]++;
			matrix2[x - 2][y + 1]++;
			matrix2[x - 2][y - 1]++;
			matrix2[x - 1][y - 2]++;
		}
		else if (y == 0) {
			matrix2[x - 2][y + 1]++;
			matrix2[x - 1][y + 2]++;
			matrix2[x + 2][y + 1]++;
			matrix2[x + 1][y + 2]++;
		}
		else if (y == 7) {
			matrix2[x - 2][y - 1]++;
			matrix2[x - 1][y - 2]++;
			matrix2[x + 2][y - 1]++;
			matrix2[x + 1][y - 2]++;
		}
		else {
			matrix2[x + 2][y + 1]++;
			matrix2[x + 2][y - 1]++;
			matrix2[x + 1][y - 2]++;
			matrix2[x + 1][y + 2]++;
			matrix2[x - 2][y + 1]++;
			matrix2[x - 2][y - 1]++;
			matrix2[x - 1][y - 2]++;
			matrix2[x - 1][y + 2]++;
		}
	}
	else if (x == 0) {
		if (y == 1) {
			matrix2[x + 2][y + 1]++;
			matrix2[x + 2][y - 1]++;
			matrix2[x + 1][y + 2]++;
		}
		else if (y == 6) {
			matrix2[x + 2][y - 1]++;
			matrix2[x + 2][y + 1]++;
			matrix2[x + 1][y - 2]++;
		}
		else if (y == 0) {
			matrix2[x + 2][y + 1]++;
			matrix2[x + 1][y + 2]++;
		}
		else if (y == 7) {
			matrix2[x + 2][y - 1]++;
			matrix2[x + 1][y - 2]++;
		}
		else {
			matrix2[x + 2][y - 1]++;
			matrix2[x + 2][y + 1]++;
			matrix2[x + 1][y + 2]++;
			matrix2[x + 1][y - 2]++;
		}
	}
	else if (x == 7) {
		if (y == 1) {
			matrix2[x - 2][y + 1]++;
			matrix2[x - 2][y - 1]++;
			matrix2[x - 1][y + 2]++;
		}
		else if (y == 6) {
			matrix2[x - 2][y - 1]++;
			matrix2[x - 2][y + 1]++;
			matrix2[x - 1][y - 2]++;
		}
		else if (y == 0) {
			matrix2[x - 2][y + 1]++;
			matrix2[x - 1][y + 2]++;
		}
		else if (y == 7) {
			matrix2[x - 2][y - 1]++;
			matrix2[x - 1][y - 2]++;
		}
		else {
			matrix2[x - 2][y - 1]++;
			matrix2[x - 2][y + 1]++;
			matrix2[x - 1][y + 2]++;
			matrix2[x - 1][y - 2]++;
		}
	}
	else if (x == 1) {
		if (y == 1) {
			matrix2[x + 2][y + 1]++;
			matrix2[x + 2][y - 1]++;
			matrix2[x + 1][y + 2]++;
			matrix2[x - 1][y + 2]++;
		}
		else if (y == 6) {
			matrix2[x + 2][y - 1]++;
			matrix2[x + 2][y + 1]++;
			matrix2[x + 1][y - 2]++;
			matrix2[x - 1][y - 2]++;
		}
		else if (y == 0) {
			matrix2[x + 2][y + 1]++;
			matrix2[x + 1][y + 2]++;
			matrix2[x - 1][y + 2]++;
		}
		else if (y == 7) {
			matrix2[x + 2][y - 1]++;
			matrix2[x + 1][y - 2]++;
			matrix2[x - 1][y - 2]++;
		}
		else {
			matrix2[x + 2][y + 1]++;
			matrix2[x + 1][y + 2]++;
			matrix2[x - 1][y + 2]++;
			matrix2[x + 2][y - 1]++;
			matrix2[x + 1][y - 2]++;
			matrix2[x - 1][y - 2]++;
		}
	}
	else if (x == 1) {
		if (y == 1) {
			matrix2[x + 2][y + 1]++;
			matrix2[x + 2][y - 1]++;
			matrix2[x + 1][y + 2]++;
			matrix2[x - 1][y + 2]++;
		}
		else if (y == 6) {
			matrix2[x + 2][y - 1]++;
			matrix2[x + 2][y + 1]++;
			matrix2[x + 1][y - 2]++;
			matrix2[x - 1][y - 2]++;
		}
		else if (y == 0) {
			matrix2[x + 2][y + 1]++;
			matrix2[x + 1][y + 2]++;
			matrix2[x - 1][y + 2]++;
		}
		else if (y == 7) {
			matrix2[x + 2][y - 1]++;
			matrix2[x + 1][y - 2]++;
			matrix2[x - 1][y - 2]++;
		}
		else {
			matrix2[x + 2][y + 1]++;
			matrix2[x + 1][y + 2]++;
			matrix2[x - 1][y + 2]++;
			matrix2[x + 2][y - 1]++;
			matrix2[x + 1][y - 2]++;
			matrix2[x - 1][y - 2]++;
		}
	}
	else if (x == 6) {
		if (y == 1) {
			matrix2[x - 2][y + 1]++;
			matrix2[x - 2][y - 1]++;
			matrix2[x + 1][y + 2]++;
			matrix2[x - 1][y + 2]++;
		}
		else if (y == 6) {
			matrix2[x - 2][y - 1]++;
			matrix2[x - 2][y + 1]++;
			matrix2[x + 1][y - 2]++;
			matrix2[x - 1][y - 2]++;
		}
		else if (y == 0) {
			matrix2[x - 2][y + 1]++;
			matrix2[x + 1][y + 2]++;
			matrix2[x - 1][y + 2]++;
		}
		else if (y == 7) {
			matrix2[x - 2][y - 1]++;
			matrix2[x + 1][y - 2]++;
			matrix2[x - 1][y - 2]++;
		}
		else {
			matrix2[x - 2][y - 1]++;
			matrix2[x - 2][y + 1]++;
			matrix2[x + 1][y - 2]++;
			matrix2[x - 1][y - 2]++;
			matrix2[x + 1][y + 2]++;
			matrix2[x - 1][y + 2]++;
		}
	}
}

};