#pragma once

class Student {
	char* name;
	float _gradeHistory;
	float _gradeMath;
	float _gradeEnglish;
public:
	void SetName(char* name);
	char* GetName();
	void SetGradeHistory(float gradeHistory);
	void SetGradeMath(float gradeMath);
	void SetGradeEnglish(float gradeEnglish);
	float GetGradeHistory();
	float GetGradeMath();
	float GetGradeEnglish();

	float GetAverageGrade();

};