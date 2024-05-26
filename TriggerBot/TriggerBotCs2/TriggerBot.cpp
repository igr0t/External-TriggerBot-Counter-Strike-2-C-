#include "include.h"

void trigger::execute()
{
	static uintptr_t local_player = memory::Read<uintptr_t>(module_base + client_dll::dwLocalPlayerPawn);
	
	//Leitura da equipe
	BYTE local_player_team = memory::Read<BYTE>(local_player + C_BaseEntity::m_iTeamNum);
	static uintptr_t entity_list = memory::Read<uintptr_t>(module_base + client_dll::dwEntityList);
	
	int crosshair_entity_index = memory::Read<int>(local_player + C_CSPlayerPawnBase::m_iIDEntIndex);
	
	if (crosshair_entity_index < 0)
		return;
	
	uintptr_t listEntry = memory::Read<uintptr_t>(entity_list + 0x8 * (crosshair_entity_index >> 9) + 0x10);
	uintptr_t entity = memory::Read <uintptr_t>(listEntry + 120 * (crosshair_entity_index & 0x1ff));

	
	if (!entity)
		return;

	BYTE entity_team = memory::Read<BYTE>(entity + C_BaseEntity::m_iTeamNum);
	
	if (local_player_team == entity_team)
		return;

	int entity_health = memory::Read<int>(entity + C_BaseEntity::m_iHealth);

	if (entity_health <= 0)
		return;

	memory::Write<int>
		(module_base + client_dll::dwForceAttack, 65537);
	Sleep(6);
	memory::Write<int>(module_base + client_dll::dwForceAttack, 256);
	Sleep(6);
	//Verificar saude da entity
	//int entity_health = memory::Read<int>(entity + C_BaseEntity::m_iHealth);

}