//
//  ViewController.c
//  SimpleCalculator
//
//  Created by Mewlan Musajan on 11/2/17.
//	Copyright (c) 2017 Mewlan Musajan. All Rights reserved.
//

#include "ViewController.h"

/***ViewController***/

void initailViewCtrl()
{
	printf(V_STRg, '\n', '\n', '\n');
	printf(V_STR1);
	numInputCtrl();
	printf(V_STR2, '\n');
	menuView();
	cmdInputView();
	selectFuncCtrl(cmdInputCtrl());
}

void errViewCtrl()
{
	printf(V_STR0, '\n');
	cmdInputView();
	selectFuncCtrl(cmdInputCtrl());
}

/***ViewModel***/

void menuView()
{
	printf(V_STR3, "\t\t", '\n');
	printf(V_STR4, "\t\t", '\n');
	printf(V_STR5, "\t\t", '\n');
	printf(V_STR6, "\t\t", '\n');
	printf(V_STR7, "\t\t", '\n');
	printf(V_STR8, "\t\t", '\n');
	printf(V_STR9, "\t\t", '\n');
	starLine();
}

void starLine()
{
	printf(V_STRa, '\n');
}

void cmdInputView()
{
	printf(V_STRb);
}

void numInputView()
{
	printf(V_STRk);
}

void addView()
{
	printf(V_STRc, a, b, c1, '\n');
}

void subView()
{
	printf(V_STRd, a, b, c1, '\n');
}

void mulView()
{
	printf(V_STRe, a, b, c1, '\n');
}

void div_View()
{
	printf(V_STRf, a, b, c2, '\n');
}

/***Controller***/

void numInputCtrl()
{
	scanf("%d %d", &a, &b);
}

void addCtrl()
{
	c1 = a + b;
}

void subCtrl()
{
	c1 = a - b;
}

void mulCtrl()
{
	c1 = a * b;
}

void div_Ctrl()
{
	c2 = a / b;
}

char * cmdInputCtrl()
{
	char cmd[8];
	scanf("%s", cmd);
	return(cmd);
}

void selectFuncCtrl(char *cmd)
{
	CMD _cmd;
	strupr(cmd);
	if (strcmp(cmd, "ADD") == 0)
	{
		_cmd = add;
	} else if (strcmp(cmd, "SUB") == 0)
	{
		_cmd = sub;
	} else if (strcmp(cmd, "MUL") == 0)
	{
		_cmd = mul;
	} else if (strcmp(cmd, "DIV") == 0)
	{
		_cmd = div_;
	} else if (strcmp(cmd, "MENU") == 0)
	{
		_cmd = menu;
	} else if (strcmp(cmd, "ETR") == 0)
	{
		_cmd = etr;
	} else if (strcmp(cmd, "EXIT") == 0)
	{
		_cmd = exit_;
	} else {
		errViewCtrl();
	}
	switch (_cmd)
	{
		case add:
			addCtrl();
			addView();
			cmdInputView();
			selectFuncCtrl(cmdInputCtrl());
		break;
		case sub:
			subCtrl();
			subView();
			cmdInputView();
			selectFuncCtrl(cmdInputCtrl());
		break;
		case mul:
			mulCtrl();
			mulView();
			cmdInputView();
			selectFuncCtrl(cmdInputCtrl());
		break;
		case div_:
			div_Ctrl();
			div_View();
			cmdInputView();
			selectFuncCtrl(cmdInputCtrl());
		break;
		case menu:
			starLine();
			menuView();
			cmdInputView();
			selectFuncCtrl(cmdInputCtrl());
		break;
		case etr:
			numInputView();
			numInputCtrl();
			cmdInputView();
			selectFuncCtrl(cmdInputCtrl());
		break;
		case exit_:
			exit(0);
		break;
		default:break;
	}
}




