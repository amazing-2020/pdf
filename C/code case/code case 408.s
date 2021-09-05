	.file	"code case 408.c"
	.text
	.section	.rodata
.LC0:
	.string	"%d %d %d \n"
	.text
	.globl	sort
	.type	sort, @function
sort:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	%rdx, -40(%rbp)
	movq	-24(%rbp), %rax
	movl	(%rax), %edx
	movq	-32(%rbp), %rax
	movl	(%rax), %eax
	cmpl	%eax, %edx
	jle	.L2
	movq	-40(%rbp), %rax
	movl	(%rax), %edx
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	cmpl	%eax, %edx
	cmovge	%edx, %eax
	jmp	.L3
.L2:
	movq	-40(%rbp), %rax
	movl	(%rax), %edx
	movq	-32(%rbp), %rax
	movl	(%rax), %eax
	cmpl	%eax, %edx
	cmovge	%edx, %eax
.L3:
	movl	%eax, -4(%rbp)
	movq	-24(%rbp), %rax
	movl	(%rax), %edx
	movq	-32(%rbp), %rax
	movl	(%rax), %eax
	cmpl	%eax, %edx
	jge	.L4
	movq	-40(%rbp), %rax
	movl	(%rax), %edx
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	cmpl	%eax, %edx
	cmovle	%edx, %eax
	jmp	.L5
.L4:
	movq	-40(%rbp), %rax
	movl	(%rax), %edx
	movq	-32(%rbp), %rax
	movl	(%rax), %eax
	cmpl	%eax, %edx
	cmovle	%edx, %eax
.L5:
	movl	%eax, -8(%rbp)
	movq	-24(%rbp), %rax
	movl	(%rax), %edx
	movq	-32(%rbp), %rax
	movl	(%rax), %eax
	addl	%eax, %edx
	movq	-40(%rbp), %rax
	movl	(%rax), %eax
	addl	%edx, %eax
	subl	-4(%rbp), %eax
	subl	-8(%rbp), %eax
	movl	%eax, -12(%rbp)
	movl	-4(%rbp), %ecx
	movl	-12(%rbp), %edx
	movl	-8(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	sort, .-sort
	.section	.rodata
.LC1:
	.string	"Enter a b c: "
.LC2:
	.string	"%d %d %d"
	.text
	.globl	main
	.type	main, @function
main:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	%edi, -20(%rbp)
	movq	%rsi, -32(%rbp)
	movl	$.LC1, %edi
	movl	$0, %eax
	call	printf
	leaq	-12(%rbp), %rcx
	leaq	-8(%rbp), %rdx
	leaq	-4(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC2, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	leaq	-12(%rbp), %rdx
	leaq	-8(%rbp), %rcx
	leaq	-4(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	sort
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.ident	"GCC: (SUSE Linux) 10.3.0"
	.section	.note.GNU-stack,"",@progbits
