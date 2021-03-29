// WarioWare mod by Headshotnoby

#ifndef _MICROGAME_TILECOLORS_H
#define _MICROGAME_TILECOLORS_H

#include "../microgame.h"

/*
	Go to the room with the specified tile color to win.
*/

class MGTileColors : public Microgame
{
public:
	MGTileColors(CGameContext* pGameServer, CGameControllerWarioWare* pController);
	~MGTileColors() {}

	void Start();
	void End();
	void Tick();
	int OnCharacterDeath(class CCharacter *pVictim, class CPlayer *pKiller, int Weapon) {return 0;}
	void OnCharacterDamage(int Victim, int Killer, int Dmg, int Weapon) {}
	bool onChat(int client, const char *msg) {return false;}

private:
	void setAndSayColor();
	int m_startTick;
	int m_turn; // 2 different colors will be picked
	int m_colorName;
	int m_currColor;
	int m_lastColor;
};

#endif // _MICROGAME_TILECOLORS_H