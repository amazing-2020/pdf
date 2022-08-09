	.file	"Exercise11_3.c"
	.text
	.section	.rodata
.LC0:
	.string	"Enter word: "
.LC1:
	.string	"The word you input: "
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
	subq	$48, %rsp
	movq	$0, -48(%rbp)
	movq	$0, -40(%rbp)
	movq	$0, -32(%rbp)
	movq	$0, -24(%rbp)
	movq	$0, -16(%rbp)
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	readWord
	movl	$.LC1, %edi
	movl	$0, %eax
	call	printf
	movl	$0, -4(%rbp)
	jmp	.L2
.L3:
	movl	-4(%rbp), %eax
	cltq
	movzbl	-48(%rbp,%rax), %eax
	movsbl	%al, %eax
	movl	%eax, %edi
	call	putchar
	addl	$1, -4(%rbp)
.L2:
	movl	-4(%rbp), %eax
	cmpl	$39, %eax
	jbe	.L3
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.globl	readWord
	.type	readWord, @function
readWord:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L6
.L10:
	call	getchar
	movl	%eax, %edx
	movl	-4(%rbp), %eax
	movslq	%eax, %rcx
	movq	-24(%rbp), %rax
	addq	%rcx, %rax
	movb	%dl, (%rax)
	call	__ctype_b_loc
	movq	(%rax), %rdx
	movl	-4(%rbp), %eax
	movslq	%eax, %rcx
	movq	-24(%rbp), %rax
	addq	%rcx, %rax
	movzbl	(%rax), %eax
	movsbq	%al, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	movzwl	(%rax), %eax
	movzwl	%ax, %eax
	andl	$8192, %eax
	testl	%eax, %eax
	je	.L7
	cmpl	$0, -4(%rbp)
	jle	.L6
	call	__ctype_b_loc
	movq	(%rax), %rdx
	movl	-4(%rbp), %eax
	cltq
	leaq	-1(%rax), %rcx
	movq	-24(%rbp), %rax
	addq	%rcx, %rax
	movzbl	(%rax), %eax
	movsbq	%al, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	movzwl	(%rax), %eax
	movzwl	%ax, %eax
	andl	$8192, %eax
	testl	%eax, %eax
	jne	.L6
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movb	$0, (%rax)
	jmp	.L9
.L7:
	addl	$1, -4(%rbp)
.L6:
	cmpl	$39, -4(%rbp)
	jle	.L10
.L9:
	movq	-24(%rbp), %rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	readWord, .-readWord
	.ident	"GCC: (SUSE Linux) 10.3.0"
	.section	.note.GNU-stack,"",@progbits
