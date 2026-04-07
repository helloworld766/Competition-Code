#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "请输入要打印的行数n：";
    cin >> n;

    // 计算最后一行的字母总数（总宽度）：2*n - 1
    int total_width = 2 * n - 1;
	cout<<endl; 
    // 外层循环控制行数（i从1到n）
    for (int i = 1; i <=n; ++i) {
        // 补充程序，完成字符图形输出
        for(int j=0;j<(total_width-2*i+1)/2;j++)
		{
			cout<<' ';
		} 
		for(int j=0;j<(2*i-1)/2;j++)
		{
			char temp='a'+j;
			cout<<temp;
		}
		char temp='a'+(2*i-1)/2;
		cout<<temp;
		for(int j=(2*i-1)/2-1;j>=0;j--)
		{
			temp='a'+j;
			cout<<temp;
		}
		for(int j=0;j<(total_width-2*i+1)/2;j++)
		{
			cout<<' ';
		} 
        // 每行结束换行
        cout << endl;
    }

    return 0;
}

