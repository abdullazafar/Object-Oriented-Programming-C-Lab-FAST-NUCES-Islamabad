struct Character
{
    int hp;
    int mp;
    int level;
};

void applyDamage(Character* c, int amount)
{
    c->hp -= amount;

    if(c->hp < 0)
    {
        c->hp = 0;
    }

}

void levelUp(Character& c)
{
    c.level++;
    c.hp = 100;
    c.mp = 50;
}

bool isDefeated(const Character& c)
{
    return (c.hp <= 0);
}