#include "stdafx.h"
#include "GuiCardDetailStatus.h"

#include "NWCard.h"

namespace NW
{

GuiCardDetailStatus::GuiCardDetailStatus()
{
}

GuiCardDetailStatus::~GuiCardDetailStatus()
{
}

void GuiCardDetailStatus::OnDraw()
{
	if( m_Card.get() == NULL )
		return;

	{
		std::wstringstream stream;
		stream << m_Card->Name() << _T(" ")
			<< _T("LV:") << m_Card->GetLevel();
		DrawString(stream.str(), m_position + light::POSITION_INT(30, 28), 20, D3DCOLOR_RGBA(255, 255, 255, 255));
	}

	{
		std::wstringstream stream;
		stream << _T("����:") << _T("\n")
			<< _T("����:")  << _T("\n")
			<< _T("����:") << m_Card->Class();

		DrawString(stream.str(), m_position + light::POSITION_INT(30, 80), light::RECT_INT(0, 0, 240, 60), 20, D3DCOLOR_RGBA(255, 255, 255, 255), light::view::FreeType2::Align::LEFT);
	}

	{
		Instance::CharacterStat& stat = m_Card->CharacterStat();

		std::wstringstream stream;
		stream << _T("���ݼ���:") << stat.AttackTendency() << _T("\n")
			<< _T("��㼺:") << stat.Boldness() << _T("\n")
			<< _T("������:") << stat.Prediction() << _T("\n")
			<< _T("����:") << stat.DefenseTendency() << _T("\n")
			<< _T("���ؼ�:") << stat.Aggressive() << _T("\n")
			<< _T("�ºο�:") << stat.Competitive() << _T("\n")
			<< _T("���߷�:") << stat.Concentration() << _T("\n")
			<< _T("�Ǵܷ�:") << stat.Judgement() << _T("\n")
			<< _T("ħ����:") << stat.Calm() << _T("\n")
			<< _T("������:") << stat.Leadership() << _T("\n")
			<< _T("����ũ:") << stat.TeamWork() << _T("\n")
			<< _T("��������ɷ�:") << stat.Tactical();

		DrawString(stream.str(), m_position + light::POSITION_INT(30, 150), light::RECT_INT(0, 0, 240, 180), 14, D3DCOLOR_RGBA(255, 255, 255, 255), light::view::FreeType2::Align::LEFT);
	}
}


} //namespace NW
