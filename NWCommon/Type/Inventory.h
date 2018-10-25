#pragma once

namespace Enum
{

class Storage
{
public:
	enum Type
	{
		NONE  = -1, // ����
		INVENTORY = 0, // �κ��丮
		EQUIP = 1, // ����
		RESERVE = 2, // ����
	};
};

static const std::wstring Storage_STR[] = {
		L"����", 
		L"�κ��丮", 
		L"����", 
		L"����", 
};

} // Enum

