#include<iostream>  
using namespace std;
int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int m = 0, n = 0;
		cin >> m >> n;
		int shuzu[100][100];//�������100*100  
		int sum = 0;
		for (int j = 0; j < m; j++) {
			for (int o = 0; o < n; o++) {
				cin >> shuzu[j][o];//����������ֵ  
				if (j == 0 || j == m - 1)//�������У�ĩ��  
					sum += shuzu[j][o];
				else if (o == 0 || o == n - 1)//else ֮������if �ҳ����ĸ�����֮������У�ĩ��  
					sum += shuzu[j][o];
			}
		}
		cout << sum << endl;
	}
	
	system("pause"); 
	return 0;
}