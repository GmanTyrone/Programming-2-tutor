#include <bits/stdc++.h>

const int N = 10;

int n, x, y, z;
char view[N][6][N], res[N][N][N];


//transformation
void tra(int i, int j, int k, int l) {
    if (j == 0) {x = i; y = k; z = l;}
    if (j == 1) {x = i, y = l; z = n - 1 - k;}
    if (j == 2) {x = i; y = n - 1 - k; z = n - 1 - l;}
    if (j == 3) {x = i; y = n - 1 - l; z = k;}
    if (j == 4) {x = l; y = k; z = n - 1 - i;}
    if (j == 5) {x = n - 1 - l; y = k; z = i;}
}

int solve() {
    while (1) {
	int flag = true;
	for (int i = 0; i < n; i ++){
	    for (int j = 0; j < 6; j ++){
            for (int k = 0; k < n; k ++) {
                if (view[i][j][k] != '.') {
                    for (int l = 0; l < n; l ++) {
                        tra(i, j, k, l);
                        if (res[x][y][z] == '.') continue;
                        if (res[x][y][z] == '#') res[x][y][z] = view[i][j][k];
                        if (res[x][y][z] == view[i][j][k]) break;
                        res[x][y][z] = '.';
                        flag = false;
                    }
                }
            }
	    }
	}
	if (flag) break;
    }

    //Counting the blocks
    int ans = 0;
    for (int i = 0; i < n; i ++){
        for (int j = 0; j < n; j ++){
            for (int k = 0; k < n; k ++){
                if (res[i][j][k] != '.') ans ++;
            }
        }
    }
    return ans;
}

int main() {
    while (~scanf("%d%*c", &n) && n) {
        //Initialize cube with all #
        for (int i = 0; i < n; i ++){
            for (int j = 0; j < n; j ++){
                for (int k = 0; k < n; k ++)
                    res[i][j][k] = '#';
            }
        }

        //Scan the input
        for (int i = 0; i < n; i ++){
            for (int j = 0; j < 6; j ++) {
                for (int k = 0; k < n; k ++) {
                    scanf("%c", &view[i][j][k]); //Until here it scans
                    //Here checks for empty spaces
                    if (view[i][j][k] == '.') {
                        for (int l = 0; l < n; l ++) {
                            tra(i, j, k, l);
                            res[x][y][z] = '.';
                        }
                    }
                }
                getchar();
            }
        }
        printf("Maximum weight: %d gram(s)\n", solve());
    }
    return 0;
}
