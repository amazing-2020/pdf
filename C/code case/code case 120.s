	.text
	.file	"code case 120.c"
	.section	.rodata.cst8,"aM",@progbits,8
	.p2align	3               # -- Begin function power
.LCPI0_0:
	.quad	4607182418800017408     # double 1
	.text
	.globl	power
	.p2align	4, 0x90
	.type	power,@function
power:                                  # @power
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movsd	%xmm0, -16(%rbp)
	movsd	%xmm1, -24(%rbp)
	movsd	-24(%rbp), %xmm0        # xmm0 = mem[0],zero
	xorps	%xmm1, %xmm1
	ucomisd	%xmm1, %xmm0
	jne	.LBB0_2
	jp	.LBB0_2
# %bb.1:
	movsd	.LCPI0_0(%rip), %xmm0   # xmm0 = mem[0],zero
	movsd	%xmm0, -8(%rbp)
	jmp	.LBB0_5
.LBB0_2:
	movsd	.LCPI0_0(%rip), %xmm0   # xmm0 = mem[0],zero
	movsd	-24(%rbp), %xmm1        # xmm1 = mem[0],zero
	ucomisd	%xmm0, %xmm1
	jne	.LBB0_4
	jp	.LBB0_4
# %bb.3:
	movsd	-16(%rbp), %xmm0        # xmm0 = mem[0],zero
	movsd	%xmm0, -8(%rbp)
	jmp	.LBB0_5
.LBB0_4:
	movsd	.LCPI0_0(%rip), %xmm0   # xmm0 = mem[0],zero
	movsd	-16(%rbp), %xmm1        # xmm1 = mem[0],zero
	movsd	-16(%rbp), %xmm2        # xmm2 = mem[0],zero
	movsd	-24(%rbp), %xmm3        # xmm3 = mem[0],zero
	subsd	%xmm0, %xmm3
	movaps	%xmm2, %xmm0
	movsd	%xmm1, -32(%rbp)        # 8-byte Spill
	movaps	%xmm3, %xmm1
	callq	power
	movsd	-32(%rbp), %xmm1        # 8-byte Reload
                                        # xmm1 = mem[0],zero
	mulsd	%xmm0, %xmm1
	movsd	%xmm1, -8(%rbp)
.LBB0_5:
	movsd	-8(%rbp), %xmm0         # xmm0 = mem[0],zero
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end0:
	.size	power, .Lfunc_end0-power
	.cfi_endproc
                                        # -- End function
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
	subq	$48, %rsp
	movl	$0, -4(%rbp)
	movabsq	$.L.str, %rdi
	movb	$0, %al
	callq	printf
	movabsq	$.L.str.1, %rdi
	leaq	-24(%rbp), %rsi
	leaq	-16(%rbp), %rdx
	movl	%eax, -28(%rbp)         # 4-byte Spill
	movb	$0, %al
	callq	__isoc99_scanf
	movsd	-24(%rbp), %xmm0        # xmm0 = mem[0],zero
	movsd	-16(%rbp), %xmm1        # xmm1 = mem[0],zero
	movl	%eax, -32(%rbp)         # 4-byte Spill
	callq	power
	movabsq	$.L.str.2, %rdi
	movb	$1, %al
	callq	printf
	xorl	%ecx, %ecx
	movl	%eax, -36(%rbp)         # 4-byte Spill
	movl	%ecx, %eax
	addq	$48, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end1:
	.size	main, .Lfunc_end1-main
	.cfi_endproc
                                        # -- End function
	.type	.L.str,@object          # @.str
	.section	.rodata.str1.1,"aMS",@progbits,1
.L.str:
	.asciz	"Please enter the k-th square of n to print. \n"
	.size	.L.str, 46

	.type	.L.str.1,@object        # @.str.1
.L.str.1:
	.asciz	"%lf %lf"
	.size	.L.str.1, 8

	.type	.L.str.2,@object        # @.str.2
.L.str.2:
	.asciz	"%lf \n"
	.size	.L.str.2, 6


	.ident	"clang version 9.0.1 "
	.section	".note.GNU-stack","",@progbits
	.addrsig
	.addrsig_sym power
	.addrsig_sym printf
	.addrsig_sym __isoc99_scanf
