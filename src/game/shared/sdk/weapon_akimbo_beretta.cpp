#include "cbase.h"
#include "weapon_sdkbase.h"
#include "weapon_akimbobase.h"

#if defined( CLIENT_DLL )
	#define CAkimbo_beretta C_Akimbo_beretta
	#include "c_sdk_player.h"
#else
	#include "sdk_player.h"
#endif
class CAkimbo_beretta : public CAkimbobase
{
public:
	DECLARE_CLASS(CAkimbo_beretta, CWeaponSDKBase);
	DECLARE_NETWORKCLASS(); 
	DECLARE_PREDICTABLE();
	DECLARE_ACTTABLE();
	virtual SDKWeaponID GetWeaponID (void) const 
	{
		return SDK_WEAPON_AKIMBO_BERETTA;
	}
	virtual int GetFireMode () const
	{
		return FM_SEMIAUTOMATIC;
	}
};

IMPLEMENT_NETWORKCLASS_ALIASED(Akimbo_beretta, DT_Akimbo_beretta)

BEGIN_NETWORK_TABLE(CAkimbo_beretta, DT_Akimbo_beretta)
END_NETWORK_TABLE()

BEGIN_PREDICTION_DATA(CAkimbo_beretta)
END_PREDICTION_DATA()

LINK_ENTITY_TO_CLASS(weapon_akimbo_beretta, CAkimbo_beretta);
PRECACHE_WEAPON_REGISTER(weapon_akimbo_beretta);

