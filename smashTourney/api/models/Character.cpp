#include "../libs/pch.h"
#include "boost/date_time/local_time/local_date_time.hpp"
#include "boost/uuid/uuid.hpp"

class Character
{
    enum Archetype
    {
        ALL_ROUNDER,
        ZONE_BREAKER,
        ZONERS,
        TRAPPERS,
        GRAPPLERS,
        FOOTSIES,
        HIT_AND_RUN,
        GLASS_CANNON
    };

    enum FallSpeed
    {
        FLOATY,
        FAST_FALLER
    };

    enum Weight
    {
        LIGHTWEIGHT,
        MIDDLEWEIGHT,
        HEAVYWEIGHT
    };

public:
    Character() {}
    Character(const boost::uuids::uuid &newCharacterId,
              const std::string &newCharacterName,
              const Archetype &newArchetype,
              const Weight &newWeight,
              const FallSpeed &newFallSpeed)
        : characterId(newCharacterId),
          characterName(newCharacterName) {}

    boost::uuids::uuid getCharacterId() const { return characterId; }

    std::string getCharacterName() const { return characterName; }

    Archetype getArchetype() const { return Archetype; }

    Weight getWeight() const { return getWeight; }

    FallSpeed getFallSpeed() const { return fallSpeed; }

    void setCharacterId(const boost::uuids::uuid &newCharacterId) { characterId = newCharacterId; }

    void setCharacterName(const std::string &newCharacterName) { characterName = newCharacterName; }

    void setArchetype(const Archetype &newArchetype) { archetype = newArchetype; }

    void setWeight(const Weight &newWeight) { weight = newWeight; }

    void setFallSpeed(const FallSpeed &newFallSpeed) { fallSpeed = newFallSpeed; }

private:
    boost::uuids::uuid characterId;
    std::string characterName;
};