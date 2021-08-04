	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 10, 15	sdk_version 10, 15, 6
	.globl	_newNode                ## -- Begin function newNode
	.p2align	4, 0x90
_newNode:                               ## @newNode
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	$24, %edi
	callq	_malloc
	movq	%rax, -16(%rbp)
	movl	-4(%rbp), %ecx
	movq	-16(%rbp), %rax
	movl	%ecx, (%rax)
	movq	-16(%rbp), %rax
	movq	$0, 16(%rax)
	movq	-16(%rbp), %rax
	movq	$0, 8(%rax)
	movq	-16(%rbp), %rax
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	_buildTree              ## -- Begin function buildTree
	.p2align	4, 0x90
_buildTree:                             ## @buildTree
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$592, %rsp              ## imm = 0x250
	movq	___stack_chk_guard@GOTPCREL(%rip), %rax
	movq	(%rax), %rax
	movq	%rax, -8(%rbp)
	movl	$43, %edi
	callq	_newNode
	movq	%rax, -472(%rbp)
	movl	$43, %edi
	callq	_newNode
	movq	-472(%rbp), %rcx
	movq	%rax, 16(%rcx)
	movl	$43, %edi
	callq	_newNode
	movq	-472(%rbp), %rcx
	movq	%rax, 8(%rcx)
	movl	$43, %edi
	callq	_newNode
	movq	-472(%rbp), %rcx
	movq	16(%rcx), %rcx
	movq	%rax, 16(%rcx)
	movl	$43, %edi
	callq	_newNode
	movq	-472(%rbp), %rcx
	movq	16(%rcx), %rcx
	movq	%rax, 8(%rcx)
	movl	$43, %edi
	callq	_newNode
	movq	-472(%rbp), %rcx
	movq	8(%rcx), %rcx
	movq	%rax, 16(%rcx)
	movl	$43, %edi
	callq	_newNode
	leaq	l___const.buildTree.input4(%rip), %rcx
	leaq	l___const.buildTree.input3(%rip), %rdx
	leaq	l___const.buildTree.input2(%rip), %rsi
	leaq	l___const.buildTree.input1(%rip), %r8
	movq	-472(%rbp), %r9
	movq	8(%r9), %r9
	movq	%rax, 8(%r9)
	leaq	-128(%rbp), %rax
	movq	%rax, %rdi
	movq	%rsi, -552(%rbp)        ## 8-byte Spill
	movq	%r8, %rsi
	movl	$108, %eax
	movq	%rdx, -560(%rbp)        ## 8-byte Spill
	movq	%rax, %rdx
	movq	%rcx, -568(%rbp)        ## 8-byte Spill
	movq	%rax, -576(%rbp)        ## 8-byte Spill
	callq	_memcpy
	leaq	-240(%rbp), %rax
	movq	%rax, %rdi
	movq	-552(%rbp), %rsi        ## 8-byte Reload
	movq	-576(%rbp), %rdx        ## 8-byte Reload
	callq	_memcpy
	leaq	-352(%rbp), %rax
	movq	%rax, %rdi
	movq	-560(%rbp), %rsi        ## 8-byte Reload
	movq	-576(%rbp), %rdx        ## 8-byte Reload
	callq	_memcpy
	leaq	-464(%rbp), %rax
	movq	%rax, %rdi
	movq	-568(%rbp), %rsi        ## 8-byte Reload
	movq	-576(%rbp), %rdx        ## 8-byte Reload
	callq	_memcpy
	movq	-472(%rbp), %rax
	movq	16(%rax), %rax
	movq	16(%rax), %rax
	movq	%rax, -480(%rbp)
	movq	-472(%rbp), %rax
	movq	16(%rax), %rax
	movq	8(%rax), %rax
	movq	%rax, -488(%rbp)
	movq	-472(%rbp), %rax
	movq	8(%rax), %rax
	movq	16(%rax), %rax
	movq	%rax, -496(%rbp)
	movq	-472(%rbp), %rax
	movq	8(%rax), %rax
	movq	8(%rax), %rax
	movq	%rax, -504(%rbp)
	movq	-480(%rbp), %rax
	movq	%rax, -512(%rbp)
	movq	-488(%rbp), %rax
	movq	%rax, -520(%rbp)
	movq	-496(%rbp), %rax
	movq	%rax, -528(%rbp)
	movq	-504(%rbp), %rax
	movq	%rax, -536(%rbp)
	movl	$0, -540(%rbp)
LBB1_1:                                 ## =>This Inner Loop Header: Depth=1
	leaq	-128(%rbp), %rdi
	movslq	-540(%rbp), %rax
	movq	%rax, -584(%rbp)        ## 8-byte Spill
	callq	_wcslen
	movq	-584(%rbp), %rcx        ## 8-byte Reload
	cmpq	%rax, %rcx
	jae	LBB1_4
