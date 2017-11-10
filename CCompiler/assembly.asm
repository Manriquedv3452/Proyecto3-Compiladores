%%macro assignAddTemp 3
	mov ebx, [rsp + %1]
	mov ecx, [rsp + %2]
	add ebx, ecx
	mov [rsp + %2], ebx
%%endmacro

%%macro assignConstant 2
	mov [rsp + %1], %2
%%endmacro

