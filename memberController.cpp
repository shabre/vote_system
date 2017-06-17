#include "memberController.h"
using namespace std;
void MemberController::UI_1() {
	int check;
	//system("cls")
	cout << "1.Join" << endl << "2.Withdraw" << endl << "0.메인 메뉴로 돌아가기" << endl << "*입력 선택 : ";
	cin >> check;

	while (check) {
		if (check == 1) {
			//join_mem();
			//system("pause")
			break;
		}
		else if (check == 2) {
			//withdraw_mem();
			//system("pause")
			break;
		}
		else {
			cout << "다시 입력하세요!" << endl << "*입력 선택 : ";
			cin >> check;
		}
	}
}



void MemberController::UI_2() {
	int check;
	//system("cls")
	cout << "1.LOGIN" << endl << "2.LOGOUT" << endl << "0.메인 메뉴로 돌아가기" << endl << "*입력 선택 : ";
	cin >> check;

	while (check) {
		if (check == 1) {
			//login();
			//system("pause")
			break;
		}
		else if (check == 2) {
			//logout();
			//system("pause")
			break;
		}
		else {
			cout << "다시 입력하세요!" << endl << "*입력 선택 : ";
			cin >> check;
		}
	}
}


void MemberController::UI_7() {
	int check;
	//system("cls")
	cout << "1.LOGIN" << "0.메인 메뉴로 돌아가기" << endl << "*입력 선택 : ";
	cin >> check;

	while (check) {
		if (check == 1) {
			//relogin();
			//system("pause")
			break;
		}
		else {
			cout << "다시 입력하세요!" << endl << "*입력 선택 : ";
			cin >> check;
		}
	}
}

