#pragma once

namespace Enum
{

class Locate
{
public:
	enum Type
	{
		NONE  = -1, // ����
		DECK = 0, // ��
		CORPS = 1, // �߽�
		SQUAD = 2, // ������
		RESERVE = 3, // ����
	};
};

static const std::wstring Locate_STR[] = {
		L"����", 
		L"��", 
		L"�߽�", 
		L"������", 
		L"����", 
};

} // Enum

