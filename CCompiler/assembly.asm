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

call f

addIDs 12, 0 ;i + 7
mov [esp + 20], ebx ;temp0 = i + 7

addIDs 20, 0 ;temp0 + 7
mov [esp + 20], ebx ;temp0 = temp0 + 7

addIDs 20, 0 ;temp0 + 0
mov [esp + 20], ebx ;temp0 = temp0 + 0

addIDs 20, 0 ;temp0 + 2
mov [esp + 20], ebx ;temp0 = temp0 + 2

assignID 16, 20 ;a = temp0


ret

