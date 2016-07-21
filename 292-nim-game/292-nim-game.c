#include <math.h> 
#include <stdio.h>
int main(){
	int n=12;
	int r=canWinNim(n);
	printf("%d",r);
	return 1;
} 
int canWinNim(int n) {
	return (n%4!=0) ;
}
