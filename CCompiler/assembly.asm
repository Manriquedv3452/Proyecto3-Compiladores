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
	mov [esp + %1], eax
%endmacro

%macro assignID 2
	mov eax, [esp + %2]
	mov [esp + %1], eax
	%endmacro

%macro addConstant 2
	mov eax, [esp + %1]
	add eax, %2
%endmacro

%macro subConstantLeft 2
	mov eax, %1
	mov ecx, [esp + %2]
	add eax, ecx
%endmacro

%macro subConstantRight 2
	mov eax, [esp + %1]
	mov ecx, %2
	add eax, ecx
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

%macro write 2
	mov eax, 4
	mov ebx, 1
	mov ecx, %1
	mov edx, %2
	int 0x80
%endmacro

global main
main:

	assignConstant 4, 0 	;i = 0

	mov eax, [esp + 4]

	cmp eax, 5
	jae compL0 	;compare i < 5, jmp if false
	mov eax, 1
	jmp exitComp0

compL0:
	mov eax, 0

exitComp0:
	mov [esp + 8], eax 	;temp0 = i op 5



	mov eax, 1
	int 0x80

