char* addIDs = "\%macro addIDs 2\n"		
		"\tmov ebx, [esp + %1]\n"
		"\tmov ecx, [esp + %2]\n"
		"\tadd ebx, ecx\n"
		"\%endmacro\n";

char* assignConstant = "\%macro assignConstant 2\n"
			"\tmov ebx, %2\n"		
			"\tmov [esp + %1], bx\n"
			"\%endmacro\n";

char* assignID = "\%macro assignID 2\n"
		 "\tmov ebx, [esp + %2]\n"
		 "\tmov [esp + %1], bx\n"
		 "\t\%endmacro\n";

