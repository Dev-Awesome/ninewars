#pragma once

namespace Enum
{

class Targeting
{
public:
	enum Type
	{
		NEAR_DISTANCE = 0, // ����� ��
		STRONG_CLASS = 1, // ��
		LESS_HP = 2, // ���� ü��
		MAX = 3, // �ִ�
		NONE = 4, // ����
	};
};

static const std::wstring Targeting_STR[] = {
		L"����� ��", 
		L"��", 
		L"���� ü��", 
		L"�ִ�", 
		L"����", 
};

} // Enum

namespace Enum
{

class MoveDecide
{
public:
	enum Type
	{
		MAINTAIN_SPEED = 0, // �ӵ� ����
		CONTROL_SPEED = 1, // �ӵ� ����
		MAINTAIN_RANGE = 2, // �Ÿ� ����
		MAX = 3, // �ִ�
		NONE = 4, // ����
	};
};

static const std::wstring MoveDecide_STR[] = {
		L"�ӵ� ����", 
		L"�ӵ� ����", 
		L"�Ÿ� ����", 
		L"�ִ�", 
		L"����", 
};

} // Enum

namespace Enum
{

class MaintainSpeed
{
public:
	enum Type
	{
		CURRENT_STATE = 0, // ���� ��Ȳ
		MOVE_TENDENCY = 1, // �̵� ����
		WAR_SITUATION = 2, // ���� ��Ȳ
		MAX = 3, // �ִ�
		NONE = 4, // ����
	};
};

static const std::wstring MaintainSpeed_STR[] = {
		L"���� ��Ȳ", 
		L"�̵� ����", 
		L"���� ��Ȳ", 
		L"�ִ�", 
		L"����", 
};

} // Enum

