#include "b1.h"
int get_max(int a, int b) {
	return (a > b) ? a : b;
}
double get_average(int arr[], int n){
	int sum = 0;
	for (int i = 0; i<n; i++) {
		sum += arr[i];
	}
return (double)sum / n;
}
