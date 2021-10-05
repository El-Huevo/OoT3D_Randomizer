#ifndef _ENTRANCE_H_
#define _ENTRANCE_H_

//Entrance Table Data: https://wiki.cloudmodding.com/oot/Entrance_Table_(Data)

#define DEKU_TREE_ENTRANCE 0x0000
#define DODONGOS_CAVERN_ENTRANCE 0x0004
#define JABU_JABUS_BELLY_ENTRANCE 0x0028
#define FOREST_TEMPLE_ENTRANCE 0x169
#define FIRE_TEMPLE_ENTRANCE 0x165
#define WATER_TEMPLE_ENTRANCE 0x0010
#define SPIRIT_TEMPLE_ENTRANCE 0x0082
#define SHADOW_TEMPLE_ENTRANCE 0x0037
#define BOTTOM_OF_THE_WELL_ENTRANCE 0x0098
#define GERUDO_TRAINING_GROUNDS_ENTRANCE 0x0008
#define ICE_CAVERN_ENTRANCE 0x0088
#define GANONS_CASTLE_ENTRANCE 0x0467

#define ENTRANCE_OVERRIDES_MAX_COUNT 256

typedef struct {
    s16 index;
    s16 blueWarp;
    s16 override;
} EntranceOverride;

// debug
extern EntranceOverride rEntranceOverrides[];
extern s16 lastEntered;

void Entrance_Init(void);
u32  Entrance_IsLostWoodsBridge(void);
void Entrance_EnteredLocation(void);
u32  Entrance_SceneAndSpawnAre(u8 scene, u8 spawn);

#endif //_ENTRANCE_H_
