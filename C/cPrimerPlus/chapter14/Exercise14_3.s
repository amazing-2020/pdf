	.file	"Exercise14_3.c"
	.text
	.section	.rodata
.LC0:
	.string	"Please enter the book title."
	.align 8
.LC1:
	.string	"Press the [Enter] at the start of a line to stop."
.LC2:
	.string	"Now Enter the author."
.LC3:
	.string	"Now enter the value."
.LC4:
	.string	"%f"
.LC5:
	.string	"Enter the next title."
.LC6:
	.string	"%d\n"
	.align 8
.LC7:
	.string	"Here is the list of your books:"
	.align 8
.LC8:
	.string	"Here is the sorted(Value) data: "
	.align 8
.LC9:
	.string	"Here is the sorted(Name) data: "
.LC10:
	.string	"No books? Too bad."
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
	subq	$9216, %rsp
	movl	$0, -4(%rbp)
	movl	$.LC0, %edi
	call	puts
	movl	$.LC1, %edi
	call	puts
	jmp	.L2
.L7:
	movl	$.LC2, %edi
	call	puts
	leaq	-7616(%rbp), %rcx
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	addq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	addq	$32, %rax
	addq	%rcx, %rax
	addq	$9, %rax
	movl	$31, %esi
	movq	%rax, %rdi
	call	s_gets
	movl	$.LC3, %edi
	call	puts
	leaq	-7616(%rbp), %rcx
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	addq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	addq	$64, %rax
	addq	%rcx, %rax
	addq	$8, %rax
	movq	%rax, %rsi
	movl	$.LC4, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	jmp	.L3
.L4:
	nop
.L3:
	call	getchar
	cmpl	$10, %eax
	jne	.L4
	leaq	-7616(%rbp), %rcx
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	addq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	leaq	(%rcx,%rax), %rdx
	movl	-4(%rbp), %eax
	cltq
	movq	%rdx, -8416(%rbp,%rax,8)
	leaq	-7616(%rbp), %rcx
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	addq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	leaq	(%rcx,%rax), %rdx
	movl	-4(%rbp), %eax
	cltq
	movq	%rdx, -9216(%rbp,%rax,8)
	cmpl	$99, -4(%rbp)
	jg	.L5
	movl	$.LC5, %edi
	call	puts
.L5:
	addl	$1, -4(%rbp)
.L2:
	cmpl	$99, -4(%rbp)
	jg	.L6
	leaq	-7616(%rbp), %rcx
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	addq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rcx, %rax
	movl	$41, %esi
	movq	%rax, %rdi
	call	s_gets
	testq	%rax, %rax
	je	.L6
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	addq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rbp, %rax
	subq	$7616, %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	jne	.L7
