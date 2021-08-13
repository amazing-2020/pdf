	.file	"code case 200.c"
	.text
	.section	.rodata
.LC0:
	.string	" %3d"
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
	subq	$32, %rsp
	movl	$1, -12(%rbp)
	movl	$10, -16(%rbp)
	movl	-12(%rbp), %eax
	movl	%eax, -4(%rbp)
	jmp	.L2
.L5:
	movl	-4(%rbp), %eax
	movl	%eax, -20(%rbp)
	movl	$1, -8(%rbp)
	jmp	.L3
.L4:
	movl	-20(%rbp), %eax
	imull	-8(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	addl	$1, -8(%rbp)
.L3:
	cmpl	$10, -8(%rbp)
	jle	.L4
	movl	$10, %edi
	call	putchar
	addl	$1, -4(%rbp)
.L2:
	movl	-4(%rbp), %eax
	cmpl	-16(%rbp), %eax
	jle	.L5
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (SUSE Linux) 10.2.1 20200825 [revision c0746a1beb1ba073c7981eb09f55b3d993b32e5c]"
	.section	.note.GNU-stack,"",@progbits
