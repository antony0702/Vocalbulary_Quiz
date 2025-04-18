#include<iostream>
#include<cstdlib> //取隨機數的函式庫 //用法 rand()%10+1 //範圍1~10
#include <time.h> //取隨機數的函式庫
#include <windows.h>
using namespace std;
string eng[100000], chi[100000], ans[100000];
//輸入單字
int input()
{
    cout << "請輸入所有單字(片語請使用 // 當作空格 輸入##表示結束)" << endl;
    int count = 0;//有幾個單字
    for (int a = 1; ; a++)
    {

        cin >> eng[a]; //輸入英文
        if (eng[a] == "##") break;
        count++;
        cin >> chi[a]; //輸入中文
    }
    system("cls");
    return count;
}
void quiz(int count, bool random, int d[])
{
    if (random)
    {
        // 隨機出題版本
        for (int i = 0; i < count; i++)
        {
            cout << eng[d[i]] << endl; // 顯示英文
            cin >> ans[d[i]];          // 讀取答案
            if (ans[d[i]].compare(chi[d[i]]) == 0)
                cout << endl << "*正確*\n\n";
            else
                cout << endl << "*正確答案為 " << chi[d[i]] << "*\n\n";
        }
    }
    else
    {
        // 順序出題版本
        for (int i = 1; i <= count; i++)
        {
            cout << eng[i] << endl;  // 顯示英文
            cin >> ans[i];           // 讀取答案
            if (ans[i].compare(chi[i]) == 0)
                cout << endl << "*正確*\n\n";
            else
                cout << endl << "*正確答案為 " << chi[i] << "*\n\n";
        }
    }
}

int main()
{
    cout << "請問是否要使用隨機出題? (要請按1  不要請按0)\n";
    int random;
    cin >> random;
    if (random == 1)
    { // 使用隨機出題
        int count = input();  // 取得輸入的單字數量並執行輸入
        cout << "請作答\n\n";
        srand(time(NULL)); // 給定亂數種子
        int d[100000];
        // 生成不重複的隨機索引
        for (int i = 0; i < count; i++)
        {
            d[i] = rand() % count + 1;
            for (int j = 0; j < i; j++)
            {
                if (d[i] == d[j])
                {
                    i--;
                    break;
                }
            }
        }
        quiz(count, true, d);
    }
    else if (random == 0)
    { // 不使用隨機出題
        int count = input();
        quiz(count, false, nullptr);  // 傳入 nullptr 表示不用隨機索引
    }
    else
    {
        cout << "請輸入1或0而非其他選項\n";
    }
    return 0;
}
