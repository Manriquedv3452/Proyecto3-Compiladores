%macro addIDs 2
	mov ebx, [esp + %1]
	mov ecx, [esp + %2]
	add ebx, ecx
%endmacro

%macro assignConstant 2
	mov ebx, %2
	mov [esp + %1], bx
%endmacro

%macro assignID 2
	mov ebx, [esp + %2]
	mov [esp + %1], bx
	%endmacro

assignConstant 4, 5 ;r = 5

assignConstant 8, 2 ;v = 2

global main
main:

assignConstant 12, 2 ;j = 2


ret

