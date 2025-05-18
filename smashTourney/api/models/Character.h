#pragma once
#include <string>
#include <boost/uuid/uuid.hpp>

// a .h file is where you define your class (notice the class below)
// code does NOT go here.  just whats public: , whats private, etc.

class Character {

// your public stuff below
public:
  enum class Archetype    { ALL_ROUNDER, ZONE_BREAKER, ZONERS, TRAPPERS, GRAPPLERS, FOOTSIES, HIT_AND_RUN, GLASS_CANNON };
  enum class FallSpeed    { FLOATY, FAST_FALLER };
  enum class Weight       { LIGHTWEIGHT, MIDDLEWEIGHT, HEAVYWEIGHT };

// public constructors
  Character();
  Character(const boost::uuids::uuid &id,
            std::string name,
            Archetype archetype,
            Weight weight,
            FallSpeed fallSpeed);

  const boost::uuids::uuid& getCharacterId()   const;
  const std::string&         getCharacterName() const;
  Archetype                  getArchetype()     const;
  Weight                     getWeight()        const;
  FallSpeed                  getFallSpeed()     const;

  void setCharacterId(const boost::uuids::uuid &);
  void setCharacterName(std::string);
  void setArchetype(Archetype);
  void setWeight(Weight);
  void setFallSpeed(FallSpeed);

// private member data below
private:
  boost::uuids::uuid characterId;
  std::string         characterName;
  Archetype           archetype;
  Weight              weight;
  FallSpeed           fallSpeed;
};