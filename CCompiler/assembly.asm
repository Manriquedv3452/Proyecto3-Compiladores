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

global main
main:

assignConstant 4, 5 ;x = 5


jmp selector0

label1:

label2:

default3:
jmp exit0


selector0:
mov eax, [esp + 4]

cmp eax, 2
je label1 

cmp eax, 10
je label2 

jmp default3 

exit0:

ret

