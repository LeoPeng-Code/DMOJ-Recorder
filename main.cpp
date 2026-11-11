#include <bits/stdc++.h>
using namespace std;

struct Record 
{
    string name;
    int attempts;
    string AC_OR_NOT;
};

int main() 
{
    vector<Record> my_records; // 存储记录的数组
    int choice = 0; // 用来记录用户选的菜单数字

    cout << "--- 欢迎来到 Leo 的战绩记录器 v4.0 ---" << endl;
    
    while (choice != 3) 
    {
        cout << endl << "--------------------" << endl;
        cout << "1. 添加新战绩" << endl;
        cout << "2. 查看所有战绩" << endl;
        cout << "3. 退出程序" << endl;
        cout << "请选择 ( 1 / 2 / 3 ): " ;
        cin >> choice; 

        //选择一
        if (choice == 1) 
        {
            Record temp;
            cout << "请输入题目的名字: ";
            cin >> temp.name;
            cout << "这道题做了几次？: ";
            cin >> temp.attempts;
            cout << "结果是 AC 还是 WA？: ";
            cin >> temp.AC_OR_NOT;
            
            my_records.push_back(temp); 
            cout << "✅ 记录成功！" << endl;
        }

        //选择二
        else if (choice == 2) 
        {
            cout << "\n====== 战报 ======" << endl;
            if (my_records.empty()) 
            {
                cout << "你还没有任何战绩哦！" << endl;
            } else 
            {
                for (auto x : my_records) 
                {
                    cout << x.name << " | 做了 " << x.attempts << " 次 | 结果: " << x.AC_OR_NOT << endl;
                }
            }
        }

        //选择三
        else if (choice == 3)
        {
            cout << endl << "再见，下次再来记录吧";
        }
            
        else 
        {
            cout << "无效的选择，请输入 1、2 或 3" << endl;
        }
    } 

    return 0;
}
