#include<bits/stdc++.h>
using namespace std;
  
  // Parent class 
  class  Animal
  {
    public:
    virtual void  speak() // virtual ka use sa ab hmm iss void speak ko run time me dekhange kya karna hai iska 
    {
        cout<<"HUHU\n";
    }
  };

  class Dog : public Animal
  {
    public:
    void speak()
    {
        cout<<"Bark\n";
    }

    
  };

  class Cat : public Animal
  {
    public:
    void speak()
    {
        cout<<"Meow\n";
    }

    
  };


  class Lion:public Animal
  {
    public:
    void speak()
    {
        cout<<"ROAR\n";
    }
  };


int main (){

//    Animal*p;
//    p=new Dog();
//    p->speak();
   
//    Dog d1;
//    d1.speak();

  Animal*p;
  vector<Animal*>animal;
  animal.push_back(new Dog());
  animal.push_back(new Cat());
  animal.push_back(new Lion());
  animal.push_back(new Animal());
  animal.push_back(new Dog());
  animal.push_back(new Cat());
  animal.push_back(new Lion());

  // kaise likhoge
  for(int i=0;i<animal.size();i++){
    p=animal[i];
    p->speak();
  }

    return 0;

}

