#include "GroupController.h"

GroupController::GroupController() { currID = "B411006"; }
GroupController::~GroupController() {}

void GroupController::UI_5() {
	int tmp;

	system("cls");
	cout << "5.1 전체 그룹 조회" << endl;
	cout << "5.2 그룹 가입" << endl;
	cout << "5.3 그룹 생성" << endl;
	cout << "5.4 가입 그룹 조회" << endl;
	cout << "5.5 그룹 탈퇴" << endl;
	cout << "0.  메인메뉴로 돌아가기" << endl << endl;
	cout << "*입력선택 : ";
	cin >> tmp;

	switch (tmp)
	{
	case 0:
		system("cls");
		cout << "프로그램을 종료합니다." << endl << endl;
		exit(0);
		break;
	case 1:
		show_group_UI();
		break;
	case 2:
		join_group_UI();
		break;
	case 3:
		make_group_UI();
		break;
	case 4:
		info_group_UI();
		break;
	case 5:
		drop_group_UI();
		break;
	default:
		UI_5();
		break;
	}
}

void GroupController::show_group_UI() {
	system("cls");
	cout << "5.1 전체 그룹 조회" << endl;

	G.show_Group();

	system("pause");
	UI_5();
}

void GroupController::join_group_UI() {
	int tmp;

	system("cls");
	cout << "5.2 그룹 가입" << endl;

	G.join_Group();

	system("pause");
	UI_5();
}

void GroupController::make_group_UI() {
	string name, info;

	system("cls");
	cout << "5.3 그룹 생성" << endl;
	cout << "그룹명 : ";
	cin >> name;
	cout << "그룹정보 : ";
	cin >> info;

	G.make_Group(name, info, currID);

	cout << endl;
	cout << "그룹이 생성되었습니다." << endl;
	cout << "등급이 [그룹생성자]로 변경되었습니다." << endl << endl;
	system("pause");
	UI_5();
}

void GroupController::info_group_UI() {
	system("cls");
	cout << "5.4 가입 그룹 조회" << endl;

	G.info_Group(currID);

	system("pause");
	UI_5();
}

void GroupController::drop_group_UI() {
	int tmp;

	system("cls");
	cout << "5.5 그룹 탈퇴" << endl;
	cout << "정말 탈퇴하시겠습니까?" << endl;
	cout << "1.Yes / 2.No : ";
	cin >> tmp;

	switch (tmp)
	{
	case 1:
		G.drop_Group();

		cout << endl;
		cout << "그룹을 탈퇴했습니다." << endl;
		cout << "등급이 [회원]으로 변경되었습니다." << endl << endl;
		system("pause");
	case 2:
		UI_5();
		break;
	default:
		drop_group_UI();
		break;
	}
}
