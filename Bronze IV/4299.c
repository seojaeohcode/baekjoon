
//연립방정식

#include <stdio.h>
int main() {
	int x, y, sum, sub;
	scanf("%d %d", &sum, &sub);
	if(sum<sub) {
		printf("-1");
	} else {
		x = (sum+sub)/2;
		y = (sum-sub)/2;
		if(x+y==sum && x-y==sub) {
			printf("%d %d", x, y);
		} else {
			printf("-1");
		}
	}
	return 0;
}