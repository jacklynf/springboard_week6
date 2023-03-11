#include <iostream>

using namespace std;

class Animal
{
  public:
    virtual void make_sound () const = 0;
};

void poke (Animal const & animal)
{ animal.make_sound(); }

class Cow : public Animal
{
  public:
    void make_sound () const override
    { cout << "moo" << endl; }
};

class FullCow : public Cow
{
  public:
    void make_sound () const override
    { cout << "Ooof - I ate too much" << endl; }
};

class Pig : public Animal
{
  public:
    void make_sound () const override
    { cout << "Oink!" << endl; }
};

class ConfusedPig : public Pig
{
  public:
    void make_sound () const override
    { cout << "Moo?" << endl; }
};

int main ()
{
  Cow c;
  FullCow fc;
  Pig p;
  ConfusedPig cp;

  poke(c);
  poke(fc);
  poke(p);
  poke(cp);
  
  return 0;
}

