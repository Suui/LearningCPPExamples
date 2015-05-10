LearningCPPExamples
===================

Some simple C++ examples repository for reference in some topics, and some explanations that I've found really easy to understand and help clarifying some C++ aspects.
Be sure to check out the Resources I've followed up to adapt this information and examples. What is in this repository may be similar or totally different from the source.


Current examples added
----------------------
- Constructors and Destructors (1)
- Inheritance (1)


About Inheritance
-----------------

### Public, Private, Protected (1)
- **Public**, **private** and **protected** member variables will be accessible inside the class in which they are defined. Differences come when accesing them outside the class.
- The **public** member variables are _accessible outside_ the class and _inside_ the derived subclasses.
- The **private** member variables are **not** _accessible outside_ the class, **nor** _inside_ the derived subclasses.
- The **protected** member variables are **not** _accessible outside_ the class, **but** _accessible inside_ the derived subclasses.


### Virtual Functions (1)
- A **virtual function** is a member function whose implementation can be overriden in a derived class.
- The function **has an implementation** in the parent class, you have a choice whether to override it or not.
- If you **choose not to**, and call that function from a derived class, you will be actually calling the function of the parent class.


### Purely Virtual Functions (1)
- A **purely virtual function** is a member function whose implementation is required to be overriden in a derived class.
- Goes like: _virtual void Walk() **= 0**;_ The **= 0** is what makes it purely virtual.
- If a class contains a **purely virtual function**, it becomes an abstract class. An abstract class in C++ is any class that has at least one purely virtual function.
- _Remember!_ You cannot directly instanciate an abstract class.


Resources:
---------
**(1)**: [Learning C++ by Creating Games with UE4] by William Sherif (_Recommended!_)
