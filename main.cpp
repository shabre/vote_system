#include <iostream>
#include <stdlib.h>
#include "login_logout.h"
#include "voteSuggest.h"
#include "voteManage.h"
#include "GroupController.h"
#include "setTime.h"
#include "memberController.h"
#include "user.h"
#include "voteController.h"

#define NOT_MEMBER 0
#define MEMBER 1
#define GROUP_MEMBER 2
#define GROUP_MANAGER 3

using namespace std;

int inputMenu() {
	int input;
	cout << "*입력 선택 :";
	cin >> input;
	return input;
}


void printMenu() {
	cout << "1. 회원가입/탈퇴" << endl;
	cout << "2. 로그인/로그아웃" << endl;
	cout << "3. 투표제안" << endl;
	cout << "4. 투표관리" << endl;
	cout << "5. 그룹관리" << endl;
	cout << "6. 현재시간 설정" << endl;
	cout << "7. Session변경/선택" << endl;
	cout << "8. 종료" << endl;
}

void printException(int lev) {
	switch (lev) {
	case NOT_MEMBER:
		cout << "접근 불가능 합니다" << endl;
		break;

	case MEMBER:
		cout << "멤버 이상만 접근 가능합니다" << endl;
		break;

	case GROUP_MEMBER:
		cout << "그룹멤버 이상만 접근 가능합니다" << endl;
		break;

	case GROUP_MANAGER:
		cout << "그룹생성자/관리자 이상만 접근 가능합니다" << endl;
		break;

	default:
		cout << "알수없는 권한" << endl;
		break;
	}
}

User user;
GroupController gc;
voteController vc;
MemberController mc;
CurTimeController tc;

void changeUI(int menu) {
	switch (menu) {
	case 1://회원가입,탈퇴
		mc.UI_1();
		break;
	case 2://로그인,로그아웃
		mc.UI_2();
		break;
	case 3://투표 제안
		if (user.returnLevel()<GROUP_MEMBER)//그룹원 이상
			printException(GROUP_MEMBER);
		else
			vc.UI_3();
		break;
	case 4://투표 관리
		if (user.returnLevel()<GROUP_MANAGER)//그룹 매니저만 가능
			printException(GROUP_MANAGER);
		else
			vc.UI_4();
		break;
	case 5://그룹 관리
		if (user.returnLevel()<MEMBER)//회원 이상만 가능
			printException(MEMBER);
		else
			gc.UI_5();
		break;
	case 6://현재시간 설정
		if (user.returnLevel()<MEMBER)//회원 이상만 가능
			printException(MEMBER);
		else
			tc.UI_6();
		break;
	case 7://session 변경,선택
		if (user.returnLevel()<MEMBER)//회원일 경우에만 가능
			printException(MEMBER);
		else
			mc.UI_7();
		break;
	case 8://종료
		cout << "프로그램을 종료합니다" << endl;
		exit(0);
		break;

	default:
		break;
	}
}


int main(int argc, const char * argv[]) {
	while (1) {
		int menu = 0;
		printMenu();
		menu = inputMenu();
		if (menu>8 || menu<1) {
			cout << "1~8사이의 정수만 입력 가능합니다" << endl;
			cout << endl << endl;;
			continue;
		}
		changeUI(menu);
		cout << endl << endl;;
	}

	return 0;
}
