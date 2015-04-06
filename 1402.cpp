#include <iostream>
using namespace std;
#define MAXN 100000

int main(){
	int n, m, temp, min, arr[MAXN] = {};

	cin >> n >> m;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 1; i < m; i++){
		temp = arr[i];
		int j = i;

		while ((j>0) && (arr[j - 1] > temp)){
			arr[j] = arr[j - 1];
			j--;
		}
		arr[j] = temp;
	}
	

	for (int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	
	return 0;
}