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

addIDs 8, 12 ;v + i
mov [esp + 16], ebx ;temp0 = v + i

assignID 12, 16 ;i = temp0

assignID 16, 0 ;a = 


ret

