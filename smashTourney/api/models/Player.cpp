#include "libs/pch.h"
#include "boost/date_time/local_time/local_date_time.hpp"
#include "boost/uuid/uuid.hpp"
#include "Character.cpp"

class Player
{
public:
    const boost::uuids::uuid &getUserId() const { return userId; }

    const boost::uuids::uuid &getGameId() const { return gameId; }

    const std::string &getPlayerName() const { return playerName; }

    const std::string &getPasswordHash() const { return passwordHash; }

    const std::string &getPasswordSalt() const { return passwordSalt; }

    const boost::local_time::local_date_time &getCreated() const { return created; }

    const boost::local_time::local_date_time &getLastPlayed() const { return lastPlayed; }

    const boost::local_time::local_date_time &getLastUpdate() const { return lastUpdate; }

    const std::vector<boost::local_time::local_date_time> &getMatchWins() const { return matchWins; }

    const std::vector<boost::local_time::local_date_time> &getGameWins() const { return gameWins; }

    const std::vector<boost::local_time::local_date_time> &getGamesPlayed() const { return gamesPlayed; }

    const std::vector<boost::local_time::local_date_time> &getMatchesPlayed() const { return matchesPlayed; }

    const std::vector<Character> &getCharactersPlayed() const { return charactersPlayed; }

    const Character &getCurrentCharacter() const { return currentCharacter; }

    int getCurrentScore() const { return currentScore; }

    int getCurrentRound() const { return currentRound; }

    void setUserId(const boost::uuids::uuid &newUserId) { userId = newUserId; }

    void setGameId(const boost::uuids::uuid &newGameId) { gameId = newGameId; }

    void setPlayerName(const std::string &newPlayerName) { playerName = newPlayerName; }

    void setPasswordHash(const std::string &newPasswordHash) { passwordHash = newPasswordHash; }

    void setPasswordSalt(const std::string &newPasswordSalt) { passwordSalt = newPasswordSalt; }

    void setCreated(const boost::local_time::local_date_time &newCreated) { created = newCreated; }

    void setLastPlayed(const boost::local_time::local_date_time &newLastPlayed) { lastPlayed = newLastPlayed; }

    void setLastUpdate(const boost::local_time::local_date_time &newLastUpdate) { lastUpdate = newLastUpdate; }

    void setMatchWins(const std::vector<boost::local_time::local_date_time> &newMatchWins) { matchWins = newMatchWins; }

    void setGameWins(const std::vector<boost::local_time::local_date_time> &newGameWins) { gameWins = newGameWins; }

    void setGamesPlayed(const std::vector<boost::local_time::local_date_time> &newGamesPlayed) { gamesPlayed = newGamesPlayed; }

    void setMatchesPlayed(const std::vector<boost::local_time::local_date_time> &newMatchesPlayed) { matchesPlayed = newMatchesPlayed; }

    void setCharactersPlayed(const std::vector<Character> &newCharactersPlayed) { charactersPlayed = newCharactersPlayed; }

    void setCurrentCharacter(const Character &newCurrentCharacter) { currentCharacter = newCurrentCharacter; }

    void setCurrentScore(int newCurrentScore) { currentScore = newCurrentScore; }

    void setCurrentRound(int newCurrentRound) { currentRound = newCurrentRound; }

    void setHasVoted(bool newHasVoted) { hasVoted = newHasVoted; }

    bool getHasVoted() const { return hasVoted; }

    void incrementGameWins(const boost::local_time::local_date_time &dateTime)
    {
        // add dateTime to gameWins
    }
    void incrementMatchWins(const boost::local_time::local_date_time &dateTime)
    {
        // add dateTime to matchWins
    }
    void incrementGamesPlayed(const boost::local_time::local_date_time &dateTime)
    {
        // add dateTime to gamesPlayed
    }
    void incrementMatchPlayed(const boost::local_time::local_date_time &dateTime)
    {
        // add dateTime to matchesPlayed
    }
    void incrementCharactersPlayed(const Character &character)
    {
        // add character to charactersPlayed
    }
    Player(const boost::uuids::uuid &newUserId,
           const boost::uuids::uuid &newGameId,
           const std::string &newPlayerName,
           const std::string &newPasswordHash,
           const std::string &newPasswordSalt,
           const boost::local_time::local_date_time &newCreated,
           const boost::local_time::local_date_time &newLastPlayed,
           const boost::local_time::local_date_time &newLastUpdate,
           const std::vector<boost::local_time::local_date_time> &newMatchWins,
           const std::vector<boost::local_time::local_date_time> &newGameWins,
           const std::vector<boost::local_time::local_date_time> &newGamesPlayed,
           const std::vector<boost::local_time::local_date_time> &newMatchesPlayed,
           const std::vector<Character> &newCharactersPlayed,
           const Character &newCurrentCharacter,
           int newCurrentScore,
           int newCurrentRound,
           bool newHasVoted)
        : userId(newUserId),
          gameId(newGameId),
          playerName(newPlayerName),
          passwordHash(newPasswordHash),
          passwordSalt(newPasswordSalt),
          created(newCreated),
          lastPlayed(newLastPlayed),
          lastUpdate(newLastUpdate),
          matchWins(newMatchWins),
          gameWins(newGameWins),
          gamesPlayed(newGamesPlayed),
          matchesPlayed(newMatchesPlayed),
          charactersPlayed(newCharactersPlayed),
          currentCharacter(newCurrentCharacter),
          currentScore(newCurrentScore),
          currentRound(newCurrentRound),
          hasVoted(newHasVoted) {}

private:
    boost::uuids::uuid userId;

    boost::uuids::uuid gameId;

    std::string playerName;

    std::string passwordHash;

    std::string passwordSalt;

    boost::local_time::local_date_time created;

    boost::local_time::local_date_time lastPlayed;

    boost::local_time::local_date_time lastUpdate;

    std::vector<boost::local_time::local_date_time> matchWins;

    std::vector<boost::local_time::local_date_time> gameWins;

    std::vector<boost::local_time::local_date_time> gamesPlayed;

    std::vector<boost::local_time::local_date_time> matchesPlayed;

    std::vector<Character> charactersPlayed;

    Character currentCharacter;

    int currentScore;

    int currentRound;

    bool hasVoted;
};