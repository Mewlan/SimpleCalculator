//
//  ViewController.h
//  SimpleCalculator
//
//  Created by Mewlan Musajan on 11/2/17.
//	Copyright (c) 2017 Mewlan Musajan. All Rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define V_STR0 "非法指令！%c"
#define V_STR1 "请输入两个整数，用空格隔开："
#define V_STR2 "********简易计算器********%c"
#define V_STR3 "ADD%s加法%c"
#define V_STR4 "SUB%s减法%c"
#define V_STR5 "MUL%s乘法%c"
#define V_STR6 "DIV%s除法%c"
#define V_STR7 "MENU%s显示菜单%c"
#define V_STR8 "ETR%s重新输入两个整数%c"
#define V_STR9 "EXIT%s退出%c"
#define V_STRa "*************************%c"
#define V_STRb "请选择指令："
#define V_STRc "执行加法运算, %d + %d = %d%c"
#define V_STRd "执行减法运算, %d - %d = %d%c"
#define V_STRe "执行乘法运算, %d * %d = %d%c"
#define V_STRf "执行除法运算，%d / %d = %0.3f%c"
#define V_STRg "iWillook SimpleCalculator [Version 1.0]%c(c) Copyright 2017 iWillook Inc. 保留所有权利。%c%c"
#define V_STRk "请输入两个整数："

typedef enum command
{
	add,
	sub,
	mul,
	div_,
	menu,
	etr,
	exit_
} CMD;

int a, b, c1;
float c2;

/***ViewModel***/

void menuView();
void starLine();
void cmdInputView();
void numInputView();
void addView();
void subView();
void mulView();
void div_View();

/***ViewController***/
void errViewCtrl();
void initailViewCtrl();

/***Controller***/

void numInputCtrl();
char * cmdInputCtrl();
void addCtrl();
void subCtrl();
void mulCtrl();
void div_Ctrl();
void selectFuncCtrl(char *cmd);

