#pragma once

namespace Enum
{

class TacticsStat
{
public:
	enum Type
	{
		NONE = 0, // ����
		ATTACK_TENDENCY = 1, // ���� ����
		BOLDNESS = 2, // ��㼺
		PREDICTION = 3, // ������
		DEFENSE_TENDENCY = 4, // ��� ����
		AGGRESSIVE = 5, // ���ؼ�
		COMPETITIVE = 6, // �ºο�
		CONCENTRATION = 7, // ���߷�
		CALM = 8, // ħ����
		JUDGEMENT = 9, // �Ǵܷ�
		TEAMWORK = 10, // ����
		TACTICAL = 11, // ���� ���� �ɷ�
		STRATEGY_TENDENCY = 12, // ���� ����
		FREEDOM = 13, // ������
		ATTACK_DIRECTION = 14, // ���� ����
	};
};

static const std::wstring TacticsStat_STR[] = {
		L"����", 
		L"���� ����", 
		L"��㼺", 
		L"������", 
		L"��� ����", 
		L"���ؼ�", 
		L"�ºο�", 
		L"���߷�", 
		L"ħ����", 
		L"�Ǵܷ�", 
		L"����", 
		L"���� ���� �ɷ�", 
		L"���� ����", 
		L"������", 
		L"���� ����", 
};

} // Enum

