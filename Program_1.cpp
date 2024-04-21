#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "./head/Program_1.h"
#include "./head/shizhan.h"
#include "./function/head/printInformation.h"

void caidan_1() {
	char choice;
	int exit = 0;
	while (exit != -1) {
		printf("这是一个本学期所有项目综合在一起的大型C语言项目\n");
		printf("(1) 实战1--程序流程\n");
		printf("(2) 实战2--递归及应用\n");
		printf("(3) 实战3--大型项目管理\n");
		printf("(4) 实战4--制作中\n");
		printf("(5) 实战5--制作中\n");
		printf("(6) 实战6--制作中\n");
		printf("(7) 实战7--制作中\n");
		printf("(8) 实战8--制作中\n");
		printf("(e) 退出程序\n");
		printf("请选择您要进入的项目：");
		scanf("%c", &choice);
		fflush(stdin);
		switch (choice) {
			case '1':
				system("cls");
				print_information();
				exit = shizhan1_main();
				if (exit == -1)
					return;
				system("cls");
				print_information();
				break;
			case '2':
				system("cls");
				print_information();
				exit = shizhan2_main();
				if (exit == -1)
					return;
				system("cls");
				print_information();
				break;
			case '3':
				system("cls");
				print_information();
				exit = shizhan3_main();
				if (exit == -1)
					return;
				system("cls");
				print_information();
				break;
			case '4':
				system("cls");
				print_information();
				exit = shizhan4_main();
				if (exit == -1)
					return;
				system("cls");
				print_information();
				break;
			case '5':
				system("cls");
				print_information();
				exit = shizhan5_main();
				if (exit == -1)
					return;
				system("cls");
				print_information();
				break;
			case '6':
				system("cls");
				print_information();
				exit = shizhan6_main();
				if (exit == -1)
					return;
				system("cls");
				print_information();
				break;
			case '7':
				system("cls");
				print_information();
				exit = shizhan7_main();
				if (exit == -1)
					return;
				system("cls");
				print_information();
				break;
			case '8':
				system("cls");
				print_information();
				exit = shizhan8_main();
				if (exit == -1)
					return;
				system("cls");
				print_information();
				break;
			case 'e':
				exit = -1;
				system("cls");
				print_information();
				printf("正在退出......");
				break;
			default:
				system("cls");
				print_information();
				printf("输入错误，请重新输入......\n");
				break;
		}
	}
}
