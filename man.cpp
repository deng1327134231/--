#include <iostream>
#include <graphics.h>
#include <stdio.h>
#include <Windows.h>

using namespace std;
int score=0;//分数
int rand1=0;//等级
void creactWindows(void){
	//创建画布
	initgraph(550,660);
	//设置窗口名字
	HWND windows=GetHWnd();
	SetWindowText(windows,_T("俄罗斯方块"));
	//设置窗口内容
	settextcolor(WHITE);
	settextstyle(40,0,_T("宋体"));
	outtextxy(175,200,_T("俄罗斯方块"));


	settextstyle(40,0,_T("微软雅黑"));
	outtextxy(135,300,_T("编程,从俄罗斯方块开始"));

	Sleep(4000);
}

void initGameScreen(void){
	char str[16];
	//清除屏幕
	cleardevice();

	//画画
	rectangle(27,27,336,635);
	rectangle(29,29,334,636);

	rectangle(370,50,515,195);

	settextcolor(WHITE);
	settextstyle(24,0,_T("楷体"));
	outtextxy(405,215,_T("下一个:"));

	//输出分数
	settextcolor(RED);
	outtextxy(405,280,_T("分数:"));
	sprintf(str,"%d",score);
	outtextxy(415,310,str);
	//输出得分
	
	outtextxy(405,375,_T("等级:"));
	sprintf(str,"%d", rand1);
	outtextxy(415,405,str);
	//操作说明↑↓←→
	settextcolor(BLUE);
	outtextxy(390,475,_T("操作说明"));
	outtextxy(390,500,_T("↑:旋转"));
	outtextxy(390,525,_T("↓:下降"));
	outtextxy(390,550,_T("←:左移"));
	outtextxy(390,575,_T("→:右移"));

}
int main(void){
	//初始化
	creactWindows();
	//主场景游戏界面
	initGameScreen();


	//结束游戏界面


	system("pause");   // 暂停游戏

	//关闭画布
	closegraph();
	return 0;
}