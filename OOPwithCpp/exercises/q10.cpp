The ZooAnimal class definition below is missing a prototype  or a function declaration  for the Create function.  It should have parameters so that a character string and three integer values (in that order) can be provided when
it is called for a ZooAnimal object.  Like the Destroy function, it
should have return type void.  Write an appropriate prototype for the
ZooAnimal Create function.


class ZooAnimal  
   {

    private:
      char *name;
      int cageNumber;
      int weightDate;
      int weight;
    public:

    void create(char *name, int cageNumArg, int weightDArg, int weightArg);
      void Destroy (); // destroy function
      char* reptName ();
      int daysSinceLastWeighed (int today);

   };
