	.file	"code case 109.c"
	.text
	.section	.rodata
.LC0:
	.string	"square 5+4 is %d \n"
.LC1:
	.string	"square_1 5+4 is %d "
	.string	""
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$81, %esi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	movl	$29, %esi
	movl	$.LC1, %edi
	movl	$0, %eax
	call	printf
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (SUSE Linux) 10.2.1 20200825 [revision c0746a1beb1ba073c7981eb09f55b3d993b32e5c]"
	.section	.note.GNU-stack,"",@progbits
