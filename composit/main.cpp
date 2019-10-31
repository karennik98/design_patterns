#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Employer
{
public:
    Employer(std::string name)
        : m_name(name)
    {
    }
    virtual void Operation() = 0;

    virtual void AddChild(Employer* employ)
    {
        throw std::runtime_error("This class dont overide AddChild method");
    }

    virtual void RemoveChild(Employer* employ)
    {
        throw std::runtime_error("This class dont overide RemoveChild method");
    }

    virtual std::vector<Employer*> GetChildren()
    {
        throw std::runtime_error("This class dont overide GetChildren method");
    }
protected:
    std::string m_name;
};

class Intern : public Employer
{
public:
    Intern(std::string name) 
        : Employer(name)
    {}   
    
    virtual void Operation() override 
    {
        std::cout<<"Name: "<<m_name<<std::endl;
    }
};

class Engineer : public Employer
{
public:
    Engineer( std::string name)
        : Employer( name )
    {}

    virtual void Operation() override 
    {
        std::cout<<"Name: "<<m_name<<std::endl;
    }
};

class Senior : public Employer
{
public:
    Senior( std::string name )
        : Employer( name )
    {}

    virtual void Operation() override 
    {
        std::cout<<"Name: "<<m_name<<std::endl;
    }
};

class Manager : public Employer
{
public:
    Manager( std::string name )
        : Employer( name )
    {}
    
    virtual void Operation() override 
    {
        std::cout<<"Name: "<<m_name<<std::endl;
        
        for (int i = 0; i < m_composite.size(); ++i)
        {
            m_composite[i]->Operation();
        }
    }
    
    virtual void AddChild(Employer * employ) override
    {
        m_composite.push_back(employ);
    }

    virtual void RemoveChild( Employer* employ ) override
    {
        std::vector<Employer* >::iterator remove_item = std::find(m_composite.begin(), m_composite.end(), employ);
        m_composite.erase(remove_item);
    }
    
    virtual std::vector<Employer*> GetChildren() override
    {
        return m_composite;
    }

private:
    std::vector<Employer*> m_composite;
};

int main()
{
    Employer* manager  =  new Manager("David");
    Employer* intern    =  new Intern("Valodik");       
    Employer* engineer =  new Engineer("Tigran");
    Employer* senior   =  new Senior("Narek");

    manager->AddChild(intern);
    manager->AddChild(engineer);
    manager->AddChild(senior); 
    
    manager->Operation();
    
    manager->RemoveChild(intern);
    
    manager->Operation();
    
    return 0;
}




















