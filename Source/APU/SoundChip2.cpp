/*
** Dn-FamiTracker - NES/Famicom sound tracker
** Copyright (C) 2020-2025 D.P.C.M.
** FamiTracker Copyright (C) 2005-2020 Jonathan Liss
** 0CC-FamiTracker Copyright (C) 2014-2018 HertzDevil
**
** This program is free software: you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation, either version 3 of the License, or
** (at your option) any later version.
**
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with this program. If not, see https://www.gnu.org/licenses/.
*/

#include "../stdafx.h"
#include "SoundChip2.h"
#include "../RegisterState.h"

CSoundChip2::CSoundChip2() :
	m_pRegisterLogger(std::make_unique<CRegisterLogger>())
{
}

double CSoundChip2::GetFreq(int Channel) const		// // //
{
	return 0.0;
}

void CSoundChip2::Log(uint16_t Address, uint8_t Value)		// // //
{
	// default logger operation
	if (m_pRegisterLogger->SetPort(Address))
		m_pRegisterLogger->Write(Value);
}

CRegisterLogger* CSoundChip2::GetRegisterLogger() const		// // //
{
	return m_pRegisterLogger.get();
}
