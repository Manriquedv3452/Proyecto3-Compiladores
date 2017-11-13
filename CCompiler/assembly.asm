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

assignConstant 4, 0 	;r = 0

assignConstant 8, 0 	;v = 0

global main
main:

mov eax, [esp + 4]

cmp eax, 5
jg compL0 	;compare r with 5, jmp if false
mov eax, 1
jmp exitComp0

compL0:
	mov eax, 0

exitComp0:
mov [esp + 12], ax 	;temp0 = r op 5

mov eax, [esp + 12] 	;temp0 
mov ebx, [esp + 8] 	;v

cmp eax, ebx
jge compL1 	;compare temp0 with v, jmp if false
mov eax, 1
jmp exitComp1

compL1:
	mov eax, 0

exitComp1:
mov [esp + 12], ax 	;temp0 = temp0 op v

assignID 8, 12  	;v = temp0

assignConstant 16, 0 	;initialize constant 'l' with 0

ret

