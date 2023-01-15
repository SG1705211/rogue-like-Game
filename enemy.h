#ifndef ENEMY_H
#define ENEMY_H
#include "object.h"
#include "player.h"

class Player;

class Enemy: public Object {
    bool in_fight = false;
    public:
        virtual Character getCharacter() const = 0;
        virtual void move(int x, int y) = 0;  
        virtual void setStatus(double hp, double atk, double def) = 0;
        virtual double getEffect(double def) = 0;
        virtual void takeDamage(shared_ptr<Player> p) = 0;
        virtual bool getLive() = 0;
        virtual void takeCompass() = 0;
        virtual bool getCompass() = 0;
        virtual Status getStatus() = 0;
        virtual bool access_Hostile() = 0;
        virtual void getHostile() = 0;
        void change_fight(bool n) {in_fight = n;}
        bool get_fight() {return in_fight;}
        
        virtual void not_live() = 0;
};

#endif
