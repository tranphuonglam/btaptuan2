#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n;
	double u;
	int a[n];
	cin >> n;
	double sum=0;
	double x=0;
	for(int i=1;i<=n;i++) {
		cin >> a[i];
		sum +=a[i];
	}
	u = sum/n;
	cout << "Gia tri trung binh la: " << u << endl;
	for(int i=1;i<=n;i++) {
		x += (a[i]-u)*(a[i]-u);
	}
	double phuongsai;
	phuongsai = x/n;
	cout << "Phuong sai la: " << phuongsai;
	return 0;
}