acttable_t CAkimbo_beretta::m_acttable[] = 
{
	{ ACT_DAB_STAND_IDLE,				ACT_DAB_STAND_IDLE_AKIMBO_BERETTA,				false },
	{ ACT_DAB_WALK_IDLE,				ACT_DAB_WALK_IDLE_AKIMBO_BERETTA,					false },
	{ ACT_DAB_RUN_IDLE,					ACT_DAB_RUN_IDLE_AKIMBO_BERETTA,					false },
	{ ACT_DAB_CROUCH_IDLE,				ACT_DAB_CROUCH_IDLE_AKIMBO_BERETTA,				false },
	{ ACT_DAB_CROUCHWALK_IDLE,			ACT_DAB_CROUCHWALK_IDLE_AKIMBO_BERETTA,			false },
	{ ACT_DAB_STAND_READY,              ACT_DAB_STAND_READY_AKIMBO_BERETTA,              false },
	{ ACT_DAB_WALK_READY,               ACT_DAB_WALK_READY_AKIMBO_BERETTA,               false },
	{ ACT_DAB_RUN_READY,                ACT_DAB_RUN_READY_AKIMBO_BERETTA,                false },
	{ ACT_DAB_CROUCH_READY,             ACT_DAB_CROUCH_READY_AKIMBO_BERETTA,             false },
	{ ACT_DAB_CROUCHWALK_READY,         ACT_DAB_CROUCHWALK_READY_AKIMBO_BERETTA,         false },
	{ ACT_DAB_PRONECHEST_IDLE,			ACT_DAB_PRONECHEST_IDLE_AKIMBO_BERETTA,			false },
	{ ACT_DAB_PRONEBACK_IDLE,			ACT_DAB_PRONEBACK_IDLE_AKIMBO_BERETTA,			false },
	{ ACT_DAB_CRAWL_IDLE,				ACT_DAB_CRAWL_IDLE_AKIMBO_BERETTA,				false },

	{ ACT_DAB_AKIMBO_RIGHT,				ACT_DAB_PRIMARYATTACK_AKIMBO_BERETTA_RIGHT,			false },
	{ ACT_DAB_AKIMBO_CROUCH_RIGHT,		ACT_DAB_PRIMARYATTACK_CROUCH_AKIMBO_BERETTA_RIGHT,	false },
	{ ACT_DAB_AKIMBO_PRONE_RIGHT,		ACT_DAB_PRIMARYATTACK_PRONE_AKIMBO_BERETTA_RIGHT,	false },
	{ ACT_DAB_AKIMBO_SLIDE_RIGHT,		ACT_DAB_PRIMARYATTACK_SLIDE_AKIMBO_BERETTA_RIGHT,	false },
	{ ACT_DAB_AKIMBO_DIVE_RIGHT,		ACT_DAB_PRIMARYATTACK_DIVE_AKIMBO_BERETTA_RIGHT,	false },
	{ ACT_DAB_AKIMBO_ROLL_RIGHT,		ACT_DAB_PRIMARYATTACK_ROLL_AKIMBO_BERETTA_RIGHT,	false },

	{ ACT_DAB_AKIMBO_LEFT,				ACT_DAB_PRIMARYATTACK_AKIMBO_BERETTA_LEFT,			false },
	{ ACT_DAB_AKIMBO_CROUCH_LEFT,		ACT_DAB_PRIMARYATTACK_CROUCH_AKIMBO_BERETTA_LEFT,	false },
	{ ACT_DAB_AKIMBO_PRONE_LEFT,		ACT_DAB_PRIMARYATTACK_PRONE_AKIMBO_BERETTA_LEFT,	false },
	{ ACT_DAB_AKIMBO_SLIDE_LEFT,		ACT_DAB_PRIMARYATTACK_SLIDE_AKIMBO_BERETTA_LEFT,	false },
	{ ACT_DAB_AKIMBO_DIVE_LEFT,			ACT_DAB_PRIMARYATTACK_DIVE_AKIMBO_BERETTA_LEFT,		false },
	{ ACT_DAB_AKIMBO_ROLL_LEFT,			ACT_DAB_PRIMARYATTACK_ROLL_AKIMBO_BERETTA_LEFT,		false },

	{ ACT_DAB_RELOAD,					ACT_DAB_RELOAD_AKIMBO_BERETTA,					false },
	{ ACT_DAB_RELOAD_CROUCH,			ACT_DAB_RELOAD_CROUCH_AKIMBO_BERETTA,				false },
	{ ACT_DAB_RELOAD_PRONE,				ACT_DAB_RELOAD_PRONE_AKIMBO_BERETTA,				false },
	{ ACT_DAB_RELOAD_SLIDE,				ACT_DAB_RELOAD_SLIDE_AKIMBO_BERETTA,				false },
	{ ACT_DAB_BRAWL,                    ACT_DAB_BRAWL_AKIMBO_BERETTA,                    false },
	{ ACT_DAB_BRAWL_CROUCH,             ACT_DAB_BRAWL_CROUCH_AKIMBO_BERETTA,             false },
	{ ACT_DAB_BRAWL_PRONE,              ACT_DAB_BRAWL_PRONE_AKIMBO_BERETTA,              false },
	{ ACT_DAB_BRAWL_SLIDE,              ACT_DAB_BRAWL_SLIDE_AKIMBO_BERETTA,              false },
	{ ACT_DAB_BRAWL_DIVE,               ACT_DAB_BRAWL_DIVE_AKIMBO_BERETTA,               false },
	{ ACT_DAB_BRAWL_ROLL,               ACT_DAB_BRAWL_ROLL_AKIMBO_BERETTA,               false },
	{ ACT_DAB_JUMP_START,				ACT_DAB_JUMP_START_AKIMBO_BERETTA,				false },
	{ ACT_DAB_JUMP_FLOAT,				ACT_DAB_JUMP_FLOAT_AKIMBO_BERETTA,				false },
	{ ACT_DAB_JUMP_LAND,				ACT_DAB_JUMP_LAND_AKIMBO_BERETTA,					false },
	{ ACT_DAB_DIVE,						ACT_DAB_DIVE_AKIMBO_BERETTA,						false },
	{ ACT_DAB_DIVEFALL,					ACT_DAB_DIVEFALL_AKIMBO_BERETTA,					false },
	{ ACT_DAB_DIVEROLL,					ACT_DAB_DIVEROLL_AKIMBO_BERETTA,					false },
	{ ACT_DAB_ROLL,						ACT_DAB_ROLL_AKIMBO_BERETTA,						false },
	{ ACT_DAB_SLIDESTART,				ACT_DAB_SLIDESTART_AKIMBO_BERETTA,				false },
	{ ACT_DAB_SLIDE,					ACT_DAB_SLIDE_AKIMBO_BERETTA,						false },
	{ ACT_DAB_DIVESLIDE,                ACT_DAB_DIVESLIDE_AKIMBO_BERETTA,                false },
	{ ACT_DAB_PRONE_TO_STAND,           ACT_DAB_PRONE_TO_STAND_AKIMBO_BERETTA,           false },
};
IMPLEMENT_ACTTABLE(CAkimbo_beretta);