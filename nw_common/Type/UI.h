#pragma once

namespace Enum
{

class SettingID
{
public:
	enum Type
	{
		CHARACTER_SETTING = 0, // ĳ����
		DISPOSITION = 1, // ��ġ
		TACICS = 2, // ����
		MAX = 3, // �ִ�
	};
};

static const WCHAR* SettingID_STR[] = {
		L"ĳ����", 
		L"��ġ", 
		L"����", 
		L"�ִ�", 
};

} // Enum

