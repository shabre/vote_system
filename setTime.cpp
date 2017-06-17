#include "setTime.h"
using namespace std;

Time::Time() {
	timeStamp_start.tv_sec = 0;
	timeStamp_start.tv_usec = 0;
	timeStamp_end.tv_sec = 0;
	timeStamp_end.tv_usec = 0;
	realtime_start = NULL;
	realtime_end = NULL;
}

void Time::setStartTime() {
	time_t long_time;
	time(&long_time);
	realtime_start = localtime(&long_time);
}


void Time::setEndTime() {
	time_t long_time;
	time(&long_time);
	realtime_end = localtime(&long_time);
}


int Time::printStartTime() {
	if (realtime_start == NULL) {
		cout << "time not set yet" << endl;
		return 0;
	}

	cout << realtime_start->tm_year + 1900 << "년 ";
	cout << realtime_start->tm_mon + 1 << "월 ";
	cout << realtime_start->tm_mday << "일 ";
	cout << realtime_start->tm_hour << "시 ";
	cout << realtime_start->tm_min << "분 ";
	cout << realtime_start->tm_sec << "초" << endl;
	return 1;
}

int Time::printEndTime() {
	if (realtime_end == NULL) {
		cout << "time not set yet" << endl;
		return 0;
	}
	cout << realtime_start->tm_year + 1900 << "년 ";
	cout << realtime_start->tm_mon + 1 << "월 ";
	cout << realtime_start->tm_mday << "일 ";
	cout << realtime_start->tm_hour << "시 ";
	cout << realtime_start->tm_min << "분 ";
	cout << realtime_start->tm_sec << "초" << endl;
	return 1;
}



CurTimeController::CurTimeController() {
	time_t long_time;
	time(&long_time);
	curTime = localtime(&long_time);//현재시간 시스템으로부터 불러옴
									//DB로부터 최근접근시간 불러와야함
}


void CurTimeController::UI_6() {
	int input;
	cout << "현재시간 설정 메뉴입니다" << endl;
	cout << "1. 현재시간 설정 " << endl;
	cout << "2. 되돌아가기" << endl;
	cout << "*입력 선택: ";
	cin >> input;
	if (input == 1)
		cout << "현재시간 설정 완료" << endl;
}
