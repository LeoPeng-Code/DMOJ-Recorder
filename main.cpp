#include <bits/stdc++.h>
using namespace std;

struct Record {
    string name;   // 题目名字
    int attempts;  // 做了几次
    string AC_OR_NOT;
};

int main()
{
    int num = 0; // 存今天做几道题
    vector<Record> my_records; // 存所有题目的超级数组
    cout << "---欢迎来到Leo的战绩记录器 v3.0---" << endl;
    cout << "今天你打算记录几道 AC 的题？请输入数字: ";
    cin >> num;
    
    for (int i = 1;i<=num;i++)
    {
        Record temp;
        cout << endl << "请输入第 " << i  << " 道题的名字 (比如 J1): ";
        cin >> temp.name;
        cout << endl << "这道题你做了几次？: ";
        cin >> temp.attempts;
        cout << endl << "最终结果是 AC 还是 WA？: ";
        cin >> temp.AC_OR_NOT; 
        my_records.push_back(temp);
    }
    
    cout << endl << "====== 战报 ======" << endl;
    
    for (auto r : my_records) 
    {
        cout << "- 题目: " << r.name << " | 做了 " << r.attempts << " 次 | 结果: " << r.AC_OR_NOT << endl;
    }
    
    return 0;
}
