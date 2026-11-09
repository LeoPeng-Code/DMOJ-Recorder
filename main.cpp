#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "欢迎来到Leo的战绩记录器" << endl;
    int num; // 存今天做几道题
    string problem_name; // 存题目名字
    vector<string> my_ac_list; // 存所有题目的超级数组
    
    cout << "今天你打算记录几道 AC 的题？请输入数字: ";
    cin >> num;
    
    for (int i = 1;i<=num;i++)
    {
        cout << "请输入第 " << i + 1 << " 道题的名字 (比如 J1): ";
        cin >> problem_name;
        my_ac_list.push_back(problem_name);
    }
    
    cout << "====== 战报 ======" << endl;
    cout << "太牛了！你今天一共 AC 了 " << my_ac_list.size() << " 道题！" << endl;
    
    // 用熟悉的 auto 打印，这里的 p 就是个名字
    for (auto p : my_ac_list) {
        cout << "- " << p << endl; 
    }
    
    return 0;
}
