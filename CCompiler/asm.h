char* assignAddTemp = "%%macro assignAddTemp 3\n"		
		"\tmov ebx, [rsp + %1]\n"
		"\tmov ecx, [rsp + %2]\n"
		"\tadd ebx, ecx\n"
		"\tmov [rsp + %2], ebx\n"
		"%%endmacro\n";

char* assignConstant = "%%macro assignConstant 2\n"		
			"\tmov [rsp + %1], %2\n"
			"%%endmacro\n";


