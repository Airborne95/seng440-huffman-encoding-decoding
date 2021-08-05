	.arch armv4t
	.fpu softvfp
	.eabi_attribute 20, 1
	.eabi_attribute 21, 1
	.eabi_attribute 23, 3
	.eabi_attribute 24, 1
	.eabi_attribute 25, 1
	.eabi_attribute 26, 2
	.eabi_attribute 30, 6
	.eabi_attribute 18, 4
	.file	"original_decoding.c"
	.text
	.align	2
	.global	newNode
	.type	newNode, %function
newNode:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 16
	@ frame_needed = 1, uses_anonymous_args = 0
	stmfd	sp!, {fp, lr}
	add	fp, sp, #4
	sub	sp, sp, #16
	str	r0, [fp, #-16]
	mov	r0, #12
	bl	malloc
	mov	r3, r0
	str	r3, [fp, #-8]
	ldr	r2, [fp, #-8]
	ldr	r3, [fp, #-16]
	str	r3, [r2, #0]
	ldr	r2, [fp, #-8]
	mov	r3, #0
	str	r3, [r2, #8]
	ldr	r2, [fp, #-8]
	mov	r3, #0
	str	r3, [r2, #4]
	ldr	r3, [fp, #-8]
	mov	r0, r3
	sub	sp, fp, #4
	ldmfd	sp!, {fp, lr}
	bx	lr
	.size	newNode, .-newNode
	.section	.rodata
	.align	2
.LC0:
	.ascii	"a\000\000\000c\000\000\000e\000\000\000g\000\000\000"
	.ascii	"i\000\000\000k\000\000\000m\000\000\000o\000\000\000"
	.ascii	"q\000\000\000s\000\000\000u\000\000\000w\000\000\000"
	.ascii	"y\000\000\0000\000\000\0004\000\000\0008\000\000\000"
	.ascii	"#\000\000\000&\000\000\000-\000\000\000}\000\000\000"
	.ascii	"<\000\000\000\261\003\000\000\265\003\000\000\276\003"
	.ascii	"\000\000\301\003\000\000\012\000\000\000\000\000\000"
	.ascii	"\000"
	.align	2
.LC1:
	.ascii	"A\000\000\000C\000\000\000E\000\000\000G\000\000\000"
	.ascii	"I\000\000\000K\000\000\000M\000\000\000O\000\000\000"
	.ascii	"Q\000\000\000S\000\000\000U\000\000\000W\000\000\000"
	.ascii	"Y\000\000\0001\000\000\0005\000\000\0009\000\000\000"
	.ascii	"$\000\000\000*\000\000\000[\000\000\000|\000\000\000"
	.ascii	">\000\000\000\262\003\000\000\306\003\000\000\273\003"
	.ascii	"\000\000\303\003\000\000\012\000\000\000\000\000\000"
	.ascii	"\000"
	.align	2
.LC2:
	.ascii	"b\000\000\000d\000\000\000f\000\000\000h\000\000\000"
	.ascii	"j\000\000\000l\000\000\000n\000\000\000p\000\000\000"
	.ascii	"r\000\000\000t\000\000\000v\000\000\000x\000\000\000"
	.ascii	"z\000\000\0002\000\000\0006\000\000\000!\000\000\000"
	.ascii	"~\000\000\000(\000\000\000]\000\000\000,\000\000\000"
	.ascii	"/\000\000\000\310\003\000\000\263\003\000\000\274\003"
	.ascii	"\000\000\270\003\000\000\012\000\000\000\000\000\000"
	.ascii	"\000"
	.align	2
.LC3:
	.ascii	"B\000\000\000D\000\000\000F\000\000\000H\000\000\000"
	.ascii	"J\000\000\000L\000\000\000N\000\000\000P\000\000\000"
	.ascii	"R\000\000\000T\000\000\000V\000\000\000X\000\000\000"
	.ascii	"Z\000\000\0003\000\000\0007\000\000\000@\000\000\000"
	.ascii	"^\000\000\000)\000\000\000{\000\000\000.\000\000\000"
	.ascii	"?\000\000\000\264\003\000\000\267\003\000\000\300\003"
	.ascii	"\000\000\311\003\000\000\012\000\000\000\000\000\000"
	.ascii	"\000"
	.text
	.align	2
	.global	buildTree
	.type	buildTree, %function
buildTree:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 472
	@ frame_needed = 1, uses_anonymous_args = 0
	stmfd	sp!, {r4, fp, lr}
	add	fp, sp, #8
	sub	sp, sp, #476
	mov	r0, #43
	bl	newNode
	mov	r3, r0
	str	r3, [fp, #-52]
	mov	r0, #43
	bl	newNode
	mov	r2, r0
	ldr	r3, [fp, #-52]
	str	r2, [r3, #8]
	mov	r0, #43
	bl	newNode
	mov	r2, r0
	ldr	r3, [fp, #-52]
	str	r2, [r3, #4]
	ldr	r3, [fp, #-52]
	ldr	r4, [r3, #8]
	mov	r0, #43
	bl	newNode
	mov	r3, r0
	str	r3, [r4, #8]
	ldr	r3, [fp, #-52]
	ldr	r4, [r3, #8]
	mov	r0, #43
	bl	newNode
	mov	r3, r0
	str	r3, [r4, #4]
	ldr	r3, [fp, #-52]
	ldr	r4, [r3, #4]
	mov	r0, #43
	bl	newNode
	mov	r3, r0
	str	r3, [r4, #8]
	ldr	r3, [fp, #-52]
	ldr	r4, [r3, #4]
	mov	r0, #43
	bl	newNode
	mov	r3, r0
	str	r3, [r4, #4]
	ldr	r3, .L7
	sub	r2, fp, #160
	mov	ip, #108
	mov	r0, r2
	mov	r1, r3
	mov	r2, ip
	bl	memcpy
	ldr	r3, .L7+4
	sub	r2, fp, #268
	mov	ip, #108
	mov	r0, r2
	mov	r1, r3
	mov	r2, ip
	bl	memcpy
	ldr	r3, .L7+8
	sub	r2, fp, #376
	mov	ip, #108
	mov	r0, r2
	mov	r1, r3
	mov	r2, ip
	bl	memcpy
	ldr	r3, .L7+12
	sub	r2, fp, #484
	mov	ip, #108
	mov	r0, r2
	mov	r1, r3
	mov	r2, ip
	bl	memcpy
	ldr	r3, [fp, #-52]
	ldr	r3, [r3, #8]
	ldr	r3, [r3, #8]
	str	r3, [fp, #-48]
	ldr	r3, [fp, #-52]
	ldr	r3, [r3, #8]
	ldr	r3, [r3, #4]
	str	r3, [fp, #-44]
	ldr	r3, [fp, #-52]
	ldr	r3, [r3, #4]
	ldr	r3, [r3, #8]
	str	r3, [fp, #-40]
	ldr	r3, [fp, #-52]
	ldr	r3, [r3, #4]
	ldr	r3, [r3, #4]
	str	r3, [fp, #-36]
	ldr	r3, [fp, #-48]
	str	r3, [fp, #-32]
	ldr	r3, [fp, #-44]
	str	r3, [fp, #-28]
	ldr	r3, [fp, #-40]
	str	r3, [fp, #-24]
	ldr	r3, [fp, #-36]
	str	r3, [fp, #-20]
	mov	r3, #0
	str	r3, [fp, #-16]
	b	.L4
.L5:
	ldr	r3, [fp, #-16]
	mvn	r2, #147
	mov	r3, r3, asl #2
	sub	r1, fp, #12
	add	r3, r1, r3
	add	r3, r3, r2
	ldr	r3, [r3, #0]
	mov	r0, r3
	bl	newNode
	mov	r2, r0
	ldr	r3, [fp, #-32]
	str	r2, [r3, #8]
	mov	r0, #43
	bl	newNode
	mov	r2, r0
	ldr	r3, [fp, #-32]
	str	r2, [r3, #4]
	ldr	r3, [fp, #-32]
	ldr	r3, [r3, #4]
	str	r3, [fp, #-32]
	ldr	r3, [fp, #-16]
	mvn	r2, #255
	mov	r3, r3, asl #2
	sub	r1, fp, #12
	add	r3, r1, r3
	add	r3, r3, r2
	ldr	r3, [r3, #0]
	mov	r0, r3
	bl	newNode
	mov	r2, r0
	ldr	r3, [fp, #-28]
	str	r2, [r3, #8]
	mov	r0, #43
	bl	newNode
	mov	r2, r0
	ldr	r3, [fp, #-28]
	str	r2, [r3, #4]
	ldr	r3, [fp, #-28]
	ldr	r3, [r3, #4]
	str	r3, [fp, #-28]
	ldr	r2, [fp, #-16]
	mov	r3, #-1526726656
	mov	r3, r3, asr #22
	mov	r2, r2, asl #2
	sub	r1, fp, #12
	add	r2, r1, r2
	add	r3, r2, r3
	ldr	r3, [r3, #0]
	mov	r0, r3
	bl	newNode
	mov	r2, r0
	ldr	r3, [fp, #-24]
	str	r2, [r3, #8]
	mov	r0, #43
	bl	newNode
	mov	r2, r0
	ldr	r3, [fp, #-24]
	str	r2, [r3, #4]
	ldr	r3, [fp, #-24]
	ldr	r3, [r3, #4]
	str	r3, [fp, #-24]
	ldr	r2, [fp, #-16]
	mov	r3, #-1979711488
	mov	r3, r3, asr #22
	mov	r2, r2, asl #2
	sub	r1, fp, #12
	add	r2, r1, r2
	add	r3, r2, r3
	ldr	r3, [r3, #0]
	mov	r0, r3
	bl	newNode
	mov	r2, r0
	ldr	r3, [fp, #-20]
	str	r2, [r3, #8]
	mov	r0, #43
	bl	newNode
	mov	r2, r0
	ldr	r3, [fp, #-20]
	str	r2, [r3, #4]
	ldr	r3, [fp, #-20]
	ldr	r3, [r3, #4]
	str	r3, [fp, #-20]
	ldr	r3, [fp, #-16]
	add	r3, r3, #1
	str	r3, [fp, #-16]
.L4:
	ldr	r4, [fp, #-16]
	sub	r3, fp, #160
	mov	r0, r3
	bl	wcslen
	mov	r3, r0
	cmp	r4, r3
	bcc	.L5
	ldr	r3, [fp, #-52]
	mov	r0, r3
	sub	sp, fp, #8
	ldmfd	sp!, {r4, fp, lr}
	bx	lr
.L8:
	.align	2
.L7:
	.word	.LC0
	.word	.LC1
	.word	.LC2
	.word	.LC3
	.size	buildTree, .-buildTree
	.section	.rodata
	.align	2
.LC4:
	.ascii	"\000"
	.align	2
.LC5:
	.ascii	"000101100110101100000000111111000000000001111100111"
	.ascii	"111001111101011011111111111111100011111111100001111"
	.ascii	"010011110101111110010100101101100111000010000011111"
	.ascii	"111111111111111101111101001010100000101100001111111"
	.ascii	"111011111110010001111001100011111111111111111111110"
	.ascii	"100111100001000101000101011101100010010001101011110"
	.ascii	"011111111111111111111111110101111000000010010100010"
	.ascii	"111111111111111111000101010000100010011111001011010"
	.ascii	"110110001101110010001101110010101011111010001000001"
	.ascii	"111110100011100010100100111111111111111101011111111"
	.ascii	"11111011100000110100001100110010\000"
	.align	2
.LC6:
	.ascii	"\000\000\000\000"
	.space	396
	.text
	.align	2
	.global	main
	.type	main, %function
main:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 432
	@ frame_needed = 1, uses_anonymous_args = 0
	stmfd	sp!, {fp, lr}
	add	fp, sp, #4
	sub	sp, sp, #432
	str	r0, [fp, #-432]
	str	r1, [fp, #-436]
	mov	r0, #6
	ldr	r1, .L16
	bl	setlocale
	bl	buildTree
	mov	r3, r0
	str	r3, [fp, #-24]
	ldr	r3, .L16+4
	str	r3, [fp, #-20]
	ldr	r3, .L16+8
	ldr	r3, [r3, #0]
	str	r3, [fp, #-424]
	sub	r3, fp, #420
	mov	r2, #396
	mov	r0, r3
	mov	r1, #0
	bl	memset
	ldr	r3, [fp, #-24]
	str	r3, [fp, #-16]
	ldr	r0, [fp, #-20]
	bl	strlen
	mov	r3, r0
	str	r3, [fp, #-12]
	mov	r3, #0
	str	r3, [fp, #-8]
	b	.L10
.L14:
	ldr	r2, [fp, #-8]
	ldr	r3, [fp, #-20]
	add	r3, r3, r2
	ldrb	r3, [r3, #0]	@ zero_extendqisi2
	cmp	r3, #48
	bne	.L11
	ldr	r3, [fp, #-16]
	ldr	r3, [r3, #8]
	str	r3, [fp, #-16]
	b	.L12
.L11:
	ldr	r3, [fp, #-16]
	ldr	r3, [r3, #4]
	str	r3, [fp, #-16]
.L12:
	ldr	r3, [fp, #-16]
	ldr	r3, [r3, #8]
	cmp	r3, #0
	bne	.L13
	ldr	r3, [fp, #-16]
	ldr	r3, [r3, #4]
	cmp	r3, #0
	bne	.L13
	ldr	r3, [fp, #-16]
	sub	r2, fp, #424
	mov	r0, r2
	mov	r1, r3
	bl	wcscat
	ldr	r3, [fp, #-24]
	str	r3, [fp, #-16]
.L13:
	ldr	r3, [fp, #-8]
	add	r3, r3, #1
	str	r3, [fp, #-8]
.L10:
	ldr	r2, [fp, #-8]
	ldr	r3, [fp, #-12]
	cmp	r2, r3
	bcc	.L14
	sub	r3, fp, #424
	mov	r0, r3
	bl	wprintf
	mov	r0, #10
	bl	putchar
	mov	r3, #0
	mov	r0, r3
	sub	sp, fp, #4
	ldmfd	sp!, {fp, lr}
	bx	lr
.L17:
	.align	2
.L16:
	.word	.LC4
	.word	.LC5
	.word	.LC6
	.size	main, .-main
	.ident	"GCC: (Sourcery G++ Lite 2008q3-72) 4.3.2"
	.section	.note.GNU-stack,"",%progbits
