/*虽然但是第一次开发c c++BYD在手机我也是神人了
手机战神
好吧
在这几行我们来看看我们需要什么
我们需要在结束这个项目时
打开exe文件就可以打开ATC4然后没有bug的运行这玩意
指的是解决关于那个啥文件的问题
所以思路为
分别搞俩文件
一个专门启动RJOO
另一个启动别的
同时，最后启动环节使用转区软件LE打开*/
#include <iostream>
#include <unistd.h>
#include <limits.h>
#include <locate> //不知道为啥要这个头文件
//听说是因为要输出中文
#include <string>
/*警告⚠️ 分界线*/
/*孩子
后面的代码我自己还在思考是什么
ai写的
but看起来不错
我会先学习下面的代码是什么意思
然后变成自己的东西*/
int main() {
    cout << ''孩子，我是作者虽然但是，我现在要获取这个程序在哪里，但是我不知道这会不会侵犯你的隐私，所以我想听一听你的意见'' <<endl
    cout << ''输入0告诉本高级玩家你不接受我找到你的程序在哪里（在这样的情况下你要自己输入我的位置）''<< endl
    cout << ''输入1告诉夜你同意力'' << endl
//后面这里是为了判断是否同意，然后搞两套程序 判断用的bool变量为A 同时为了分辨
//我们用int变量B看看用户会不会输入一些奇奇怪怪的东西
//让int判断用户输入 bool判断该咋做
//不过我发现int就够了没必要再搞个bool
    int A ;
    cin >> A
    if (A = 1) {
    wchar_t filename[MAX_PATH]; // 定义一个足够大的缓冲区
        DWORD result = GetModuleFileNameW(NULL, filename, MAX_PATH); // 获取当前程序路径

            if (result == 0) {
                    std::wcerr << L"获取文件名失败！错误代码：" << GetLastError() << std::endl;
                            return 1;
                                } else if (result > MAX_PATH) {
                                        std::wcerr << L"缓冲区太小！需要 " << result << L" 个字符。" << std::endl;
                                                // 可以重新分配更大的缓冲区并再次调用 GetModuleFileNameW
                                                        wchar_t* dynamicFilename = new wchar_t[result];
                                                                GetModuleFileNameW(NULL, dynamicFilename, result);
                                                                        std::wcout << L"程序位置（动态分配）：" << dynamicFilename << std::endl;
                                                                                delete[] dynamicFilename;
                                                                       return 1;
                                                                                            } else {
                                                                                                    std::wcout << L"程序位置：" << filename << std::endl;
                                                                                                        }
    }
    else if (A = 0) {

    }
    else{
        cout<<''不是哥们你输入''<<A <<''干什么？byd爷报错了！这下好了吧？滚去重启！''
        return 0
    }
    return 0
}
/*现在文件位置应该在缓冲区
那么我们要把缓冲区的路径给放到一个变量里让第二个东西调用
发现它会输出到控制台
先找人测试一下先吧*/   