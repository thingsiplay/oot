#include "z_en_anubice_fire.h"

#define ROOM 0x00
#define FLAGS 0x00000010

void EnAnubiceFire_Init(EnAnubiceFire* this, GlobalContext* globalCtx);
void EnAnubiceFire_Destroy(EnAnubiceFire* this, GlobalContext* globalCtx);
void EnAnubiceFire_Update(EnAnubiceFire* this, GlobalContext* globalCtx);
void EnAnubiceFire_Draw(EnAnubiceFire* this, GlobalContext* globalCtx);

/*
const ActorInit En_Anubice_Fire_InitVars =
{
    ACTOR_EN_ANUBICE_FIRE,
    ACTORTYPE_ENEMY,
    ROOM,
    FLAGS,
    OBJECT_ANUBICE,
    sizeof(EnAnubiceFire),
    (ActorFunc)EnAnubiceFire_Init,
    (ActorFunc)EnAnubiceFire_Destroy,
    (ActorFunc)EnAnubiceFire_Update,
    (ActorFunc)EnAnubiceFire_Draw,
};
*/
#pragma GLOBAL_ASM("asm/non_matchings/overlays/actors/ovl_En_Anubice_Fire/EnAnubiceFire_Init.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/actors/ovl_En_Anubice_Fire/EnAnubiceFire_Destroy.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/actors/ovl_En_Anubice_Fire/func_809B26EC.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/actors/ovl_En_Anubice_Fire/func_809B27D8.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/actors/ovl_En_Anubice_Fire/func_809B2B48.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/actors/ovl_En_Anubice_Fire/EnAnubiceFire_Update.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/actors/ovl_En_Anubice_Fire/EnAnubiceFire_Draw.s")