## %bb.2:                               ##   in Loop: Header=BB1_1 Depth=1
	movslq	-540(%rbp), %rax
	movl	-128(%rbp,%rax,4), %edi
	callq	_newNode
	movq	-512(%rbp), %rcx
	movq	%rax, 16(%rcx)
	movl	$43, %edi
	callq	_newNode
	movq	-512(%rbp), %rcx
	movq	%rax, 8(%rcx)
	movq	-512(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, -512(%rbp)
	movslq	-540(%rbp), %rax
	movl	-240(%rbp,%rax,4), %edi
	callq	_newNode
	movq	-520(%rbp), %rcx
	movq	%rax, 16(%rcx)
	movl	$43, %edi
	callq	_newNode
	movq	-520(%rbp), %rcx
	movq	%rax, 8(%rcx)
	movq	-520(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, -520(%rbp)
	movslq	-540(%rbp), %rax
	movl	-352(%rbp,%rax,4), %edi
	callq	_newNode
	movq	-528(%rbp), %rcx
	movq	%rax, 16(%rcx)
	movl	$43, %edi
	callq	_newNode
	movq	-528(%rbp), %rcx
	movq	%rax, 8(%rcx)
	movq	-528(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, -528(%rbp)
	movslq	-540(%rbp), %rax
	movl	-464(%rbp,%rax,4), %edi
	callq	_newNode
	movq	-536(%rbp), %rcx
	movq	%rax, 16(%rcx)
	movl	$43, %edi
	callq	_newNode
	movq	-536(%rbp), %rcx
	movq	%rax, 8(%rcx)
	movq	-536(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, -536(%rbp)
## %bb.3:                               ##   in Loop: Header=BB1_1 Depth=1
	movl	-540(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -540(%rbp)
	jmp	LBB1_1
LBB1_4:
	movq	-472(%rbp), %rax
	movq	___stack_chk_guard@GOTPCREL(%rip), %rcx
	movq	(%rcx), %rcx
	movq	-8(%rbp), %rdx
	cmpq	%rdx, %rcx
	movq	%rax, -592(%rbp)        ## 8-byte Spill
	jne	LBB1_6
## %bb.5:
	movq	-592(%rbp), %rax        ## 8-byte Reload
	addq	$592, %rsp              ## imm = 0x250
	popq	%rbp
	retq
LBB1_6:
	callq	___stack_chk_fail
	ud2
	.cfi_endproc
                                        ## -- End function
	.globl	_main                   ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movl	$5936, %eax             ## imm = 0x1730
	callq	____chkstk_darwin
	subq	%rax, %rsp
	xorl	%eax, %eax
	movq	___stack_chk_guard@GOTPCREL(%rip), %rcx
	movq	(%rcx), %rcx
	movq	%rcx, -8(%rbp)
	movl	$0, -5828(%rbp)
	movl	%edi, -5832(%rbp)
	movq	%rsi, -5840(%rbp)
	movl	%eax, %edi
	leaq	L_.str.100(%rip), %rsi
	callq	_setlocale
	movq	%rax, -5896(%rbp)       ## 8-byte Spill
	callq	_buildTree
	xorl	%esi, %esi
	leaq	l___const.main.input(%rip), %rcx
	movq	%rax, -5848(%rbp)
	movq	$100, -5856(%rbp)
	leaq	-416(%rbp), %rax
	movq	%rax, %rdi
	movl	%esi, -5900(%rbp)       ## 4-byte Spill
	movq	%rcx, %rsi
	movl	$408, %edx              ## imm = 0x198
	callq	_memcpy
	leaq	-5424(%rbp), %rax
	movq	%rax, %rdi
	movl	-5900(%rbp), %esi       ## 4-byte Reload
	movl	$5000, %edx             ## imm = 0x1388
	callq	_memset
	movl	$0, -5860(%rbp)
LBB2_1:                                 ## =>This Loop Header: Depth=1
                                        ##     Child Loop BB2_3 Depth 2
	leaq	-416(%rbp), %rdi
	movslq	-5860(%rbp), %rax
	movq	%rax, -5912(%rbp)       ## 8-byte Spill
	callq	_wcslen
	movq	-5912(%rbp), %rcx       ## 8-byte Reload
	cmpq	%rax, %rcx
	jae	LBB2_10
## %bb.2:                               ##   in Loop: Header=BB2_1 Depth=1
	movl	$0, -5864(%rbp)
LBB2_3:                                 ##   Parent Loop BB2_1 Depth=1
                                        ## =>  This Inner Loop Header: Depth=2
	movslq	-5864(%rbp), %rax
	cmpq	-5856(%rbp), %rax
	jae	LBB2_8
## %bb.4:                               ##   in Loop: Header=BB2_3 Depth=2
	movslq	-5860(%rbp), %rax
	movl	-416(%rbp,%rax,4), %ecx
	movslq	-5864(%rbp), %rax
	shlq	$4, %rax
	leaq	_map_array(%rip), %rdx
	addq	%rax, %rdx
	cmpl	(%rdx), %ecx
	jne	LBB2_6
## %bb.5:                               ##   in Loop: Header=BB2_3 Depth=2
	leaq	-5424(%rbp), %rdi
	movslq	-5864(%rbp), %rax
	shlq	$4, %rax
	leaq	_map_array(%rip), %rcx
	addq	%rax, %rcx
	movq	8(%rcx), %rsi
	movl	$5000, %edx             ## imm = 0x1388
	callq	___strcat_chk
LBB2_6:                                 ##   in Loop: Header=BB2_3 Depth=2
	jmp	LBB2_7
LBB2_7:                                 ##   in Loop: Header=BB2_3 Depth=2
	movl	-5864(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -5864(%rbp)
	jmp	LBB2_3
LBB2_8:                                 ##   in Loop: Header=BB2_1 Depth=1
	jmp	LBB2_9
LBB2_9:                                 ##   in Loop: Header=BB2_1 Depth=1
	movl	-5860(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -5860(%rbp)
	jmp	LBB2_1
LBB2_10:
	leaq	-5424(%rbp), %rsi
	leaq	L_.str.101(%rip), %rdi
	movb	$0, %al
	callq	_printf
	leaq	-5424(%rbp), %rdi
	xorl	%esi, %esi
	leaq	-5824(%rbp), %rcx
	movq	%rdi, -5920(%rbp)       ## 8-byte Spill
	movq	%rcx, %rdi
	movl	$400, %edx              ## imm = 0x190
	movl	%eax, -5924(%rbp)       ## 4-byte Spill
	callq	_memset
	movq	-5848(%rbp), %rcx
	movq	%rcx, -5872(%rbp)
	movq	-5920(%rbp), %rdi       ## 8-byte Reload
	callq	_strlen
	movq	%rax, -5880(%rbp)
	movl	$0, -5884(%rbp)
LBB2_11:                                ## =>This Inner Loop Header: Depth=1
	movslq	-5884(%rbp), %rax
	cmpq	-5880(%rbp), %rax
	jae	LBB2_20
## %bb.12:                              ##   in Loop: Header=BB2_11 Depth=1
	movslq	-5884(%rbp), %rax
	movsbl	-5424(%rbp,%rax), %ecx
	cmpl	$48, %ecx
	jne	LBB2_14
## %bb.13:                              ##   in Loop: Header=BB2_11 Depth=1
	movq	-5872(%rbp), %rax
	movq	16(%rax), %rax
	movq	%rax, -5872(%rbp)
	jmp	LBB2_15
LBB2_14:                                ##   in Loop: Header=BB2_11 Depth=1
	movq	-5872(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, -5872(%rbp)
LBB2_15:                                ##   in Loop: Header=BB2_11 Depth=1
	movq	-5872(%rbp), %rax
	cmpq	$0, 16(%rax)
	jne	LBB2_18
## %bb.16:                              ##   in Loop: Header=BB2_11 Depth=1
	movq	-5872(%rbp), %rax
	cmpq	$0, 8(%rax)
	jne	LBB2_18
## %bb.17:                              ##   in Loop: Header=BB2_11 Depth=1
	leaq	-5824(%rbp), %rdi
	movq	-5872(%rbp), %rsi
	callq	_wcscat
	movq	-5848(%rbp), %rcx
	movq	%rcx, -5872(%rbp)
LBB2_18:                                ##   in Loop: Header=BB2_11 Depth=1
	jmp	LBB2_19
LBB2_19:                                ##   in Loop: Header=BB2_11 Depth=1
	movl	-5884(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -5884(%rbp)
	jmp	LBB2_11
LBB2_20:
	leaq	-5824(%rbp), %rdi
	movb	$0, %al
	callq	_wprintf
	leaq	L_.str.102(%rip), %rdi
	movl	%eax, -5928(%rbp)       ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	movq	___stack_chk_guard@GOTPCREL(%rip), %rcx
	movq	(%rcx), %rcx
	movq	-8(%rbp), %rdx
	cmpq	%rdx, %rcx
	jne	LBB2_22
## %bb.21:
	xorl	%eax, %eax
	addq	$5936, %rsp             ## imm = 0x1730
	popq	%rbp
	retq
LBB2_22:
	callq	___stack_chk_fail
	ud2
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__const
	.p2align	4               ## @__const.buildTree.input1
l___const.buildTree.input1:
	.long	97                      ## 0x61
	.long	99                      ## 0x63
	.long	101                     ## 0x65
	.long	103                     ## 0x67
	.long	105                     ## 0x69
	.long	107                     ## 0x6b
	.long	109                     ## 0x6d
	.long	111                     ## 0x6f
	.long	113                     ## 0x71
	.long	115                     ## 0x73
	.long	117                     ## 0x75
	.long	119                     ## 0x77
	.long	121                     ## 0x79
	.long	48                      ## 0x30
	.long	52                      ## 0x34
	.long	56                      ## 0x38
	.long	35                      ## 0x23
	.long	38                      ## 0x26
	.long	45                      ## 0x2d
	.long	125                     ## 0x7d
	.long	60                      ## 0x3c
	.long	945                     ## 0x3b1
	.long	949                     ## 0x3b5
	.long	958                     ## 0x3be
	.long	961                     ## 0x3c1
	.long	10                      ## 0xa
	.long	0                       ## 0x0

	.p2align	4               ## @__const.buildTree.input2
l___const.buildTree.input2:
	.long	65                      ## 0x41
	.long	67                      ## 0x43
	.long	69                      ## 0x45
	.long	71                      ## 0x47
	.long	73                      ## 0x49
	.long	75                      ## 0x4b
	.long	77                      ## 0x4d
	.long	79                      ## 0x4f
	.long	81                      ## 0x51
	.long	83                      ## 0x53
	.long	85                      ## 0x55
	.long	87                      ## 0x57
	.long	89                      ## 0x59
	.long	49                      ## 0x31
	.long	53                      ## 0x35
	.long	57                      ## 0x39
	.long	36                      ## 0x24
	.long	42                      ## 0x2a
	.long	91                      ## 0x5b
	.long	124                     ## 0x7c
	.long	62                      ## 0x3e
	.long	946                     ## 0x3b2
	.long	966                     ## 0x3c6
	.long	955                     ## 0x3bb
	.long	963                     ## 0x3c3
	.long	10                      ## 0xa
	.long	0                       ## 0x0

	.p2align	4               ## @__const.buildTree.input3
l___const.buildTree.input3:
	.long	98                      ## 0x62
	.long	100                     ## 0x64
	.long	102                     ## 0x66
	.long	104                     ## 0x68
	.long	106                     ## 0x6a
	.long	108                     ## 0x6c
	.long	110                     ## 0x6e
	.long	112                     ## 0x70
	.long	114                     ## 0x72
	.long	116                     ## 0x74
	.long	118                     ## 0x76
	.long	120                     ## 0x78
	.long	122                     ## 0x7a
	.long	50                      ## 0x32
	.long	54                      ## 0x36
	.long	33                      ## 0x21
	.long	126                     ## 0x7e
	.long	40                      ## 0x28
	.long	93                      ## 0x5d
	.long	44                      ## 0x2c
	.long	47                      ## 0x2f
	.long	968                     ## 0x3c8
	.long	947                     ## 0x3b3
	.long	956                     ## 0x3bc
	.long	952                     ## 0x3b8
	.long	10                      ## 0xa
	.long	0                       ## 0x0

	.p2align	4               ## @__const.buildTree.input4
l___const.buildTree.input4:
	.long	66                      ## 0x42
	.long	68                      ## 0x44
	.long	70                      ## 0x46
	.long	72                      ## 0x48
	.long	74                      ## 0x4a
	.long	76                      ## 0x4c
	.long	78                      ## 0x4e
	.long	80                      ## 0x50
	.long	82                      ## 0x52
	.long	84                      ## 0x54
	.long	86                      ## 0x56
	.long	88                      ## 0x58
	.long	90                      ## 0x5a
	.long	51                      ## 0x33
	.long	55                      ## 0x37
	.long	64                      ## 0x40
	.long	94                      ## 0x5e
	.long	41                      ## 0x29
	.long	123                     ## 0x7b
	.long	46                      ## 0x2e
	.long	63                      ## 0x3f
	.long	948                     ## 0x3b4
	.long	951                     ## 0x3b7
	.long	960                     ## 0x3c0
	.long	969                     ## 0x3c9
	.long	10                      ## 0xa
	.long	0                       ## 0x0

	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"000"

L_.str.1:                               ## @.str.1
	.asciz	"010"

L_.str.2:                               ## @.str.2
	.asciz	"100"

L_.str.3:                               ## @.str.3
	.asciz	"110"

L_.str.4:                               ## @.str.4
	.asciz	"0010"

L_.str.5:                               ## @.str.5
	.asciz	"0110"

L_.str.6:                               ## @.str.6
	.asciz	"1010"

L_.str.7:                               ## @.str.7
	.asciz	"1110"

L_.str.8:                               ## @.str.8
	.asciz	"00110"

L_.str.9:                               ## @.str.9
	.asciz	"01110"

L_.str.10:                              ## @.str.10
	.asciz	"10110"

L_.str.11:                              ## @.str.11
	.asciz	"11110"

L_.str.12:                              ## @.str.12
	.asciz	"001110"

L_.str.13:                              ## @.str.13
	.asciz	"011110"

L_.str.14:                              ## @.str.14
	.asciz	"101110"

L_.str.15:                              ## @.str.15
	.asciz	"111110"

L_.str.16:                              ## @.str.16
	.asciz	"0011110"

L_.str.17:                              ## @.str.17
	.asciz	"0111110"

L_.str.18:                              ## @.str.18
	.asciz	"1011110"

L_.str.19:                              ## @.str.19
	.asciz	"1111110"

L_.str.20:                              ## @.str.20
	.asciz	"00111110"

L_.str.21:                              ## @.str.21
	.asciz	"01111110"

L_.str.22:                              ## @.str.22
	.asciz	"10111110"

L_.str.23:                              ## @.str.23
	.asciz	"11111110"

L_.str.24:                              ## @.str.24
	.asciz	"001111110"

L_.str.25:                              ## @.str.25
	.asciz	"011111110"

L_.str.26:                              ## @.str.26
	.asciz	"101111110"

L_.str.27:                              ## @.str.27
	.asciz	"111111110"

L_.str.28:                              ## @.str.28
	.asciz	"0011111110"

L_.str.29:                              ## @.str.29
	.asciz	"0111111110"

L_.str.30:                              ## @.str.30
	.asciz	"1011111110"

L_.str.31:                              ## @.str.31
	.asciz	"1111111110"

L_.str.32:                              ## @.str.32
	.asciz	"00111111110"

L_.str.33:                              ## @.str.33
	.asciz	"01111111110"

L_.str.34:                              ## @.str.34
	.asciz	"10111111110"

L_.str.35:                              ## @.str.35
	.asciz	"11111111110"

L_.str.36:                              ## @.str.36
	.asciz	"001111111110"

L_.str.37:                              ## @.str.37
	.asciz	"011111111110"

L_.str.38:                              ## @.str.38
	.asciz	"101111111110"

L_.str.39:                              ## @.str.39
	.asciz	"111111111110"

L_.str.40:                              ## @.str.40
	.asciz	"0011111111110"

L_.str.41:                              ## @.str.41
	.asciz	"0111111111110"

L_.str.42:                              ## @.str.42
	.asciz	"1011111111110"

L_.str.43:                              ## @.str.43
	.asciz	"1111111111110"

L_.str.44:                              ## @.str.44
	.asciz	"00111111111110"

L_.str.45:                              ## @.str.45
	.asciz	"01111111111110"

L_.str.46:                              ## @.str.46
	.asciz	"10111111111110"

L_.str.47:                              ## @.str.47
	.asciz	"11111111111110"

L_.str.48:                              ## @.str.48
	.asciz	"001111111111110"

L_.str.49:                              ## @.str.49
	.asciz	"011111111111110"

L_.str.50:                              ## @.str.50
	.asciz	"101111111111110"

L_.str.51:                              ## @.str.51
	.asciz	"111111111111110"

L_.str.52:                              ## @.str.52
	.asciz	"0011111111111110"

L_.str.53:                              ## @.str.53
	.asciz	"0111111111111110"

L_.str.54:                              ## @.str.54
	.asciz	"1011111111111110"

L_.str.55:                              ## @.str.55
	.asciz	"1111111111111110"

L_.str.56:                              ## @.str.56
	.asciz	"00111111111111110"

L_.str.57:                              ## @.str.57
	.asciz	"01111111111111110"

L_.str.58:                              ## @.str.58
	.asciz	"10111111111111110"

L_.str.59:                              ## @.str.59
	.asciz	"11111111111111110"

L_.str.60:                              ## @.str.60
	.asciz	"001111111111111110"

L_.str.61:                              ## @.str.61
	.asciz	"011111111111111110"

L_.str.62:                              ## @.str.62
	.asciz	"101111111111111110"

L_.str.63:                              ## @.str.63
	.asciz	"111111111111111110"

L_.str.64:                              ## @.str.64
	.asciz	"0011111111111111110"

L_.str.65:                              ## @.str.65
	.asciz	"0111111111111111110"

L_.str.66:                              ## @.str.66
	.asciz	"1011111111111111110"

L_.str.67:                              ## @.str.67
	.asciz	"1111111111111111110"

L_.str.68:                              ## @.str.68
	.asciz	"00111111111111111110"

L_.str.69:                              ## @.str.69
	.asciz	"01111111111111111110"

L_.str.70:                              ## @.str.70
	.asciz	"10111111111111111110"

L_.str.71:                              ## @.str.71
	.asciz	"11111111111111111110"

L_.str.72:                              ## @.str.72
	.asciz	"001111111111111111110"

L_.str.73:                              ## @.str.73
	.asciz	"011111111111111111110"

L_.str.74:                              ## @.str.74
	.asciz	"101111111111111111110"

L_.str.75:                              ## @.str.75
	.asciz	"111111111111111111110"

L_.str.76:                              ## @.str.76
	.asciz	"0011111111111111111110"

L_.str.77:                              ## @.str.77
	.asciz	"0111111111111111111110"

L_.str.78:                              ## @.str.78
	.asciz	"1011111111111111111110"

L_.str.79:                              ## @.str.79
	.asciz	"1111111111111111111110"

L_.str.80:                              ## @.str.80
	.asciz	"00111111111111111111110"

L_.str.81:                              ## @.str.81
	.asciz	"01111111111111111111110"

L_.str.82:                              ## @.str.82
	.asciz	"10111111111111111111110"

L_.str.83:                              ## @.str.83
	.asciz	"11111111111111111111110"

L_.str.84:                              ## @.str.84
	.asciz	"001111111111111111111110"

L_.str.85:                              ## @.str.85
	.asciz	"011111111111111111111110"

L_.str.86:                              ## @.str.86
	.asciz	"101111111111111111111110"

L_.str.87:                              ## @.str.87
	.asciz	"111111111111111111111110"

L_.str.88:                              ## @.str.88
	.asciz	"0011111111111111111111110"

L_.str.89:                              ## @.str.89
	.asciz	"0111111111111111111111110"

L_.str.90:                              ## @.str.90
	.asciz	"1011111111111111111111110"

L_.str.91:                              ## @.str.91
	.asciz	"1111111111111111111111110"

L_.str.92:                              ## @.str.92
	.asciz	"00111111111111111111111110"

L_.str.93:                              ## @.str.93
	.asciz	"01111111111111111111111110"

L_.str.94:                              ## @.str.94
	.asciz	"10111111111111111111111110"

L_.str.95:                              ## @.str.95
	.asciz	"11111111111111111111111110"

L_.str.96:                              ## @.str.96
	.asciz	"001111111111111111111111110"

L_.str.97:                              ## @.str.97
	.asciz	"011111111111111111111111110"

L_.str.98:                              ## @.str.98
	.asciz	"101111111111111111111111110"

L_.str.99:                              ## @.str.99
	.asciz	"111111111111111111111111110"

	.section	__DATA,__data
	.globl	_map_array              ## @map_array
	.p2align	4
_map_array:
	.long	97                      ## 0x61
	.space	4
	.quad	L_.str
	.long	65                      ## 0x41
	.space	4
	.quad	L_.str.1
	.long	98                      ## 0x62
	.space	4
	.quad	L_.str.2
	.long	66                      ## 0x42
	.space	4
	.quad	L_.str.3
	.long	99                      ## 0x63
	.space	4
	.quad	L_.str.4
	.long	67                      ## 0x43
	.space	4
	.quad	L_.str.5
	.long	100                     ## 0x64
	.space	4
	.quad	L_.str.6
	.long	68                      ## 0x44
	.space	4
	.quad	L_.str.7
	.long	101                     ## 0x65
	.space	4
	.quad	L_.str.8
	.long	69                      ## 0x45
	.space	4
	.quad	L_.str.9
	.long	102                     ## 0x66
	.space	4
	.quad	L_.str.10
	.long	70                      ## 0x46
	.space	4
	.quad	L_.str.11
	.long	103                     ## 0x67
	.space	4
	.quad	L_.str.12
	.long	71                      ## 0x47
	.space	4
	.quad	L_.str.13
	.long	104                     ## 0x68
	.space	4
	.quad	L_.str.14
	.long	72                      ## 0x48
	.space	4
	.quad	L_.str.15
	.long	105                     ## 0x69
	.space	4
	.quad	L_.str.16
	.long	73                      ## 0x49
	.space	4
	.quad	L_.str.17
	.long	106                     ## 0x6a
	.space	4
	.quad	L_.str.18
	.long	74                      ## 0x4a
	.space	4
	.quad	L_.str.19
	.long	107                     ## 0x6b
	.space	4
	.quad	L_.str.20
	.long	75                      ## 0x4b
	.space	4
	.quad	L_.str.21
	.long	108                     ## 0x6c
	.space	4
	.quad	L_.str.22
	.long	76                      ## 0x4c
	.space	4
	.quad	L_.str.23
	.long	109                     ## 0x6d
	.space	4
	.quad	L_.str.24
	.long	77                      ## 0x4d
	.space	4
	.quad	L_.str.25
	.long	110                     ## 0x6e
	.space	4
	.quad	L_.str.26
	.long	78                      ## 0x4e
	.space	4
	.quad	L_.str.27
	.long	111                     ## 0x6f
	.space	4
	.quad	L_.str.28
	.long	79                      ## 0x4f
	.space	4
	.quad	L_.str.29
	.long	112                     ## 0x70
	.space	4
	.quad	L_.str.30
	.long	80                      ## 0x50
	.space	4
	.quad	L_.str.31
	.long	113                     ## 0x71
	.space	4
	.quad	L_.str.32
	.long	81                      ## 0x51
	.space	4
	.quad	L_.str.33
	.long	114                     ## 0x72
	.space	4
	.quad	L_.str.34
	.long	82                      ## 0x52
	.space	4
	.quad	L_.str.35
	.long	115                     ## 0x73
	.space	4
	.quad	L_.str.36
	.long	83                      ## 0x53
	.space	4
	.quad	L_.str.37
	.long	116                     ## 0x74
	.space	4
	.quad	L_.str.38
	.long	84                      ## 0x54
	.space	4
	.quad	L_.str.39
	.long	117                     ## 0x75
	.space	4
	.quad	L_.str.40
	.long	85                      ## 0x55
	.space	4
	.quad	L_.str.41
	.long	118                     ## 0x76
	.space	4
	.quad	L_.str.42
	.long	86                      ## 0x56
	.space	4
	.quad	L_.str.43
	.long	119                     ## 0x77
	.space	4
	.quad	L_.str.44
	.long	87                      ## 0x57
	.space	4
	.quad	L_.str.45
	.long	120                     ## 0x78
	.space	4
	.quad	L_.str.46
	.long	88                      ## 0x58
	.space	4
	.quad	L_.str.47
	.long	121                     ## 0x79
	.space	4
	.quad	L_.str.48
	.long	89                      ## 0x59
	.space	4
	.quad	L_.str.49
	.long	122                     ## 0x7a
	.space	4
	.quad	L_.str.50
	.long	90                      ## 0x5a
	.space	4
	.quad	L_.str.51
	.long	48                      ## 0x30
	.space	4
	.quad	L_.str.52
	.long	49                      ## 0x31
	.space	4
	.quad	L_.str.53
	.long	50                      ## 0x32
	.space	4
	.quad	L_.str.54
	.long	51                      ## 0x33
	.space	4
	.quad	L_.str.55
	.long	52                      ## 0x34
	.space	4
	.quad	L_.str.56
	.long	53                      ## 0x35
	.space	4
	.quad	L_.str.57
	.long	54                      ## 0x36
	.space	4
	.quad	L_.str.58
	.long	55                      ## 0x37
	.space	4
	.quad	L_.str.59
	.long	56                      ## 0x38
	.space	4
	.quad	L_.str.60
	.long	57                      ## 0x39
	.space	4
	.quad	L_.str.61
	.long	33                      ## 0x21
	.space	4
	.quad	L_.str.62
	.long	64                      ## 0x40
	.space	4
	.quad	L_.str.63
	.long	35                      ## 0x23
	.space	4
	.quad	L_.str.64
	.long	36                      ## 0x24
	.space	4
	.quad	L_.str.65
	.long	126                     ## 0x7e
	.space	4
	.quad	L_.str.66
	.long	94                      ## 0x5e
	.space	4
	.quad	L_.str.67
	.long	38                      ## 0x26
	.space	4
	.quad	L_.str.68
	.long	42                      ## 0x2a
	.space	4
	.quad	L_.str.69
	.long	40                      ## 0x28
	.space	4
	.quad	L_.str.70
	.long	41                      ## 0x29
	.space	4
	.quad	L_.str.71
	.long	45                      ## 0x2d
	.space	4
	.quad	L_.str.72
	.long	91                      ## 0x5b
	.space	4
	.quad	L_.str.73
	.long	93                      ## 0x5d
	.space	4
	.quad	L_.str.74
	.long	123                     ## 0x7b
	.space	4
	.quad	L_.str.75
	.long	125                     ## 0x7d
	.space	4
	.quad	L_.str.76
	.long	124                     ## 0x7c
	.space	4
	.quad	L_.str.77
	.long	44                      ## 0x2c
	.space	4
	.quad	L_.str.78
	.long	46                      ## 0x2e
	.space	4
	.quad	L_.str.79
	.long	60                      ## 0x3c
	.space	4
	.quad	L_.str.80
	.long	62                      ## 0x3e
	.space	4
	.quad	L_.str.81
	.long	47                      ## 0x2f
	.space	4
	.quad	L_.str.82
	.long	63                      ## 0x3f
	.space	4
	.quad	L_.str.83
	.long	945                     ## 0x3b1
	.space	4
	.quad	L_.str.84
	.long	946                     ## 0x3b2
	.space	4
	.quad	L_.str.85
	.long	968                     ## 0x3c8
	.space	4
	.quad	L_.str.86
	.long	948                     ## 0x3b4
	.space	4
	.quad	L_.str.87
	.long	949                     ## 0x3b5
	.space	4
	.quad	L_.str.88
	.long	966                     ## 0x3c6
	.space	4
	.quad	L_.str.89
	.long	947                     ## 0x3b3
	.space	4
	.quad	L_.str.90
	.long	951                     ## 0x3b7
	.space	4
	.quad	L_.str.91
	.long	958                     ## 0x3be
	.space	4
	.quad	L_.str.92
	.long	955                     ## 0x3bb
	.space	4
	.quad	L_.str.93
	.long	956                     ## 0x3bc
	.space	4
	.quad	L_.str.94
	.long	960                     ## 0x3c0
	.space	4
	.quad	L_.str.95
	.long	961                     ## 0x3c1
	.space	4
	.quad	L_.str.96
	.long	963                     ## 0x3c3
	.space	4
	.quad	L_.str.97
	.long	952                     ## 0x3b8
	.space	4
	.quad	L_.str.98
	.long	969                     ## 0x3c9
	.space	4
	.quad	L_.str.99

	.section	__TEXT,__cstring,cstring_literals
L_.str.100:                             ## @.str.100
	.space	1

	.section	__TEXT,__const
	.p2align	4               ## @__const.main.input
l___const.main.input:
	.long	97                      ## 0x61
	.long	102                     ## 0x66
	.long	67                      ## 0x43
	.long	102                     ## 0x66
	.long	97                      ## 0x61
	.long	97                      ## 0x61
	.long	75                      ## 0x4b
	.long	97                      ## 0x61
	.long	97                      ## 0x61
	.long	97                      ## 0x61
	.long	73                      ## 0x49
	.long	75                      ## 0x4b
	.long	73                      ## 0x49
	.long	102                     ## 0x66
	.long	51                      ## 0x33
	.long	115                     ## 0x73
	.long	97                      ## 0x61
	.long	70                      ## 0x46
	.long	98                      ## 0x62
	.long	70                      ## 0x46
	.long	110                     ## 0x6e
	.long	65                      ## 0x41
	.long	98                      ## 0x62
	.long	102                     ## 0x66
	.long	66                      ## 0x42
	.long	69                      ## 0x45
	.long	97                      ## 0x61
	.long	98                      ## 0x62
	.long	97                      ## 0x61
	.long	46                      ## 0x2e
	.long	72                      ## 0x48
	.long	98                      ## 0x62
	.long	100                     ## 0x64
	.long	98                      ## 0x62
	.long	97                      ## 0x61
	.long	102                     ## 0x66
	.long	97                      ## 0x61
	.long	82                      ## 0x52
	.long	76                      ## 0x4c
	.long	65                      ## 0x41
	.long	105                     ## 0x69
	.long	67                      ## 0x43
	.long	949                     ## 0x3b5
	.long	98                      ## 0x62
	.long	70                      ## 0x46
	.long	97                      ## 0x61
	.long	98                      ## 0x62
	.long	65                      ## 0x41
	.long	98                      ## 0x62
	.long	65                      ## 0x41
	.long	104                     ## 0x68
	.long	66                      ## 0x42
	.long	99                      ## 0x63
	.long	65                      ## 0x41
	.long	101                     ## 0x65
	.long	106                     ## 0x6a
	.long	963                     ## 0x3c3
	.long	106                     ## 0x6a
	.long	97                      ## 0x61
	.long	97                      ## 0x61
	.long	98                      ## 0x62
	.long	100                     ## 0x64
	.long	99                      ## 0x63
	.long	94                      ## 0x5e
	.long	99                      ## 0x63
	.long	100                     ## 0x64
	.long	97                      ## 0x61
	.long	98                      ## 0x62
	.long	65                      ## 0x41
	.long	73                      ## 0x49
	.long	65                      ## 0x41
	.long	66                      ## 0x42
	.long	102                     ## 0x66
	.long	66                      ## 0x42
	.long	101                     ## 0x65
	.long	68                      ## 0x44
	.long	65                      ## 0x41
	.long	101                     ## 0x65
	.long	68                      ## 0x44
	.long	65                      ## 0x41
	.long	100                     ## 0x64
	.long	72                      ## 0x48
	.long	98                      ## 0x62
	.long	65                      ## 0x41
	.long	97                      ## 0x61
	.long	75                      ## 0x4b
	.long	98                      ## 0x62
	.long	69                      ## 0x45
	.long	99                      ## 0x63
	.long	98                      ## 0x62
	.long	98                      ## 0x62
	.long	55                      ## 0x37
	.long	50                      ## 0x32
	.long	68                      ## 0x44
	.long	97                      ## 0x61
	.long	67                      ## 0x43
	.long	98                      ## 0x62
	.long	101                     ## 0x65
	.long	67                      ## 0x43
	.long	65                      ## 0x41
	.long	10                      ## 0xa
	.long	0                       ## 0x0

	.section	__TEXT,__cstring,cstring_literals
L_.str.101:                             ## @.str.101
	.asciz	"%s\n"

L_.str.102:                             ## @.str.102
	.asciz	"\n"

.subsections_via_symbols
