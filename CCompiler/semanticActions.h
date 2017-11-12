void save_type(void);
void process_literal(int literalType);
void process_id(void);
void save_id(void);
void process_op(void);
void process_id(void);
void declaration_end(void);
void addTableContext(void);
void checkForDeclaredError(char *token, SemanticRecord* R);
void eval_binary(void);
int verifyIfCodeNeeded(DO_Data* op1, char operator, DO_Data* op2, SemanticRecord* dataType);
void getLiteralResult(DO_Data* op1, char operator, DO_Data* op2, SemanticRecord* dataType, int operand1, int operand2);
void pushNewSemanticRecordDO(int literalType, DO_Data *op, char* value);
void generateCode(char *instruction);
void initializeOutputFile(void);
void process_assign(void);
void start_function(void);
void end_function(void);
void process_function(void);
void call_functionNoParams(void);


void start_switch(void);
void end_switch(void);
void create_selector(void);
void begin_case(void);
void create_default(void);
void append_exit(void);
void save_comparator(void);

FILE *assembly;
