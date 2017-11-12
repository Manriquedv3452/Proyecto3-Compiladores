char* addIDs = "\%macro addIDs 2\n"		
		"\tmov eax, [esp + %1]\n"
		"\tmov ecx, [esp + %2]\n"
		"\tadd eax, ecx\n"
		"\%endmacro\n";

char* mulIDs = "\%macro mulIDs 2\n"		
		"\tmov eax, [esp + %1]\n"
		"\tmov ecx, [esp + %2]\n"
		"\tmul ecx\n"
		"\%endmacro\n";

char* subIDs = "\%macro subIDs 2\n"		
		"\tmov eax, [esp + %1]\n"
		"\tmov ecx, [esp + %2]\n"
		"\tsub eax, ecx\n"
		"\%endmacro\n";

char* divIDs = "\%macro divIDs 2\n"		
		"\tmov eax, [esp + %1]\n"
		"\tmov ecx, [esp + %2]\n"
		"\tdiv ecx\n"
		"\%endmacro\n";

char* modIDs = "\%macro modIDs 2\n"		
		"\tmov eax, [esp + %1]\n"
		"\tmov ecx, [esp + %2]\n"
		"\tdiv ecx\n"
		"\tmov eax, edx\n"
		"\%endmacro\n";

char* assignConstant = "\%macro assignConstant 2\n"
			"\tmov eax, %2\n"		
			"\tmov [esp + %1], ax\n"
			"\%endmacro\n";

char* addConstant = "\%macro addConstant 2\n"
		    "\tmov eax, [esp + %1]\n"
		    "\tadd eax, %2\n"
		    "\%endmacro\n";

char* mulConstant = "\%macro mulConstant 2\n"
		    "\tmov eax, [esp + %1]\n"
		    "\tmov ecx, %2\n"
		    "\tmul ecx\n"
		    "\%endmacro\n";

char* divConstantDown = "\%macro divConstantDown 2\n"
		    "\tmov eax, [esp + %1]\n"
		    "\tmov ecx, %2\n"
		    "\tdiv ecx\n"
		    "\%endmacro\n";

char* divConstantUp = "\%macro divConstantUp 2\n"
		    "\tmov eax, %1\n"
		    "\tmov ecx, [esp + %2]\n"
		    "\tdiv ecx\n"
		    "\%endmacro\n";

char* modConstantDown = "\%macro modConstantDown 2\n"
		    "\tmov eax, [esp + %1]\n"
		    "\tmov ecx, %2\n"
		    "\tdiv ecx\n"
		    "\tmov eax, edx\n"
		    "\%endmacro\n";

char* modConstantUp = "\%macro modConstantUp 2\n"
		    "\tmov eax, %1\n"
		    "\tmov ecx, [esp + %2]\n"
		    "\tdiv ecx\n"
		    "\tmov eax, edx\n"
		    "\%endmacro\n";


char* subConstantLeft = "\%macro subConstantLeft 2\n"
			  "\tmov eax, %1"
			  "\tmov ecx, [esp + %2]\n"
			  "\tadd eax, ecx\n"
			  "\%endmacro\n";

char* subConstantRight = "\%macro subConstantRight 2\n"
			  "\tmov eax, [esp + %1]\n"
			  "\tmov ecx, %2"
			  "\tadd eax, ecx\n"
			  "\%endmacro\n";

char* assignID = "\%macro assignID 2\n"
		 "\tmov eax, [esp + %2]\n"
		 "\tmov [esp + %1], ax\n"
		 "\t\%endmacro\n";

		

