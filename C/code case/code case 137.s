	.text
	.file	"code case 137.c"
	.globl	main                    # -- Begin function main
	.p2align	4, 0x90
	.type	main,@function
main:                                   # @main
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movl	$0, -4(%rbp)
	movq	-16(%rbp), %rax
	movl	(%rax), %esi
	movabsq	$.L.str, %rdi
	movb	$0, %al
	callq	printf
	movq	-16(%rbp), %rcx
	movl	$10, (%rcx)
	movq	-16(%rbp), %rcx
	movl	(%rcx), %esi
	movabsq	$.L.str, %rdi
	movl	%eax, -20(%rbp)         # 4-byte Spill
	movb	$0, %al
	callq	printf
	xorl	%edx, %edx
	movl	%eax, -24(%rbp)         # 4-byte Spill
	movl	%edx, %eax
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end0:
	.size	main, .Lfunc_end0-main
	.cfi_endproc
                                        # -- End function
	.type	.L.str,@object          # @.str
	.section	.rodata.str1.1,"aMS",@progbits,1
.L.str:
	.asciz	"%d \n"
	.size	.L.str, 5


	.ident	"clang version 9.0.1 "
	.section	".note.GNU-stack","",@progbits
	.addrsig
	.addrsig_sym printf
