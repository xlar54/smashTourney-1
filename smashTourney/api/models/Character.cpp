#include "Character.h"

// this file actually contains the code *based on the class definition in the .h file*

// public constructors (this first one doesnt do anything and could be removed (remove from both .cpp and .h files))
Character::Character()
  : characterId{}
  , characterName{}
  , archetype(Archetype::ALL_ROUNDER)
  , weight(Weight::MIDDLEWEIGHT)
  , fallSpeed(FallSpeed::FLOATY)
{}

Character::Character(const boost::uuids::uuid &id,
                     std::string name,
                     Archetype a,
                     Weight w,
                     FallSpeed f)
  : characterId(id)
  , characterName(std::move(name))
  , archetype(a)
  , weight(w)
  , fallSpeed(f)
{}

// your public getter methods

const boost::uuids::uuid& Character::getCharacterId() const { 
    return characterId; 
}
const std::string&        Character::getCharacterName() const { 
    return characterName; 
}

Character::Archetype      Character::getArchetype() const { 
    return archetype; 
}

Character::Weight         Character::getWeight() const { 
    return weight; 
}

Character::FallSpeed      Character::getFallSpeed() const { 
    return fallSpeed; 
}

void Character::setCharacterId(const boost::uuids::uuid &id)    { characterId   = id; }
void Character::setCharacterName(std::string name)              { characterName = std::move(name); }
void Character::setArchetype(Archetype a)                       { archetype     = a; }
void Character::setWeight(Weight w)                             { weight        = w; }
void Character::setFallSpeed(FallSpeed f)                       { fallSpeed     = f; }
