	.file	"Exercise12_6.c"
	.text
	.section	.rodata
.LC0:
	.string	"%5d"
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
	subq	$112, %rsp
	movq	$0, -64(%rbp)
	movq	$0, -56(%rbp)
	movq	$0, -48(%rbp)
	movq	$0, -40(%rbp)
	movq	$0, -32(%rbp)
	movq	$0, -112(%rbp)
	movq	$0, -104(%rbp)
	movq	$0, -96(%rbp)
	movq	$0, -88(%rbp)
	movq	$0, -80(%rbp)
	movl	$2, -112(%rbp)
	movl	$0, -20(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L2
.L5:
	movl	$0, %edi
	call	time
	movl	%eax, %edi
	call	srand
	movl	$0, -8(%rbp)
	jmp	.L3
.L4:
	call	rand
	movl	%eax, %edx
	movslq	%edx, %rax
	imulq	$1717986919, %rax, %rax
	shrq	$32, %rax
	sarl	$2, %eax
	movl	%edx, %esi
	sarl	$31, %esi
	subl	%esi, %eax
	movl	%eax, %ecx
	movl	%ecx, %eax
	sall	$2, %eax
	addl	%ecx, %eax
	addl	%eax, %eax
	movl	%edx, %ecx
	subl	%eax, %ecx
	leal	1(%rcx), %eax
	movl	%eax, -20(%rbp)
	movl	-20(%rbp), %eax
	subl	$1, %eax
	cltq
	movl	-64(%rbp,%rax,4), %eax
	movl	-20(%rbp), %edx
	leal	-1(%rdx), %ecx
	leal	1(%rax), %edx
	movslq	%ecx, %rax
	movl	%edx, -64(%rbp,%rax,4)
	movl	-4(%rbp), %eax
	cltq
	movl	-64(%rbp,%rax,4), %eax
	movl	%eax, %edi
	call	rand1
	movl	%eax, %edx
	movslq	%edx, %rax
	imulq	$1717986919, %rax, %rax
	shrq	$32, %rax
	sarl	$2, %eax
	movl	%edx, %esi
	sarl	$31, %esi
	subl	%esi, %eax
	movl	%eax, %ecx
	movl	%ecx, %eax
	sall	$2, %eax
	addl	%ecx, %eax
	addl	%eax, %eax
	subl	%eax, %edx
	movl	%edx, %ecx
	leal	1(%rcx), %eax
	movl	%eax, -20(%rbp)
	movl	-20(%rbp), %eax
	subl	$1, %eax
	cltq
	movl	-112(%rbp,%rax,4), %eax
	movl	-20(%rbp), %edx
	leal	-1(%rdx), %ecx
	leal	1(%rax), %edx
	movslq	%ecx, %rax
	movl	%edx, -112(%rbp,%rax,4)
	addl	$1, -8(%rbp)
.L3:
	cmpl	$99, -8(%rbp)
	jle	.L4
	movl	$1, %edi
	call	sleep
	addl	$1, -4(%rbp)
.L2:
	cmpl	$9, -4(%rbp)
	jle	.L5
	movl	$0, -12(%rbp)
	jmp	.L6
.L7:
	movl	-12(%rbp), %eax
	cltq
	movl	-64(%rbp,%rax,4), %eax
	movl	%eax, %esi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	addl	$1, -12(%rbp)
.L6:
	cmpl	$9, -12(%rbp)
	jle	.L7
	movl	$10, %edi
	call	putchar
	movl	$0, -16(%rbp)
	jmp	.L8
.L9:
	movl	-16(%rbp), %eax
	cltq
	movl	-112(%rbp,%rax,4), %eax
	movl	%eax, %esi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	addl	$1, -16(%rbp)
.L8:
	cmpl	$9, -16(%rbp)
	jle	.L9
	movl	$10, %edi
	call	putchar
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.globl	rand1
	.type	rand1, @function
rand1:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -20(%rbp)
	movl	-20(%rbp), %eax
	cltq
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	imulq	$1103515245, %rax, %rax
	addq	$12345, %rax
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	shrq	$16, %rax
	andl	$32767, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	rand1, .-rand1
	.ident	"GCC: (SUSE Linux) 10.3.0"
	.section	.note.GNU-stack,"",@progbits
