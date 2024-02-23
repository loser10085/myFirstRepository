#include <cstdlib>
#include <cstring>
#include<iostream>
#define f(i,s,e) for(int i=s;i<=e;++i)
int main() {
    std::string url = "https://ys-api.mihoyo.com/event/download_porter/link/ys_cn/official/pc_default"; // 替换为你要打开的 URL
	std::string url2 = "https://www.yuanshen.com/#/";	
    std::string command[2];
#ifdef _WIN32
    command[0] = "start " + url; // Windows 系统
    command[1] = "start " + url2; // Windows 系统
#else
    command[0] = "xdg-open " + url; // Linux 和 macOS
    command[1] = "xdg-open " + url2; // Linux 和 macOS
#endif
	f(i,0,1){
		system(command[i].c_str());
	}


    return 0;
}

