#include <iostream>
using namespace std;
#define MAXN 100000

int main(){
	int n, m, temp, min, arr[MAXN] = {};

	cin >> n >> m;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 0; i < m; i++){
		min = i;
		for (int j = i + 1; j < n; j++){
			if (arr[j] < arr[min]){
				min = j;
			}
		}

		temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
	}

	for (int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	
	return 0;
}