// $Id: Phoenix.h 8439 2008-01-03 18:19:25Z mrimer $

/* ***** BEGIN LICENSE BLOCK *****
 * Version: MPL 1.1
 *
 * The contents of this file are subject to the Mozilla Public License Version
 * 1.1 (the "License"); you may not use this file except in compliance with
 * the License. You may obtain a copy of the License at
 * http://www.mozilla.org/MPL/
 *
 * Software distributed under the License is distributed on an "AS IS" basis,
 * WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
 * for the specific language governing rights and limitations under the
 * License.
 *
 * The Original Code is Deadly Rooms of Death.
 *
 * The Initial Developer of the Original Code is
 * Caravel Software.
 * Portions created by the Initial Developer are Copyright (C) 1995, 1996, 
 * 1997, 2000, 2001, 2002, 2005 Caravel Software. All Rights Reserved.
 *
 * Contributor(s): Matt Schikore (schik)
 *
 * ***** END LICENSE BLOCK ***** */

//Phoenix.h
//Declarations for CPhoenix.
//Class for handling Fegundo monster game logic.

#ifndef PHOENIX_H
#define PHOENIX_H

#include "Monster.h"
#include "MonsterFactory.h"

class CPhoenix : public CMonster
{
public:
	CPhoenix(CCurrentGame *pSetCurrentGame = NULL);
	IMPLEMENT_CLONE_REPLICATE(CMonster, CPhoenix);
	
	virtual void Process(const int nLastCommand, CCueEvents &CueEvents);
};

#endif //...#ifndef PHOENIX_H

