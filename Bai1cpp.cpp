#include<iostream> ///thư viện hỗ trợ việc nhập xuất
using namespace std;

int main() // hàm chính đóng vai trò chủ
{
	//GIẢI PHUONG TRINNH BẬC NHẤT AX+B=0
	int a,b;  //khai báo biến số nguyên , float số thực
	cout << "Nhap a : " ;
	cin >> a;
	cout << "Nhap b:";
	cin >> b;
	if (a == 0)
	{
		if (b == 0)
		{
			cout << "\nPhuong trinh co vo so nghiem";
		}
		else
		{
			cout << "\nPhuong trinh vo nghiem";
		}
	}
	else
	{
		cout << "\nPhuong trinh co nghiem:" << (float)-b / a << endl;
	}
	system("pause"); // dừng màn hình để xem
	return 0;
}