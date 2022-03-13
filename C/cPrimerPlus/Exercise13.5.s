	.file	"Exercise13.5.c"
	.text
	.section	.rodata
	.align 8
.LC0:
	.string	"Parameters not enough or too much.\n"
	.align 8
.LC1:
	.string	"The first parameter should be a character.\n"
.LC2:
	.string	"r"
.LC3:
	.string	"Can't find the file.\n"
.LC4:
	.string	"%s"
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
	subq	$288, %rsp
	movl	%edi, -276(%rbp)
	movq	%rsi, -288(%rbp)
	movl	$0, -4(%rbp)
	cmpl	$3, -276(%rbp)
	je	.L2
	movq	stderr(%rip), %rax
	movq	%rax, %rcx
	movl	$35, %edx
	movl	$1, %esi
	movl	$.LC0, %edi
	call	fwrite
	movl	$1, %edi
	call	exit
.L2:
	movq	-288(%rbp), %rax
	addq	$8, %rax
	movq	(%rax), %rax
	addq	$1, %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	je	.L3
	movq	stderr(%rip), %rax
	movq	%rax, %rcx
	movl	$43, %edx
	movl	$1, %esi
	movl	$.LC1, %edi
	call	fwrite
	movl	$1, %edi
	call	exit
.L3:
	movq	-288(%rbp), %rax
	addq	$16, %rax
	movq	(%rax), %rax
	movl	$.LC2, %esi
	movq	%rax, %rdi
	call	fopen
	movq	%rax, -16(%rbp)
	cmpq	$0, -16(%rbp)
	jne	.L5
	movq	stderr(%rip), %rax
	movq	%rax, %rcx
	movl	$21, %edx
	movl	$1, %esi
	movl	$.LC3, %edi
	call	fwrite
	movl	$1, %edi
	call	exit
.L10:
	movl	$0, -8(%rbp)
	jmp	.L6
.L9:
	movl	-8(%rbp), %eax
	cltq
	movzbl	-272(%rbp,%rax), %edx
	movq	-288(%rbp), %rax
	addq	$8, %rax
	movq	(%rax), %rax
	movzbl	(%rax), %eax
	cmpb	%al, %dl
	jne	.L7
	movl	$1, -4(%rbp)
	jmp	.L8
.L7:
	addl	$1, -8(%rbp)
.L6:
	movl	-8(%rbp), %eax
	cltq
	movzbl	-272(%rbp,%rax), %eax
	cmpb	$10, %al
	je	.L8
	movl	-8(%rbp), %eax
	cltq
	movzbl	-272(%rbp,%rax), %eax
	testb	%al, %al
	jne	.L9
.L8:
	cmpl	$0, -4(%rbp)
	je	.L5
	movl	$0, -4(%rbp)
	leaq	-272(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC4, %edi
	movl	$0, %eax
	call	printf
.L5:
	movq	-16(%rbp), %rdx
	leaq	-272(%rbp), %rax
	movl	$256, %esi
	movq	%rax, %rdi
	call	fgets
	testq	%rax, %rax
	jne	.L10
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (SUSE Linux) 10.3.0"
	.section	.note.GNU-stack,"",@progbits
