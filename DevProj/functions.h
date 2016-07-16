//functions to build linked lists

  //void parseThrough(FILE *input);
  int isAssembly(char* name);
  void ObjFile(FILE *input,FILE *output);
  
  
  
	
  
  struct opcode 
{
    char *name;
    int value;
    struct opcode *next;
	
}opcode;
  
  struct opcode* createOpcodeList(char *name,int codeValue);
  struct opcode* addOpcode(char* name, int codeValue);
	struct opcode* searchOpcode(char* name);
	struct opcode* ifNull(char* name);
	void display();
	struct opcode* getOpcode(struct opcode *opPtr);
 	int printOpcode(struct opcode *ptr);
	int returnValue(struct opcode *value);
	char* returnName(struct opcode *name);
	



  
  struct symbols
{
    char *symbolName;
    int address;
    struct symbols *next;
}symbols;

  struct symbols* createSymbolNode(int symValue, char* address);
  struct symbols* addSNode(char *Symname, int Symvalue);
  struct symbols* symbolSearch(char* symbolName);
  void symbolDisplay(void);
   void setAddress(struct symbols *ptr, int ad);
   int returnAddress(char *ptr);
   void symbol_list(void);
  
	int location[500];
	int currentLineOp[500];
	int lc;
	int startLocation;
	char* TESTPROG;
	char assemblyDer[80];
  





  


  
