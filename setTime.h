#pragma once
//
//  setTime.h
//  vote_system
//
//  Created by Shabre on 2017. 5. 29..
//  Copyright © 2017년 Shabre. All rights reserved.
//

#ifndef setTime_h
#define setTime_h
#include <iostream>
#include <time.h>
#include <Windows.h>

class Time {
private:
	timeval timeStamp_start, timeStamp_end;//timeStamp_start: 시작시간  timeStamp_end: 종료시간
	tm *realtime_start, *realtime_end;
public:
	Time();
	void setStartTime();//호출시 시작 시간을 현재시간으로 setting함
	void setEndTime();//호출시 끝 시간을 현재시간으로 setting함
	int printStartTime();//시작시간 출력 만약 시간 세팅 안되어있을시 0 반환
	int printEndTime();//시작시간 출력 만약 시간 세팅 안되어있을시 0 반환
};

class CurTimeController {
private:
	timeval curTimeStamp;
	tm *curTime, *latestTime;
public:
	CurTimeController();//현재시간 시스템으로부터 불러옴, latestTime DB로부터 불러옴
	void UI_6();
};


#endif /* setTime_h */
