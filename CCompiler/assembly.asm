%macro addIDs 2
	mov eax, [esp + %1]
	mov ecx, [esp + %2]
	add eax, ecx
%endmacro

%macro subIDs 2
	mov eax, [esp + %1]
	mov ecx, [esp + %2]
	sub eax, ecx
%endmacro

%macro mulIDs 2
	mov eax, [esp + %1]
	mov ecx, [esp + %2]
	mul ecx
%endmacro

%macro divIDs 2
	mov eax, [esp + %1]
	mov ecx, [esp + %2]
	div ecx
%endmacro

%macro modIDs 2
	mov eax, [esp + %1]
	mov ecx, [esp + %2]
	div ecx
	mov eax, edx
%endmacro

%macro assignConstant 2
	mov eax, %2
	mov [esp + %1], ax
%endmacro

%macro assignID 2
	mov eax, [esp + %2]
	mov [esp + %1], ax
	%endmacro

%macro addConstant 2
	mov eax, [esp + %1]
	add eax, %2
%endmacro

%macro subConstantLeft 2
	mov eax, %1	mov ecx, [esp + %2]
	add eax, ecx
%endmacro

%macro subConstantRight 2
	mov eax, [esp + %1]
	mov ecx, %2	add eax, ecx
%endmacro

%macro mulConstant 2
	mov eax, [esp + %1]
	mov ecx, %2
	mul ecx
%endmacro

%macro divConstantUp 2
	mov eax, %1
	mov ecx, [esp + %2]
	div ecx
%endmacro

%macro divConstantDown 2
	mov eax, [esp + %1]
	mov ecx, %2
	div ecx
%endmacro

%macro modConstantUp 2
	mov eax, %1
	mov ecx, [esp + %2]
	div ecx
	mov eax, edx
%endmacro

%macro modConstantDown 2
	mov eax, [esp + %1]
	mov ecx, %2
	div ecx
	mov eax, edx
%endmacro

global main
main:

assignConstant 4, 5 ;x = 5


jmp selector0

label1:
assignConstant 4, 1 ;x = 1


label2:
assignConstant 4, 2 ;x = 2


default3:
assignConstant 4, 10 ;x = 10

jmp exit0


selector0:
mov eax, [esp + 4]

cmp eax, 2
je label1

cmp eax, 10
je label2

jmp default3

exit0:
assignConstant 8, 5 ;c = 5

addConstant 4, 1 ;x + 1
mov [esp + 12], ax ;temp4 = x op 1

assignID 8, 12 ;c = temp4


ret