.L6:
	movl	-4(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC6, %edi
	movl	$0, %eax
	call	printf
	cmpl	$0, -4(%rbp)
	jle	.L8
	movl	$.LC7, %edi
	call	puts
	leaq	-7616(%rbp), %rdx
	movl	-4(%rbp), %eax
	movq	%rdx, %rsi
	movl	%eax, %edi
	call	output
	movl	$.LC8, %edi
	call	puts
	movl	-4(%rbp), %edx
	leaq	-8416(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	sortByValue
	leaq	-8416(%rbp), %rdx
	movl	-4(%rbp), %eax
	movq	%rdx, %rsi
	movl	%eax, %edi
	call	output_PT
	movl	$.LC9, %edi
	call	puts
	movl	-4(%rbp), %edx
	leaq	-9216(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	sortByName
	leaq	-9216(%rbp), %rdx
	movl	-4(%rbp), %eax
	movq	%rdx, %rsi
	movl	%eax, %edi
	call	output_PT
	jmp	.L9
.L8:
	movl	$.LC10, %edi
	call	puts
.L9:
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.globl	sortByValue
	.type	sortByValue, @function
sortByValue:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movl	-12(%rbp), %eax
	leal	-1(%rax), %edx
	movq	-8(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	quick_sort
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	sortByValue, .-sortByValue
	.globl	quick_sort
	.type	quick_sort, @function
quick_sort:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -40(%rbp)
	movl	%esi, -44(%rbp)
	movl	%edx, -48(%rbp)
	movq	$0, -16(%rbp)
	movl	-44(%rbp), %eax
	cmpl	-48(%rbp), %eax
	jg	.L27
	movl	-44(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	movq	-40(%rbp), %rax
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	%rax, -16(%rbp)
	movl	-44(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	-48(%rbp), %eax
	movl	%eax, -8(%rbp)
	jmp	.L15
.L19:
	subl	$1, -8(%rbp)
.L16:
	movl	-8(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	movq	-40(%rbp), %rax
	addq	%rdx, %rax
	movq	(%rax), %rax
	movss	72(%rax), %xmm0
	movq	-16(%rbp), %rax
	movss	72(%rax), %xmm1
	comiss	%xmm1, %xmm0
	jb	.L17
	movl	-8(%rbp), %eax
	cmpl	-4(%rbp), %eax
	jg	.L19
.L17:
	jmp	.L20
.L23:
	addl	$1, -4(%rbp)
.L20:
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	movq	-40(%rbp), %rax
	addq	%rdx, %rax
	movq	(%rax), %rax
	movss	72(%rax), %xmm1
	movq	-16(%rbp), %rax
	movss	72(%rax), %xmm0
	comiss	%xmm1, %xmm0
	jb	.L21
	movl	-8(%rbp), %eax
	cmpl	-4(%rbp), %eax
	jg	.L23
.L21:
	movl	-8(%rbp), %eax
	cmpl	-4(%rbp), %eax
	jle	.L15
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	movq	-40(%rbp), %rax
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	%rax, -24(%rbp)
	movl	-8(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	movq	-40(%rbp), %rax
	addq	%rdx, %rax
	movl	-4(%rbp), %edx
	movslq	%edx, %rdx
	leaq	0(,%rdx,8), %rcx
	movq	-40(%rbp), %rdx
	addq	%rcx, %rdx
	movq	(%rax), %rax
	movq	%rax, (%rdx)
	movl	-8(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	movq	-40(%rbp), %rax
	addq	%rax, %rdx
	movq	-24(%rbp), %rax
	movq	%rax, (%rdx)
.L15:
	movl	-4(%rbp), %eax
	cmpl	-8(%rbp), %eax
	jne	.L16
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	movq	-40(%rbp), %rax
	addq	%rdx, %rax
	movl	-44(%rbp), %edx
	movslq	%edx, %rdx
	leaq	0(,%rdx,8), %rcx
	movq	-40(%rbp), %rdx
	addq	%rcx, %rdx
	movq	(%rax), %rax
	movq	%rax, (%rdx)
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	movq	-40(%rbp), %rax
	addq	%rax, %rdx
	movq	-16(%rbp), %rax
	movq	%rax, (%rdx)
	movl	-4(%rbp), %eax
	leal	-1(%rax), %edx
	movl	-44(%rbp), %ecx
	movq	-40(%rbp), %rax
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	quick_sort
	movl	-4(%rbp), %eax
	leal	1(%rax), %ecx
	movl	-48(%rbp), %edx
	movq	-40(%rbp), %rax
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	quick_sort
	jmp	.L12
.L27:
	nop
.L12:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	quick_sort, .-quick_sort
	.globl	sortByName
	.type	sortByName, @function
sortByName:
.LFB3:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L29
.L33:
	movl	$0, -8(%rbp)
	jmp	.L30
.L32:
	movl	-8(%rbp), %eax
	cltq
	addq	$1, %rax
	leaq	0(,%rax,8), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	%rax, %rdx
	movl	-8(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rcx
	movq	-24(%rbp), %rax
	addq	%rcx, %rax
	movq	(%rax), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	strcmp
	testl	%eax, %eax
	jle	.L31
	movl	-8(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	%rax, -16(%rbp)
	movl	-8(%rbp), %eax
	cltq
	addq	$1, %rax
	leaq	0(,%rax,8), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movl	-8(%rbp), %edx
	movslq	%edx, %rdx
	leaq	0(,%rdx,8), %rcx
	movq	-24(%rbp), %rdx
	addq	%rcx, %rdx
	movq	(%rax), %rax
	movq	%rax, (%rdx)
	movl	-8(%rbp), %eax
	cltq
	addq	$1, %rax
	leaq	0(,%rax,8), %rdx
	movq	-24(%rbp), %rax
	addq	%rax, %rdx
	movq	-16(%rbp), %rax
	movq	%rax, (%rdx)
.L31:
	addl	$1, -8(%rbp)
.L30:
	movl	-28(%rbp), %eax
	subl	-4(%rbp), %eax
	subl	$1, %eax
	cmpl	%eax, -8(%rbp)
	jl	.L32
	addl	$1, -4(%rbp)
.L29:
	movl	-28(%rbp), %eax
	subl	$1, %eax
	cmpl	%eax, -4(%rbp)
	jl	.L33
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	sortByName, .-sortByName
	.section	.rodata
.LC11:
	.string	"%s by %s: $%.2f\n"
	.text
	.globl	output
	.type	output, @function
output:
.LFB4:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	%edi, -20(%rbp)
	movq	%rsi, -32(%rbp)
	movl	$0, -4(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L35
.L36:
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	addq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	movq	%rax, %rdx
	movq	-32(%rbp), %rax
	addq	%rdx, %rax
	movss	72(%rax), %xmm0
	pxor	%xmm1, %xmm1
	cvtss2sd	%xmm0, %xmm1
	movq	%xmm1, %rcx
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	addq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	movq	%rax, %rdx
	movq	-32(%rbp), %rax
	addq	%rdx, %rax
	leaq	41(%rax), %rsi
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	addq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	movq	%rax, %rdx
	movq	-32(%rbp), %rax
	addq	%rdx, %rax
	movq	%rcx, %xmm0
	movq	%rsi, %rdx
	movq	%rax, %rsi
	movl	$.LC11, %edi
	movl	$1, %eax
	call	printf
	addl	$1, -4(%rbp)
.L35:
	movl	-4(%rbp), %eax
	cmpl	-20(%rbp), %eax
	jl	.L36
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE4:
	.size	output, .-output
	.globl	output_PT
	.type	output_PT, @function
output_PT:
.LFB5:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	%edi, -20(%rbp)
	movq	%rsi, -32(%rbp)
	movl	$0, -4(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L38
.L39:
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	movq	-32(%rbp), %rax
	addq	%rdx, %rax
	movq	(%rax), %rax
	movss	72(%rax), %xmm0
	pxor	%xmm1, %xmm1
	cvtss2sd	%xmm0, %xmm1
	movq	%xmm1, %rax
	movl	-4(%rbp), %edx
	movslq	%edx, %rdx
	leaq	0(,%rdx,8), %rcx
	movq	-32(%rbp), %rdx
	addq	%rcx, %rdx
	movq	(%rdx), %rdx
	addq	$41, %rdx
	movl	-4(%rbp), %ecx
	movslq	%ecx, %rcx
	leaq	0(,%rcx,8), %rsi
	movq	-32(%rbp), %rcx
	addq	%rsi, %rcx
	movq	(%rcx), %rcx
	movq	%rax, %xmm0
	movq	%rcx, %rsi
	movl	$.LC11, %edi
	movl	$1, %eax
	call	printf
	addl	$1, -4(%rbp)
.L38:
	movl	-4(%rbp), %eax
	cmpl	-20(%rbp), %eax
	jl	.L39
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE5:
	.size	output_PT, .-output_PT
	.globl	s_gets
	.type	s_gets, @function
s_gets:
.LFB6:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	movq	stdin(%rip), %rdx
	movl	-28(%rbp), %ecx
	movq	-24(%rbp), %rax
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	fgets
	movq	%rax, -8(%rbp)
	cmpq	$0, -8(%rbp)
	je	.L41
	movq	-24(%rbp), %rax
	movl	$10, %esi
	movq	%rax, %rdi
	call	strchr
	movq	%rax, -16(%rbp)
	cmpq	$0, -16(%rbp)
	je	.L43
	movq	-16(%rbp), %rax
	movb	$0, (%rax)
	jmp	.L41
.L44:
	nop
.L43:
	call	getchar
	cmpl	$10, %eax
	jne	.L44
.L41:
	movq	-8(%rbp), %rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	s_gets, .-s_gets
	.ident	"GCC: (SUSE Linux) 10.3.0"
	.section	.note.GNU-stack,"",@progbits
