#include <iostream>
using namespace std;

int main() {
    int n;
    // 1. 输入数组长度n
    cout << "请输入数组的长度n：";
    cin >> n;

    // 校验n的合法性（避免创建长度为0/负数的数组）
    if (n <= 0) {
        cout << "n必须是正整数！" << endl;
        return 1; // 异常退出
    }

    // 2. 用new动态创建double型数组
    double* arr = new double[n];
    // 3. 输入n个实数存入数组
	for(int i=0;i<n;i++)
	{
		double temp=0;
		cin>>temp;
		arr[i]=temp;
	}
    // 4. 由大到小排序（降序）
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]<arr[j+1])
			{
				double temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
    // 5. 输出排序后的数组
    cout<<endl; 
    cout<<"请输入"<<n<<"个实数（用空格/回车分隔）："<<endl;
    cout<<"数组按由大到小排序后：" <<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i];
		if(i!=n-1)
		{
			cout<<" ";
		} 
	}


    // 6. 用delete[]释放动态数组（必须用[]，对应数组的new）
	delete[] arr;
 	
    // 置空指针，避免野指针
    arr=NULL;

    return 0;
}
