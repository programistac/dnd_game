#ifndef DND_TYPES_H
#define DND_TYPES_H

#include "constants.h"

// ANSI C booleans
#define TRUE 1
#define FALSE 0

typedef enum 
{
    ENTITY_UNKNOWN,
    ENTITY_PLAYER,
    ENTITY_NPC,
    ENTITY_MONSTER
} EntityType;

typedef enum 
{
    GENDER_UNKNOWN,
    GENDER_MALE,
    GENDER_FEMALE
} Gender;

typedef enum 
{
    CREATURE_UNKNOWN,
    CREATURE_HUMANOID,
    CREATURE_BEAST,
    CREATURE_UNDEAD,
    CREATURE_DRAGON,
    CREATURE_FIEND,
    CREATURE_CELESTIAL
} CreatureType;

typedef struct 
{
	int STR, DEX, CON, INT, WIS, CHA;
} AbilityScores;

typedef struct
{
	int STR_MOD, DEX_MOD, CON_MOD, INT_MOD, WIS_MOD, CHA_MOD;
} SAbilityModifiers;

typedef struct 
{
	int current;
	int max;
} HitPoints;

typedef enum 
{
	TINY,
	SMALL,
	MEDIUM,
	LARGE,
	HUGE,
	GARGANTUAN
} Size;

typedef enum 
{
    COMMON,
    DWARVISH,
    ELVISH,
    GIANT,
    GNOMISH,
    GOBLIN,
    HALFLING,
    ORC,
    ABYSSAL,
    CELESTIAL,
    DRACONIC,
    DEEP_SPEECH,
    INFERNAL,
    PRIMORDIAL,
    SYLVAN,
    UNDERCOMMON
} Language;

typedef enum 
{
    DARKVISION,
    DWARVEN_RESILIENCE,
    VERSATILITY
    // add more as needed
} Trait;

typedef enum {
	SKILL_ACROBATICS,
	SKILL_ANIMAL_HANDLING,
	SKILL_ARCANA,
	SKILL_ATHLETICS,
	SKILL_DECEPTION,
	SKILL_HISTORY,
	SKILL_INSIGHT,
	SKILL_INTIMIDATION,
	SKILL_INVESTIGATION,
	SKILL_MEDICINE,
	SKILL_NATURE,
	SKILL_PERCEPTION,
	SKILL_PERFORMANCE,
	SKILL_PERSUASION,
	SKILL_RELIGION,
	SKILL_SLEIGHT_OF_HAND,
	SKILL_STEALTH,
	SKILL_SURVIVAL,
	SKILL_COUNT  /* useful for iteration */
} ESkill;

#endif
