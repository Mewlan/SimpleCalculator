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

#define V_STR0 "�Ƿ�ָ�%c"
#define V_STR1 "�����������������ÿո������"
#define V_STR2 "********���׼�����********%c"
#define V_STR3 "ADD%s�ӷ�%c"
#define V_STR4 "SUB%s����%c"
#define V_STR5 "MUL%s�˷�%c"
#define V_STR6 "DIV%s����%c"
#define V_STR7 "MENU%s��ʾ�˵�%c"
#define V_STR8 "ETR%s����������������%c"
#define V_STR9 "EXIT%s�˳�%c"
#define V_STRa "*************************%c"
#define V_STRb "��ѡ��ָ�"
#define V_STRc "ִ�мӷ�����, %d + %d = %d%c"
#define V_STRd "ִ�м�������, %d - %d = %d%c"
#define V_STRe "ִ�г˷�����, %d * %d = %d%c"
#define V_STRf "ִ�г������㣬%d / %d = %0.3f%c"
#define V_STRg "iWillook SimpleCalculator [Version 1.0]%c(c) Copyright 2017 iWillook Inc. ��������Ȩ����%c%c"
#define V_STRk "����������������"

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

