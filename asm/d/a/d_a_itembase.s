.include "macros.inc"

.section .text, "ax" # 80144724


.global DeleteBase__12daItemBase_cFPCc
DeleteBase__12daItemBase_cFPCc:
/* 80144724 00141664  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80144728 00141668  7C 08 02 A6 */	mflr r0
/* 8014472C 0014166C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80144730 00141670  38 63 05 6C */	addi r3, r3, 0x56c
/* 80144734 00141674  4B EE 88 D5 */	bl dComIfG_resDelete__FP30request_of_phase_process_classPCc
/* 80144738 00141678  38 60 00 01 */	li r3, 1
/* 8014473C 0014167C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80144740 00141680  7C 08 03 A6 */	mtlr r0
/* 80144744 00141684  38 21 00 10 */	addi r1, r1, 0x10
/* 80144748 00141688  4E 80 00 20 */	blr 
/* 8014474C 0014168C  38 60 00 01 */	li r3, 1
/* 80144750 00141690  4E 80 00 20 */	blr 
/* 80144754 00141694  38 60 00 01 */	li r3, 1
/* 80144758 00141698  4E 80 00 20 */	blr 

.global CreateItemHeap__12daItemBase_cFPCcsssssss
CreateItemHeap__12daItemBase_cFPCcsssssss:
/* 8014475C 0014169C  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80144760 001416A0  7C 08 02 A6 */	mflr r0
/* 80144764 001416A4  90 01 00 44 */	stw r0, 0x44(r1)
/* 80144768 001416A8  39 61 00 40 */	addi r11, r1, 0x40
/* 8014476C 001416AC  48 21 DA 51 */	bl _savegpr_21
/* 80144770 001416B0  7C 7F 1B 78 */	mr r31, r3
/* 80144774 001416B4  7C 9E 23 78 */	mr r30, r4
/* 80144778 001416B8  7C D7 33 78 */	mr r23, r6
/* 8014477C 001416BC  7C F8 3B 78 */	mr r24, r7
/* 80144780 001416C0  7D 19 43 78 */	mr r25, r8
/* 80144784 001416C4  7D 5A 53 78 */	mr r26, r10
/* 80144788 001416C8  AB 61 00 4A */	lha r27, 0x4a(r1)
/* 8014478C 001416CC  7F C3 F3 78 */	mr r3, r30
/* 80144790 001416D0  7C A4 07 34 */	extsh r4, r5
/* 80144794 001416D4  3C A0 80 40 */	lis r5, g_dComIfG_gameInfo@ha
/* 80144798 001416D8  38 A5 61 C0 */	addi r5, r5, g_dComIfG_gameInfo@l
/* 8014479C 001416DC  3F 85 00 02 */	addis r28, r5, 2
/* 801447A0 001416E0  3B 9C C2 F8 */	addi r28, r28, -15624
/* 801447A4 001416E4  7F 85 E3 78 */	mr r5, r28
/* 801447A8 001416E8  38 C0 00 80 */	li r6, 0x80
/* 801447AC 001416EC  4B EF 7B 41 */	bl getRes__14dRes_control_cFPCclP11dRes_info_ci
/* 801447B0 001416F0  7C 7D 1B 78 */	mr r29, r3
/* 801447B4 001416F4  3C 60 11 00 */	lis r3, 0x11000084@ha
/* 801447B8 001416F8  3A C3 00 84 */	addi r22, r3, 0x11000084@l
/* 801447BC 001416FC  3E A0 00 08 */	lis r21, 8
/* 801447C0 00141700  7E E0 07 35 */	extsh. r0, r23
/* 801447C4 00141704  40 81 00 08 */	ble lbl_801447CC
/* 801447C8 00141708  62 D6 02 00 */	ori r22, r22, 0x200
lbl_801447CC:
/* 801447CC 0014170C  7F 00 07 35 */	extsh. r0, r24
/* 801447D0 00141710  40 81 00 08 */	ble lbl_801447D8
/* 801447D4 00141714  62 D6 00 01 */	ori r22, r22, 1
lbl_801447D8:
/* 801447D8 00141718  7F 60 07 35 */	extsh. r0, r27
/* 801447DC 0014171C  40 81 00 08 */	ble lbl_801447E4
/* 801447E0 00141720  66 D6 00 02 */	oris r22, r22, 2
lbl_801447E4:
/* 801447E4 00141724  7F E3 FB 78 */	mr r3, r31
/* 801447E8 00141728  38 80 00 04 */	li r4, 4
/* 801447EC 0014172C  81 9F 05 68 */	lwz r12, 0x568(r31)
/* 801447F0 00141730  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 801447F4 00141734  7D 89 03 A6 */	mtctr r12
/* 801447F8 00141738  4E 80 04 21 */	bctrl 
/* 801447FC 0014173C  2C 03 00 00 */	cmpwi r3, 0
/* 80144800 00141740  41 82 00 08 */	beq lbl_80144808
/* 80144804 00141744  3A A0 00 00 */	li r21, 0
lbl_80144808:
/* 80144808 00141748  7F A3 EB 78 */	mr r3, r29
/* 8014480C 0014174C  7E A4 AB 78 */	mr r4, r21
/* 80144810 00141750  7E C5 B3 78 */	mr r5, r22
/* 80144814 00141754  4B ED 04 41 */	bl mDoExt_J3DModel__create__FP12J3DModelDataUlUl
/* 80144818 00141758  90 7F 05 74 */	stw r3, 0x574(r31)
/* 8014481C 0014175C  80 1F 05 74 */	lwz r0, 0x574(r31)
/* 80144820 00141760  28 00 00 00 */	cmplwi r0, 0
/* 80144824 00141764  40 82 00 0C */	bne lbl_80144830
/* 80144828 00141768  38 60 00 00 */	li r3, 0
/* 8014482C 0014176C  48 00 03 50 */	b lbl_80144B7C
lbl_80144830:
/* 80144830 00141770  38 00 00 00 */	li r0, 0
/* 80144834 00141774  90 1F 05 78 */	stw r0, 0x578(r31)
/* 80144838 00141778  7E E0 07 35 */	extsh. r0, r23
/* 8014483C 0014177C  40 81 00 88 */	ble lbl_801448C4
/* 80144840 00141780  7F C3 F3 78 */	mr r3, r30
/* 80144844 00141784  7E E4 07 34 */	extsh r4, r23
/* 80144848 00141788  7F 85 E3 78 */	mr r5, r28
/* 8014484C 0014178C  38 C0 00 80 */	li r6, 0x80
/* 80144850 00141790  4B EF 7A 9D */	bl getRes__14dRes_control_cFPCclP11dRes_info_ci
/* 80144854 00141794  7C 75 1B 78 */	mr r21, r3
/* 80144858 00141798  38 60 00 18 */	li r3, 0x18
/* 8014485C 0014179C  48 18 A3 F1 */	bl __nw__FUl
/* 80144860 001417A0  7C 77 1B 79 */	or. r23, r3, r3
/* 80144864 001417A4  41 82 00 20 */	beq lbl_80144884
/* 80144868 001417A8  3C 80 80 3A */	lis r4, lbl_803A3354@ha
/* 8014486C 001417AC  38 04 33 54 */	addi r0, r4, lbl_803A3354@l
/* 80144870 001417B0  90 17 00 00 */	stw r0, 0(r23)
/* 80144874 001417B4  38 80 00 00 */	li r4, 0
/* 80144878 001417B8  48 1E 3B 85 */	bl init__12J3DFrameCtrlFs
/* 8014487C 001417BC  38 00 00 00 */	li r0, 0
/* 80144880 001417C0  90 17 00 14 */	stw r0, 0x14(r23)
lbl_80144884:
/* 80144884 001417C4  92 FF 05 78 */	stw r23, 0x578(r31)
/* 80144888 001417C8  80 7F 05 78 */	lwz r3, 0x578(r31)
/* 8014488C 001417CC  28 03 00 00 */	cmplwi r3, 0
/* 80144890 001417D0  41 82 00 2C */	beq lbl_801448BC
/* 80144894 001417D4  38 9D 00 58 */	addi r4, r29, 0x58
/* 80144898 001417D8  7E A5 AB 78 */	mr r5, r21
/* 8014489C 001417DC  38 C0 00 01 */	li r6, 1
/* 801448A0 001417E0  38 E0 00 02 */	li r7, 2
/* 801448A4 001417E4  C0 22 99 A8 */	lfs f1, lbl_804533A8-_SDA2_BASE_(r2)
/* 801448A8 001417E8  39 00 00 00 */	li r8, 0
/* 801448AC 001417EC  39 20 FF FF */	li r9, -1
/* 801448B0 001417F0  4B EC 8D 8D */	bl init__13mDoExt_btkAnmFP16J3DMaterialTableP19J3DAnmTextureSRTKeyiifss
/* 801448B4 001417F4  2C 03 00 00 */	cmpwi r3, 0
/* 801448B8 001417F8  40 82 00 0C */	bne lbl_801448C4
lbl_801448BC:
/* 801448BC 001417FC  38 60 00 00 */	li r3, 0
/* 801448C0 00141800  48 00 02 BC */	b lbl_80144B7C
lbl_801448C4:
/* 801448C4 00141804  38 00 00 00 */	li r0, 0
/* 801448C8 00141808  90 1F 05 7C */	stw r0, 0x57c(r31)
/* 801448CC 0014180C  7F 00 07 35 */	extsh. r0, r24
/* 801448D0 00141810  40 81 00 88 */	ble lbl_80144958
/* 801448D4 00141814  7F C3 F3 78 */	mr r3, r30
/* 801448D8 00141818  7F 04 07 34 */	extsh r4, r24
/* 801448DC 0014181C  7F 85 E3 78 */	mr r5, r28
/* 801448E0 00141820  38 C0 00 80 */	li r6, 0x80
/* 801448E4 00141824  4B EF 7A 09 */	bl getRes__14dRes_control_cFPCclP11dRes_info_ci
/* 801448E8 00141828  7C 75 1B 78 */	mr r21, r3
/* 801448EC 0014182C  38 60 00 18 */	li r3, 0x18
/* 801448F0 00141830  48 18 A3 5D */	bl __nw__FUl
/* 801448F4 00141834  7C 77 1B 79 */	or. r23, r3, r3
/* 801448F8 00141838  41 82 00 20 */	beq lbl_80144918
/* 801448FC 0014183C  3C 80 80 3A */	lis r4, lbl_803A3354@ha
/* 80144900 00141840  38 04 33 54 */	addi r0, r4, lbl_803A3354@l
/* 80144904 00141844  90 17 00 00 */	stw r0, 0(r23)
/* 80144908 00141848  38 80 00 00 */	li r4, 0
/* 8014490C 0014184C  48 1E 3A F1 */	bl init__12J3DFrameCtrlFs
/* 80144910 00141850  38 00 00 00 */	li r0, 0
/* 80144914 00141854  90 17 00 14 */	stw r0, 0x14(r23)
lbl_80144918:
/* 80144918 00141858  92 FF 05 7C */	stw r23, 0x57c(r31)
/* 8014491C 0014185C  80 7F 05 7C */	lwz r3, 0x57c(r31)
/* 80144920 00141860  28 03 00 00 */	cmplwi r3, 0
/* 80144924 00141864  41 82 00 2C */	beq lbl_80144950
/* 80144928 00141868  38 9D 00 58 */	addi r4, r29, 0x58
/* 8014492C 0014186C  7E A5 AB 78 */	mr r5, r21
/* 80144930 00141870  38 C0 00 01 */	li r6, 1
/* 80144934 00141874  38 E0 00 02 */	li r7, 2
/* 80144938 00141878  C0 22 99 A8 */	lfs f1, lbl_804533A8-_SDA2_BASE_(r2)
/* 8014493C 0014187C  39 00 00 00 */	li r8, 0
/* 80144940 00141880  39 20 FF FF */	li r9, -1
/* 80144944 00141884  4B EC 8B 39 */	bl init__13mDoExt_bpkAnmFP16J3DMaterialTableP11J3DAnmColoriifss
/* 80144948 00141888  2C 03 00 00 */	cmpwi r3, 0
/* 8014494C 0014188C  40 82 00 0C */	bne lbl_80144958
lbl_80144950:
/* 80144950 00141890  38 60 00 00 */	li r3, 0
/* 80144954 00141894  48 00 02 28 */	b lbl_80144B7C
lbl_80144958:
/* 80144958 00141898  38 00 00 00 */	li r0, 0
/* 8014495C 0014189C  90 1F 05 84 */	stw r0, 0x584(r31)
/* 80144960 001418A0  7F 20 07 35 */	extsh. r0, r25
/* 80144964 001418A4  40 81 00 88 */	ble lbl_801449EC
/* 80144968 001418A8  7F C3 F3 78 */	mr r3, r30
/* 8014496C 001418AC  7F 24 07 34 */	extsh r4, r25
/* 80144970 001418B0  7F 85 E3 78 */	mr r5, r28
/* 80144974 001418B4  38 C0 00 80 */	li r6, 0x80
/* 80144978 001418B8  4B EF 79 75 */	bl getRes__14dRes_control_cFPCclP11dRes_info_ci
/* 8014497C 001418BC  7C 75 1B 78 */	mr r21, r3
/* 80144980 001418C0  38 60 00 1C */	li r3, 0x1c
/* 80144984 001418C4  48 18 A2 C9 */	bl __nw__FUl
/* 80144988 001418C8  7C 77 1B 79 */	or. r23, r3, r3
/* 8014498C 001418CC  41 82 00 20 */	beq lbl_801449AC
/* 80144990 001418D0  3C 80 80 3A */	lis r4, lbl_803A3354@ha
/* 80144994 001418D4  38 04 33 54 */	addi r0, r4, lbl_803A3354@l
/* 80144998 001418D8  90 17 00 00 */	stw r0, 0(r23)
/* 8014499C 001418DC  38 80 00 00 */	li r4, 0
/* 801449A0 001418E0  48 1E 3A 5D */	bl init__12J3DFrameCtrlFs
/* 801449A4 001418E4  38 00 00 00 */	li r0, 0
/* 801449A8 001418E8  90 17 00 18 */	stw r0, 0x18(r23)
lbl_801449AC:
/* 801449AC 001418EC  92 FF 05 84 */	stw r23, 0x584(r31)
/* 801449B0 001418F0  80 7F 05 84 */	lwz r3, 0x584(r31)
/* 801449B4 001418F4  28 03 00 00 */	cmplwi r3, 0
/* 801449B8 001418F8  41 82 00 2C */	beq lbl_801449E4
/* 801449BC 001418FC  7E A4 AB 78 */	mr r4, r21
/* 801449C0 00141900  38 A0 00 01 */	li r5, 1
/* 801449C4 00141904  38 C0 00 02 */	li r6, 2
/* 801449C8 00141908  C0 22 99 A8 */	lfs f1, lbl_804533A8-_SDA2_BASE_(r2)
/* 801449CC 0014190C  38 E0 00 00 */	li r7, 0
/* 801449D0 00141910  39 00 FF FF */	li r8, -1
/* 801449D4 00141914  39 20 00 00 */	li r9, 0
/* 801449D8 00141918  4B EC 8E 05 */	bl init__13mDoExt_bckAnmFP15J3DAnmTransformiifssb
/* 801449DC 0014191C  2C 03 00 00 */	cmpwi r3, 0
/* 801449E0 00141920  40 82 00 0C */	bne lbl_801449EC
lbl_801449E4:
/* 801449E4 00141924  38 60 00 00 */	li r3, 0
/* 801449E8 00141928  48 00 01 94 */	b lbl_80144B7C
lbl_801449EC:
/* 801449EC 0014192C  38 00 00 00 */	li r0, 0
/* 801449F0 00141930  90 1F 05 80 */	stw r0, 0x580(r31)
/* 801449F4 00141934  7F 40 07 35 */	extsh. r0, r26
/* 801449F8 00141938  40 81 00 B0 */	ble lbl_80144AA8
/* 801449FC 0014193C  7F C3 F3 78 */	mr r3, r30
/* 80144A00 00141940  7F 44 07 34 */	extsh r4, r26
/* 80144A04 00141944  7F 85 E3 78 */	mr r5, r28
/* 80144A08 00141948  38 C0 00 80 */	li r6, 0x80
/* 80144A0C 0014194C  4B EF 78 E1 */	bl getRes__14dRes_control_cFPCclP11dRes_info_ci
/* 80144A10 00141950  7C 75 1B 78 */	mr r21, r3
/* 80144A14 00141954  7F E3 FB 78 */	mr r3, r31
/* 80144A18 00141958  81 9F 05 68 */	lwz r12, 0x568(r31)
/* 80144A1C 0014195C  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 80144A20 00141960  7D 89 03 A6 */	mtctr r12
/* 80144A24 00141964  4E 80 04 21 */	bctrl 
/* 80144A28 00141968  3A C0 00 01 */	li r22, 1
/* 80144A2C 0014196C  7C 60 07 74 */	extsb r0, r3
/* 80144A30 00141970  2C 00 FF FF */	cmpwi r0, -1
/* 80144A34 00141974  41 82 00 08 */	beq lbl_80144A3C
/* 80144A38 00141978  3A C0 00 00 */	li r22, 0
lbl_80144A3C:
/* 80144A3C 0014197C  38 60 00 18 */	li r3, 0x18
/* 80144A40 00141980  48 18 A2 0D */	bl __nw__FUl
/* 80144A44 00141984  7C 77 1B 79 */	or. r23, r3, r3
/* 80144A48 00141988  41 82 00 20 */	beq lbl_80144A68
/* 80144A4C 0014198C  3C 80 80 3A */	lis r4, lbl_803A3354@ha
/* 80144A50 00141990  38 04 33 54 */	addi r0, r4, lbl_803A3354@l
/* 80144A54 00141994  90 17 00 00 */	stw r0, 0(r23)
/* 80144A58 00141998  38 80 00 00 */	li r4, 0
/* 80144A5C 0014199C  48 1E 39 A1 */	bl init__12J3DFrameCtrlFs
/* 80144A60 001419A0  38 00 00 00 */	li r0, 0
/* 80144A64 001419A4  90 17 00 14 */	stw r0, 0x14(r23)
lbl_80144A68:
/* 80144A68 001419A8  92 FF 05 80 */	stw r23, 0x580(r31)
/* 80144A6C 001419AC  80 7F 05 80 */	lwz r3, 0x580(r31)
/* 80144A70 001419B0  28 03 00 00 */	cmplwi r3, 0
/* 80144A74 001419B4  41 82 00 2C */	beq lbl_80144AA0
/* 80144A78 001419B8  38 9D 00 58 */	addi r4, r29, 0x58
/* 80144A7C 001419BC  7E A5 AB 78 */	mr r5, r21
/* 80144A80 001419C0  7E C6 B3 78 */	mr r6, r22
/* 80144A84 001419C4  38 E0 00 02 */	li r7, 2
/* 80144A88 001419C8  C0 22 99 A8 */	lfs f1, lbl_804533A8-_SDA2_BASE_(r2)
/* 80144A8C 001419CC  39 00 00 00 */	li r8, 0
/* 80144A90 001419D0  39 20 FF FF */	li r9, -1
/* 80144A94 001419D4  4B EC 8C 79 */	bl init__13mDoExt_brkAnmFP16J3DMaterialTableP15J3DAnmTevRegKeyiifss
/* 80144A98 001419D8  2C 03 00 00 */	cmpwi r3, 0
/* 80144A9C 001419DC  40 82 00 0C */	bne lbl_80144AA8
lbl_80144AA0:
/* 80144AA0 001419E0  38 60 00 00 */	li r3, 0
/* 80144AA4 001419E4  48 00 00 D8 */	b lbl_80144B7C
lbl_80144AA8:
/* 80144AA8 001419E8  38 00 00 00 */	li r0, 0
/* 80144AAC 001419EC  90 1F 05 88 */	stw r0, 0x588(r31)
/* 80144AB0 001419F0  7F 60 07 35 */	extsh. r0, r27
/* 80144AB4 001419F4  40 81 00 88 */	ble lbl_80144B3C
/* 80144AB8 001419F8  7F C3 F3 78 */	mr r3, r30
/* 80144ABC 001419FC  7F 64 DB 78 */	mr r4, r27
/* 80144AC0 00141A00  7F 85 E3 78 */	mr r5, r28
/* 80144AC4 00141A04  38 C0 00 80 */	li r6, 0x80
/* 80144AC8 00141A08  4B EF 78 25 */	bl getRes__14dRes_control_cFPCclP11dRes_info_ci
/* 80144ACC 00141A0C  7C 75 1B 78 */	mr r21, r3
/* 80144AD0 00141A10  38 60 00 18 */	li r3, 0x18
/* 80144AD4 00141A14  48 18 A1 79 */	bl __nw__FUl
/* 80144AD8 00141A18  7C 77 1B 79 */	or. r23, r3, r3
/* 80144ADC 00141A1C  41 82 00 20 */	beq lbl_80144AFC
/* 80144AE0 00141A20  3C 80 80 3A */	lis r4, lbl_803A3354@ha
/* 80144AE4 00141A24  38 04 33 54 */	addi r0, r4, lbl_803A3354@l
/* 80144AE8 00141A28  90 17 00 00 */	stw r0, 0(r23)
/* 80144AEC 00141A2C  38 80 00 00 */	li r4, 0
/* 80144AF0 00141A30  48 1E 39 0D */	bl init__12J3DFrameCtrlFs
/* 80144AF4 00141A34  38 00 00 00 */	li r0, 0
/* 80144AF8 00141A38  90 17 00 14 */	stw r0, 0x14(r23)
lbl_80144AFC:
/* 80144AFC 00141A3C  92 FF 05 88 */	stw r23, 0x588(r31)
/* 80144B00 00141A40  80 7F 05 88 */	lwz r3, 0x588(r31)
/* 80144B04 00141A44  28 03 00 00 */	cmplwi r3, 0
/* 80144B08 00141A48  41 82 00 2C */	beq lbl_80144B34
/* 80144B0C 00141A4C  38 9D 00 58 */	addi r4, r29, 0x58
/* 80144B10 00141A50  7E A5 AB 78 */	mr r5, r21
/* 80144B14 00141A54  38 C0 00 01 */	li r6, 1
/* 80144B18 00141A58  38 E0 00 02 */	li r7, 2
/* 80144B1C 00141A5C  C0 22 99 A8 */	lfs f1, lbl_804533A8-_SDA2_BASE_(r2)
/* 80144B20 00141A60  39 00 00 00 */	li r8, 0
/* 80144B24 00141A64  39 20 FF FF */	li r9, -1
/* 80144B28 00141A68  4B EC 8A 25 */	bl init__13mDoExt_btpAnmFP16J3DMaterialTableP16J3DAnmTexPatterniifss
/* 80144B2C 00141A6C  2C 03 00 00 */	cmpwi r3, 0
/* 80144B30 00141A70  40 82 00 0C */	bne lbl_80144B3C
lbl_80144B34:
/* 80144B34 00141A74  38 60 00 00 */	li r3, 0
/* 80144B38 00141A78  48 00 00 44 */	b lbl_80144B7C
lbl_80144B3C:
/* 80144B3C 00141A7C  7F E3 FB 78 */	mr r3, r31
/* 80144B40 00141A80  81 9F 05 68 */	lwz r12, 0x568(r31)
/* 80144B44 00141A84  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80144B48 00141A88  7D 89 03 A6 */	mtctr r12
/* 80144B4C 00141A8C  4E 80 04 21 */	bctrl 
/* 80144B50 00141A90  2C 03 00 00 */	cmpwi r3, 0
/* 80144B54 00141A94  40 82 00 0C */	bne lbl_80144B60
/* 80144B58 00141A98  38 60 00 00 */	li r3, 0
/* 80144B5C 00141A9C  48 00 00 20 */	b lbl_80144B7C
lbl_80144B60:
/* 80144B60 00141AA0  7F E3 FB 78 */	mr r3, r31
/* 80144B64 00141AA4  81 9F 05 68 */	lwz r12, 0x568(r31)
/* 80144B68 00141AA8  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 80144B6C 00141AAC  7D 89 03 A6 */	mtctr r12
/* 80144B70 00141AB0  4E 80 04 21 */	bctrl 
/* 80144B74 00141AB4  30 03 FF FF */	addic r0, r3, -1
/* 80144B78 00141AB8  7C 60 19 10 */	subfe r3, r0, r3
lbl_80144B7C:
/* 80144B7C 00141ABC  39 61 00 40 */	addi r11, r1, 0x40
/* 80144B80 00141AC0  48 21 D6 89 */	bl _restgpr_21
/* 80144B84 00141AC4  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80144B88 00141AC8  7C 08 03 A6 */	mtlr r0
/* 80144B8C 00141ACC  38 21 00 40 */	addi r1, r1, 0x40
/* 80144B90 00141AD0  4E 80 00 20 */	blr 
/* 80144B94 00141AD4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80144B98 00141AD8  7C 08 02 A6 */	mflr r0
/* 80144B9C 00141ADC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80144BA0 00141AE0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80144BA4 00141AE4  7C 7F 1B 78 */	mr r31, r3
/* 80144BA8 00141AE8  81 83 05 68 */	lwz r12, 0x568(r3)
/* 80144BAC 00141AEC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80144BB0 00141AF0  7D 89 03 A6 */	mtctr r12
/* 80144BB4 00141AF4  4E 80 04 21 */	bctrl 
/* 80144BB8 00141AF8  7F E3 FB 78 */	mr r3, r31
/* 80144BBC 00141AFC  81 9F 05 68 */	lwz r12, 0x568(r31)
/* 80144BC0 00141B00  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80144BC4 00141B04  7D 89 03 A6 */	mtctr r12
/* 80144BC8 00141B08  4E 80 04 21 */	bctrl 
/* 80144BCC 00141B0C  7F E3 FB 78 */	mr r3, r31
/* 80144BD0 00141B10  81 9F 05 68 */	lwz r12, 0x568(r31)
/* 80144BD4 00141B14  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80144BD8 00141B18  7D 89 03 A6 */	mtctr r12
/* 80144BDC 00141B1C  4E 80 04 21 */	bctrl 
/* 80144BE0 00141B20  7F E3 FB 78 */	mr r3, r31
/* 80144BE4 00141B24  81 9F 05 68 */	lwz r12, 0x568(r31)
/* 80144BE8 00141B28  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80144BEC 00141B2C  7D 89 03 A6 */	mtctr r12
/* 80144BF0 00141B30  4E 80 04 21 */	bctrl 
/* 80144BF4 00141B34  80 7F 05 74 */	lwz r3, 0x574(r31)
/* 80144BF8 00141B38  4B EC 90 CD */	bl mDoExt_modelUpdateDL__FP8J3DModel
/* 80144BFC 00141B3C  7F E3 FB 78 */	mr r3, r31
/* 80144C00 00141B40  48 00 00 A1 */	bl setListEnd__12daItemBase_cFv
/* 80144C04 00141B44  7F E3 FB 78 */	mr r3, r31
/* 80144C08 00141B48  81 9F 05 68 */	lwz r12, 0x568(r31)
/* 80144C0C 00141B4C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80144C10 00141B50  7D 89 03 A6 */	mtctr r12
/* 80144C14 00141B54  4E 80 04 21 */	bctrl 
/* 80144C18 00141B58  38 60 00 01 */	li r3, 1
/* 80144C1C 00141B5C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80144C20 00141B60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80144C24 00141B64  7C 08 03 A6 */	mtlr r0
/* 80144C28 00141B68  38 21 00 10 */	addi r1, r1, 0x10
/* 80144C2C 00141B6C  4E 80 00 20 */	blr 
/* 80144C30 00141B70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80144C34 00141B74  7C 08 02 A6 */	mflr r0
/* 80144C38 00141B78  90 01 00 14 */	stw r0, 0x14(r1)
/* 80144C3C 00141B7C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80144C40 00141B80  7C 7F 1B 78 */	mr r31, r3
/* 80144C44 00141B84  48 01 64 75 */	bl getData__12daItemBase_cFv
/* 80144C48 00141B88  A8 83 00 1C */	lha r4, 0x1c(r3)
/* 80144C4C 00141B8C  3C 60 00 01 */	lis r3, 0x0000FFFF@ha
/* 80144C50 00141B90  38 03 FF FF */	addi r0, r3, 0x0000FFFF@l
/* 80144C54 00141B94  7C 00 23 D6 */	divw r0, r0, r4
/* 80144C58 00141B98  7C 03 07 34 */	extsh r3, r0
/* 80144C5C 00141B9C  A8 1F 04 E6 */	lha r0, 0x4e6(r31)
/* 80144C60 00141BA0  7C 00 1A 14 */	add r0, r0, r3
/* 80144C64 00141BA4  B0 1F 04 E6 */	sth r0, 0x4e6(r31)
/* 80144C68 00141BA8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80144C6C 00141BAC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80144C70 00141BB0  7C 08 03 A6 */	mtlr r0
/* 80144C74 00141BB4  38 21 00 10 */	addi r1, r1, 0x10
/* 80144C78 00141BB8  4E 80 00 20 */	blr 
/* 80144C7C 00141BBC  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 80144C80 00141BC0  38 83 61 C0 */	addi r4, r3, g_dComIfG_gameInfo@l
/* 80144C84 00141BC4  80 04 5F 88 */	lwz r0, 0x5f88(r4)
/* 80144C88 00141BC8  3C 60 80 43 */	lis r3, lbl_80434AC8@ha
/* 80144C8C 00141BCC  38 63 4A C8 */	addi r3, r3, lbl_80434AC8@l
/* 80144C90 00141BD0  90 03 00 48 */	stw r0, 0x48(r3)
/* 80144C94 00141BD4  80 04 5F 8C */	lwz r0, 0x5f8c(r4)
/* 80144C98 00141BD8  90 03 00 4C */	stw r0, 0x4c(r3)
/* 80144C9C 00141BDC  4E 80 00 20 */	blr 

.global setListEnd__12daItemBase_cFv
setListEnd__12daItemBase_cFv:
/* 80144CA0 00141BE0  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 80144CA4 00141BE4  38 83 61 C0 */	addi r4, r3, g_dComIfG_gameInfo@l
/* 80144CA8 00141BE8  80 04 5F 80 */	lwz r0, 0x5f80(r4)
/* 80144CAC 00141BEC  3C 60 80 43 */	lis r3, lbl_80434AC8@ha
/* 80144CB0 00141BF0  38 63 4A C8 */	addi r3, r3, lbl_80434AC8@l
/* 80144CB4 00141BF4  90 03 00 48 */	stw r0, 0x48(r3)
/* 80144CB8 00141BF8  80 04 5F 84 */	lwz r0, 0x5f84(r4)
/* 80144CBC 00141BFC  90 03 00 4C */	stw r0, 0x4c(r3)
/* 80144CC0 00141C00  4E 80 00 20 */	blr 
/* 80144CC4 00141C04  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80144CC8 00141C08  7C 08 02 A6 */	mflr r0
/* 80144CCC 00141C0C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80144CD0 00141C10  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80144CD4 00141C14  7C 7F 1B 78 */	mr r31, r3
/* 80144CD8 00141C18  38 80 00 04 */	li r4, 4
/* 80144CDC 00141C1C  81 83 05 68 */	lwz r12, 0x568(r3)
/* 80144CE0 00141C20  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80144CE4 00141C24  7D 89 03 A6 */	mtctr r12
/* 80144CE8 00141C28  4E 80 04 21 */	bctrl 
/* 80144CEC 00141C2C  2C 03 00 00 */	cmpwi r3, 0
/* 80144CF0 00141C30  41 82 00 14 */	beq lbl_80144D04
/* 80144CF4 00141C34  80 7F 05 74 */	lwz r3, 0x574(r31)
/* 80144CF8 00141C38  80 83 00 04 */	lwz r4, 4(r3)
/* 80144CFC 00141C3C  7F E3 FB 78 */	mr r3, r31
/* 80144D00 00141C40  4B ED 87 2D */	bl fopAcM_setEffectMtx__FPC10fopAc_ac_cPC12J3DModelData
lbl_80144D04:
/* 80144D04 00141C44  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80144D08 00141C48  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80144D0C 00141C4C  7C 08 03 A6 */	mtlr r0
/* 80144D10 00141C50  38 21 00 10 */	addi r1, r1, 0x10
/* 80144D14 00141C54  4E 80 00 20 */	blr 
/* 80144D18 00141C58  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80144D1C 00141C5C  7C 08 02 A6 */	mflr r0
/* 80144D20 00141C60  90 01 00 14 */	stw r0, 0x14(r1)
/* 80144D24 00141C64  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80144D28 00141C68  7C 7F 1B 78 */	mr r31, r3
/* 80144D2C 00141C6C  3C 60 80 43 */	lis r3, lbl_8042CA54@ha
/* 80144D30 00141C70  38 63 CA 54 */	addi r3, r3, lbl_8042CA54@l
/* 80144D34 00141C74  38 80 00 00 */	li r4, 0
/* 80144D38 00141C78  38 BF 04 D0 */	addi r5, r31, 0x4d0
/* 80144D3C 00141C7C  38 DF 01 0C */	addi r6, r31, 0x10c
/* 80144D40 00141C80  48 05 EA 85 */	bl settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c
/* 80144D44 00141C84  3C 60 80 43 */	lis r3, lbl_8042CA54@ha
/* 80144D48 00141C88  38 63 CA 54 */	addi r3, r3, lbl_8042CA54@l
/* 80144D4C 00141C8C  80 9F 05 74 */	lwz r4, 0x574(r31)
/* 80144D50 00141C90  80 84 00 04 */	lwz r4, 4(r4)
/* 80144D54 00141C94  38 BF 01 0C */	addi r5, r31, 0x10c
/* 80144D58 00141C98  48 06 00 49 */	bl setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c
/* 80144D5C 00141C9C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80144D60 00141CA0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80144D64 00141CA4  7C 08 03 A6 */	mtlr r0
/* 80144D68 00141CA8  38 21 00 10 */	addi r1, r1, 0x10
/* 80144D6C 00141CAC  4E 80 00 20 */	blr 
/* 80144D70 00141CB0  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80144D74 00141CB4  7C 08 02 A6 */	mflr r0
/* 80144D78 00141CB8  90 01 00 34 */	stw r0, 0x34(r1)
/* 80144D7C 00141CBC  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80144D80 00141CC0  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 80144D84 00141CC4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80144D88 00141CC8  7C 7F 1B 78 */	mr r31, r3
/* 80144D8C 00141CCC  81 83 05 68 */	lwz r12, 0x568(r3)
/* 80144D90 00141CD0  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 80144D94 00141CD4  7D 89 03 A6 */	mtctr r12
/* 80144D98 00141CD8  4E 80 04 21 */	bctrl 
/* 80144D9C 00141CDC  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 80144DA0 00141CE0  C8 22 99 B8 */	lfd f1, lbl_804533B8-_SDA2_BASE_(r2)
/* 80144DA4 00141CE4  90 01 00 0C */	stw r0, 0xc(r1)
/* 80144DA8 00141CE8  3C 00 43 30 */	lis r0, 0x4330
/* 80144DAC 00141CEC  90 01 00 08 */	stw r0, 8(r1)
/* 80144DB0 00141CF0  C8 01 00 08 */	lfd f0, 8(r1)
/* 80144DB4 00141CF4  EC 20 08 28 */	fsubs f1, f0, f1
/* 80144DB8 00141CF8  C0 1F 04 EC */	lfs f0, 0x4ec(r31)
/* 80144DBC 00141CFC  EF E0 00 72 */	fmuls f31, f0, f1
/* 80144DC0 00141D00  7F E3 FB 78 */	mr r3, r31
/* 80144DC4 00141D04  38 80 00 10 */	li r4, 0x10
/* 80144DC8 00141D08  81 9F 05 68 */	lwz r12, 0x568(r31)
/* 80144DCC 00141D0C  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80144DD0 00141D10  7D 89 03 A6 */	mtctr r12
/* 80144DD4 00141D14  4E 80 04 21 */	bctrl 
/* 80144DD8 00141D18  2C 03 00 00 */	cmpwi r3, 0
/* 80144DDC 00141D1C  40 82 00 68 */	bne lbl_80144E44
/* 80144DE0 00141D20  7F E3 FB 78 */	mr r3, r31
/* 80144DE4 00141D24  81 9F 05 68 */	lwz r12, 0x568(r31)
/* 80144DE8 00141D28  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 80144DEC 00141D2C  7D 89 03 A6 */	mtctr r12
/* 80144DF0 00141D30  4E 80 04 21 */	bctrl 
/* 80144DF4 00141D34  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 80144DF8 00141D38  C8 22 99 B8 */	lfd f1, lbl_804533B8-_SDA2_BASE_(r2)
/* 80144DFC 00141D3C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80144E00 00141D40  3C 00 43 30 */	lis r0, 0x4330
/* 80144E04 00141D44  90 01 00 08 */	stw r0, 8(r1)
/* 80144E08 00141D48  C8 01 00 08 */	lfd f0, 8(r1)
/* 80144E0C 00141D4C  EC 20 08 28 */	fsubs f1, f0, f1
/* 80144E10 00141D50  C0 02 99 AC */	lfs f0, lbl_804533AC-_SDA2_BASE_(r2)
/* 80144E14 00141D54  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 80144E18 00141D58  41 82 00 A8 */	beq lbl_80144EC0
/* 80144E1C 00141D5C  38 7F 04 D0 */	addi r3, r31, 0x4d0
/* 80144E20 00141D60  C0 3F 06 24 */	lfs f1, 0x624(r31)
/* 80144E24 00141D64  FC 40 F8 90 */	fmr f2, f31
/* 80144E28 00141D68  38 9F 06 7C */	addi r4, r31, 0x67c
/* 80144E2C 00141D6C  38 A0 00 00 */	li r5, 0
/* 80144E30 00141D70  C0 62 99 A8 */	lfs f3, lbl_804533A8-_SDA2_BASE_(r2)
/* 80144E34 00141D74  3C C0 80 42 */	lis r6, lbl_804248D0@ha
/* 80144E38 00141D78  38 C6 48 D0 */	addi r6, r6, lbl_804248D0@l
/* 80144E3C 00141D7C  4B EE 82 79 */	bl dComIfGd_setSimpleShadow__FP4cXyzffR13cBgS_PolyInfosfP9_GXTexObj
/* 80144E40 00141D80  48 00 00 80 */	b lbl_80144EC0
lbl_80144E44:
/* 80144E44 00141D84  7F E3 FB 78 */	mr r3, r31
/* 80144E48 00141D88  81 9F 05 68 */	lwz r12, 0x568(r31)
/* 80144E4C 00141D8C  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 80144E50 00141D90  7D 89 03 A6 */	mtctr r12
/* 80144E54 00141D94  4E 80 04 21 */	bctrl 
/* 80144E58 00141D98  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 80144E5C 00141D9C  C8 22 99 B8 */	lfd f1, lbl_804533B8-_SDA2_BASE_(r2)
/* 80144E60 00141DA0  90 01 00 0C */	stw r0, 0xc(r1)
/* 80144E64 00141DA4  3C 00 43 30 */	lis r0, 0x4330
/* 80144E68 00141DA8  90 01 00 08 */	stw r0, 8(r1)
/* 80144E6C 00141DAC  C8 01 00 08 */	lfd f0, 8(r1)
/* 80144E70 00141DB0  EC 20 08 28 */	fsubs f1, f0, f1
/* 80144E74 00141DB4  C0 02 99 AC */	lfs f0, lbl_804533AC-_SDA2_BASE_(r2)
/* 80144E78 00141DB8  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 80144E7C 00141DBC  40 82 00 08 */	bne lbl_80144E84
/* 80144E80 00141DC0  C0 22 99 B0 */	lfs f1, lbl_804533B0-_SDA2_BASE_(r2)
lbl_80144E84:
/* 80144E84 00141DC4  80 7F 09 1C */	lwz r3, 0x91c(r31)
/* 80144E88 00141DC8  38 80 00 03 */	li r4, 3
/* 80144E8C 00141DCC  80 BF 05 74 */	lwz r5, 0x574(r31)
/* 80144E90 00141DD0  38 DF 04 D0 */	addi r6, r31, 0x4d0
/* 80144E94 00141DD4  C0 42 99 AC */	lfs f2, lbl_804533AC-_SDA2_BASE_(r2)
/* 80144E98 00141DD8  C0 7F 04 D4 */	lfs f3, 0x4d4(r31)
/* 80144E9C 00141DDC  C0 9F 06 24 */	lfs f4, 0x624(r31)
/* 80144EA0 00141DE0  38 FF 06 7C */	addi r7, r31, 0x67c
/* 80144EA4 00141DE4  39 1F 01 0C */	addi r8, r31, 0x10c
/* 80144EA8 00141DE8  39 20 00 00 */	li r9, 0
/* 80144EAC 00141DEC  C0 A2 99 A8 */	lfs f5, lbl_804533A8-_SDA2_BASE_(r2)
/* 80144EB0 00141DF0  3D 40 80 42 */	lis r10, lbl_804248D0@ha
/* 80144EB4 00141DF4  39 4A 48 D0 */	addi r10, r10, lbl_804248D0@l
/* 80144EB8 00141DF8  4B EE 9A 59 */	bl dComIfGd_setShadow__FUlScP8J3DModelP4cXyzffffR13cBgS_PolyInfoP12dKy_tevstr_csfP9_GXTexObj
/* 80144EBC 00141DFC  90 7F 09 1C */	stw r3, 0x91c(r31)
lbl_80144EC0:
/* 80144EC0 00141E00  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 80144EC4 00141E04  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 80144EC8 00141E08  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80144ECC 00141E0C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80144ED0 00141E10  7C 08 03 A6 */	mtlr r0
/* 80144ED4 00141E14  38 21 00 30 */	addi r1, r1, 0x30
/* 80144ED8 00141E18  4E 80 00 20 */	blr 
/* 80144EDC 00141E1C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80144EE0 00141E20  7C 08 02 A6 */	mflr r0
/* 80144EE4 00141E24  90 01 00 24 */	stw r0, 0x24(r1)
/* 80144EE8 00141E28  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80144EEC 00141E2C  7C 7F 1B 78 */	mr r31, r3
/* 80144EF0 00141E30  80 03 05 80 */	lwz r0, 0x580(r3)
/* 80144EF4 00141E34  28 00 00 00 */	cmplwi r0, 0
/* 80144EF8 00141E38  41 82 00 6C */	beq lbl_80144F64
/* 80144EFC 00141E3C  81 83 05 68 */	lwz r12, 0x568(r3)
/* 80144F00 00141E40  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 80144F04 00141E44  7D 89 03 A6 */	mtctr r12
/* 80144F08 00141E48  4E 80 04 21 */	bctrl 
/* 80144F0C 00141E4C  7C 60 07 74 */	extsb r0, r3
/* 80144F10 00141E50  2C 00 FF FF */	cmpwi r0, -1
/* 80144F14 00141E54  41 82 00 38 */	beq lbl_80144F4C
/* 80144F18 00141E58  80 7F 05 74 */	lwz r3, 0x574(r31)
/* 80144F1C 00141E5C  80 83 00 04 */	lwz r4, 4(r3)
/* 80144F20 00141E60  80 7F 05 80 */	lwz r3, 0x580(r31)
/* 80144F24 00141E64  38 84 00 58 */	addi r4, r4, 0x58
/* 80144F28 00141E68  C8 22 99 C0 */	lfd f1, lbl_804533C0-_SDA2_BASE_(r2)
/* 80144F2C 00141E6C  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80144F30 00141E70  90 01 00 0C */	stw r0, 0xc(r1)
/* 80144F34 00141E74  3C 00 43 30 */	lis r0, 0x4330
/* 80144F38 00141E78  90 01 00 08 */	stw r0, 8(r1)
/* 80144F3C 00141E7C  C8 01 00 08 */	lfd f0, 8(r1)
/* 80144F40 00141E80  EC 20 08 28 */	fsubs f1, f0, f1
/* 80144F44 00141E84  4B EC 88 65 */	bl entry__13mDoExt_brkAnmFP16J3DMaterialTablef
/* 80144F48 00141E88  48 00 00 1C */	b lbl_80144F64
lbl_80144F4C:
/* 80144F4C 00141E8C  80 7F 05 74 */	lwz r3, 0x574(r31)
/* 80144F50 00141E90  80 83 00 04 */	lwz r4, 4(r3)
/* 80144F54 00141E94  80 7F 05 80 */	lwz r3, 0x580(r31)
/* 80144F58 00141E98  C0 23 00 10 */	lfs f1, 0x10(r3)
/* 80144F5C 00141E9C  38 84 00 58 */	addi r4, r4, 0x58
/* 80144F60 00141EA0  4B EC 88 49 */	bl entry__13mDoExt_brkAnmFP16J3DMaterialTablef
lbl_80144F64:
/* 80144F64 00141EA4  80 1F 05 88 */	lwz r0, 0x588(r31)
/* 80144F68 00141EA8  28 00 00 00 */	cmplwi r0, 0
/* 80144F6C 00141EAC  41 82 00 60 */	beq lbl_80144FCC
/* 80144F70 00141EB0  7F E3 FB 78 */	mr r3, r31
/* 80144F74 00141EB4  81 9F 05 68 */	lwz r12, 0x568(r31)
/* 80144F78 00141EB8  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 80144F7C 00141EBC  7D 89 03 A6 */	mtctr r12
/* 80144F80 00141EC0  4E 80 04 21 */	bctrl 
/* 80144F84 00141EC4  7C 65 07 74 */	extsb r5, r3
/* 80144F88 00141EC8  2C 05 FF FF */	cmpwi r5, -1
/* 80144F8C 00141ECC  41 82 00 1C */	beq lbl_80144FA8
/* 80144F90 00141ED0  80 7F 05 74 */	lwz r3, 0x574(r31)
/* 80144F94 00141ED4  80 83 00 04 */	lwz r4, 4(r3)
/* 80144F98 00141ED8  80 7F 05 88 */	lwz r3, 0x588(r31)
/* 80144F9C 00141EDC  38 84 00 58 */	addi r4, r4, 0x58
/* 80144FA0 00141EE0  4B EC 86 49 */	bl entry__13mDoExt_btpAnmFP16J3DMaterialTables
/* 80144FA4 00141EE4  48 00 00 28 */	b lbl_80144FCC
lbl_80144FA8:
/* 80144FA8 00141EE8  80 7F 05 74 */	lwz r3, 0x574(r31)
/* 80144FAC 00141EEC  80 83 00 04 */	lwz r4, 4(r3)
/* 80144FB0 00141EF0  80 7F 05 88 */	lwz r3, 0x588(r31)
/* 80144FB4 00141EF4  38 84 00 58 */	addi r4, r4, 0x58
/* 80144FB8 00141EF8  C0 03 00 10 */	lfs f0, 0x10(r3)
/* 80144FBC 00141EFC  FC 00 00 1E */	fctiwz f0, f0
/* 80144FC0 00141F00  D8 01 00 08 */	stfd f0, 8(r1)
/* 80144FC4 00141F04  80 A1 00 0C */	lwz r5, 0xc(r1)
/* 80144FC8 00141F08  4B EC 86 21 */	bl entry__13mDoExt_btpAnmFP16J3DMaterialTables
lbl_80144FCC:
/* 80144FCC 00141F0C  80 7F 05 78 */	lwz r3, 0x578(r31)
/* 80144FD0 00141F10  28 03 00 00 */	cmplwi r3, 0
/* 80144FD4 00141F14  41 82 00 18 */	beq lbl_80144FEC
/* 80144FD8 00141F18  80 9F 05 74 */	lwz r4, 0x574(r31)
/* 80144FDC 00141F1C  80 84 00 04 */	lwz r4, 4(r4)
/* 80144FE0 00141F20  C0 23 00 10 */	lfs f1, 0x10(r3)
/* 80144FE4 00141F24  38 84 00 58 */	addi r4, r4, 0x58
/* 80144FE8 00141F28  4B EC 86 F1 */	bl entry__13mDoExt_btkAnmFP16J3DMaterialTablef
lbl_80144FEC:
/* 80144FEC 00141F2C  80 7F 05 84 */	lwz r3, 0x584(r31)
/* 80144FF0 00141F30  28 03 00 00 */	cmplwi r3, 0
/* 80144FF4 00141F34  41 82 00 14 */	beq lbl_80145008
/* 80144FF8 00141F38  80 9F 05 74 */	lwz r4, 0x574(r31)
/* 80144FFC 00141F3C  80 84 00 04 */	lwz r4, 4(r4)
/* 80145000 00141F40  C0 23 00 10 */	lfs f1, 0x10(r3)
/* 80145004 00141F44  4B EC 89 C9 */	bl entry__13mDoExt_bckAnmFP12J3DModelDataf
lbl_80145008:
/* 80145008 00141F48  80 7F 05 7C */	lwz r3, 0x57c(r31)
/* 8014500C 00141F4C  28 03 00 00 */	cmplwi r3, 0
/* 80145010 00141F50  41 82 00 18 */	beq lbl_80145028
/* 80145014 00141F54  80 9F 05 74 */	lwz r4, 0x574(r31)
/* 80145018 00141F58  80 84 00 04 */	lwz r4, 4(r4)
/* 8014501C 00141F5C  C0 23 00 10 */	lfs f1, 0x10(r3)
/* 80145020 00141F60  38 84 00 58 */	addi r4, r4, 0x58
/* 80145024 00141F64  4B EC 84 F5 */	bl entry__13mDoExt_bpkAnmFP16J3DMaterialTablef
lbl_80145028:
/* 80145028 00141F68  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8014502C 00141F6C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80145030 00141F70  7C 08 03 A6 */	mtlr r0
/* 80145034 00141F74  38 21 00 20 */	addi r1, r1, 0x20
/* 80145038 00141F78  4E 80 00 20 */	blr 

.global animPlay__12daItemBase_cFffffff
animPlay__12daItemBase_cFffffff:
/* 8014503C 00141F7C  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80145040 00141F80  7C 08 02 A6 */	mflr r0
/* 80145044 00141F84  90 01 00 44 */	stw r0, 0x44(r1)
/* 80145048 00141F88  39 61 00 40 */	addi r11, r1, 0x40
/* 8014504C 00141F8C  48 21 D0 F1 */	bl _savefpr_27
/* 80145050 00141F90  93 E1 00 14 */	stw r31, 0x14(r1)
/* 80145054 00141F94  7C 7F 1B 78 */	mr r31, r3
/* 80145058 00141F98  FF 60 08 90 */	fmr f27, f1
/* 8014505C 00141F9C  FF 80 10 90 */	fmr f28, f2
/* 80145060 00141FA0  FF A0 18 90 */	fmr f29, f3
/* 80145064 00141FA4  FF C0 28 90 */	fmr f30, f5
/* 80145068 00141FA8  FF E0 30 90 */	fmr f31, f6
/* 8014506C 00141FAC  80 03 05 80 */	lwz r0, 0x580(r3)
/* 80145070 00141FB0  28 00 00 00 */	cmplwi r0, 0
/* 80145074 00141FB4  41 82 00 30 */	beq lbl_801450A4
/* 80145078 00141FB8  81 83 05 68 */	lwz r12, 0x568(r3)
/* 8014507C 00141FBC  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 80145080 00141FC0  7D 89 03 A6 */	mtctr r12
/* 80145084 00141FC4  4E 80 04 21 */	bctrl 
/* 80145088 00141FC8  7C 60 07 74 */	extsb r0, r3
/* 8014508C 00141FCC  2C 00 FF FF */	cmpwi r0, -1
/* 80145090 00141FD0  40 82 00 14 */	bne lbl_801450A4
/* 80145094 00141FD4  80 7F 05 80 */	lwz r3, 0x580(r31)
/* 80145098 00141FD8  D3 C3 00 0C */	stfs f30, 0xc(r3)
/* 8014509C 00141FDC  80 7F 05 80 */	lwz r3, 0x580(r31)
/* 801450A0 00141FE0  4B EC 83 89 */	bl play__14mDoExt_baseAnmFv
lbl_801450A4:
/* 801450A4 00141FE4  80 1F 05 88 */	lwz r0, 0x588(r31)
/* 801450A8 00141FE8  28 00 00 00 */	cmplwi r0, 0
/* 801450AC 00141FEC  41 82 00 34 */	beq lbl_801450E0
/* 801450B0 00141FF0  7F E3 FB 78 */	mr r3, r31
/* 801450B4 00141FF4  81 9F 05 68 */	lwz r12, 0x568(r31)
/* 801450B8 00141FF8  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 801450BC 00141FFC  7D 89 03 A6 */	mtctr r12
/* 801450C0 00142000  4E 80 04 21 */	bctrl 
/* 801450C4 00142004  7C 60 07 74 */	extsb r0, r3
/* 801450C8 00142008  2C 00 FF FF */	cmpwi r0, -1
/* 801450CC 0014200C  40 82 00 14 */	bne lbl_801450E0
/* 801450D0 00142010  80 7F 05 88 */	lwz r3, 0x588(r31)
/* 801450D4 00142014  D3 E3 00 0C */	stfs f31, 0xc(r3)
/* 801450D8 00142018  80 7F 05 88 */	lwz r3, 0x588(r31)
/* 801450DC 0014201C  4B EC 83 4D */	bl play__14mDoExt_baseAnmFv
lbl_801450E0:
/* 801450E0 00142020  80 7F 05 78 */	lwz r3, 0x578(r31)
/* 801450E4 00142024  28 03 00 00 */	cmplwi r3, 0
/* 801450E8 00142028  41 82 00 10 */	beq lbl_801450F8
/* 801450EC 0014202C  D3 63 00 0C */	stfs f27, 0xc(r3)
/* 801450F0 00142030  80 7F 05 78 */	lwz r3, 0x578(r31)
/* 801450F4 00142034  4B EC 83 35 */	bl play__14mDoExt_baseAnmFv
lbl_801450F8:
/* 801450F8 00142038  80 7F 05 7C */	lwz r3, 0x57c(r31)
/* 801450FC 0014203C  28 03 00 00 */	cmplwi r3, 0
/* 80145100 00142040  41 82 00 10 */	beq lbl_80145110
/* 80145104 00142044  D3 83 00 0C */	stfs f28, 0xc(r3)
/* 80145108 00142048  80 7F 05 7C */	lwz r3, 0x57c(r31)
/* 8014510C 0014204C  4B EC 83 1D */	bl play__14mDoExt_baseAnmFv
lbl_80145110:
/* 80145110 00142050  80 7F 05 84 */	lwz r3, 0x584(r31)
/* 80145114 00142054  28 03 00 00 */	cmplwi r3, 0
/* 80145118 00142058  41 82 00 10 */	beq lbl_80145128
/* 8014511C 0014205C  D3 A3 00 0C */	stfs f29, 0xc(r3)
/* 80145120 00142060  80 7F 05 84 */	lwz r3, 0x584(r31)
/* 80145124 00142064  4B EC 83 05 */	bl play__14mDoExt_baseAnmFv
lbl_80145128:
/* 80145128 00142068  39 61 00 40 */	addi r11, r1, 0x40
/* 8014512C 0014206C  48 21 D0 5D */	bl _restfpr_27
/* 80145130 00142070  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 80145134 00142074  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80145138 00142078  7C 08 03 A6 */	mtlr r0
/* 8014513C 0014207C  38 21 00 40 */	addi r1, r1, 0x40
/* 80145140 00142080  4E 80 00 20 */	blr 
/* 80145144 00142084  3C A0 80 3B */	lis r5, lbl_803AED78@ha
/* 80145148 00142088  38 A5 ED 78 */	addi r5, r5, lbl_803AED78@l
/* 8014514C 0014208C  88 03 09 2A */	lbz r0, 0x92a(r3)
/* 80145150 00142090  54 00 10 3A */	slwi r0, r0, 2
/* 80145154 00142094  7C 65 02 14 */	add r3, r5, r0
/* 80145158 00142098  88 03 00 03 */	lbz r0, 3(r3)
/* 8014515C 0014209C  7C 83 00 38 */	and r3, r4, r0
/* 80145160 001420A0  4E 80 00 20 */	blr 
/* 80145164 001420A4  3C 80 80 3B */	lis r4, lbl_803AC5A0@ha
/* 80145168 001420A8  38 84 C5 A0 */	addi r4, r4, lbl_803AC5A0@l
/* 8014516C 001420AC  88 03 09 2A */	lbz r0, 0x92a(r3)
/* 80145170 001420B0  1C 00 00 18 */	mulli r0, r0, 0x18
/* 80145174 001420B4  7C 64 02 14 */	add r3, r4, r0
/* 80145178 001420B8  88 63 00 0E */	lbz r3, 0xe(r3)
/* 8014517C 001420BC  4E 80 00 20 */	blr 
/* 80145180 001420C0  3C 80 80 3B */	lis r4, lbl_803AC5A0@ha
/* 80145184 001420C4  38 84 C5 A0 */	addi r4, r4, lbl_803AC5A0@l
/* 80145188 001420C8  88 03 09 2A */	lbz r0, 0x92a(r3)
/* 8014518C 001420CC  1C 00 00 18 */	mulli r0, r0, 0x18
/* 80145190 001420D0  7C 64 02 14 */	add r3, r4, r0
/* 80145194 001420D4  88 63 00 0F */	lbz r3, 0xf(r3)
/* 80145198 001420D8  4E 80 00 20 */	blr 
/* 8014519C 001420DC  88 03 09 2A */	lbz r0, 0x92a(r3)
/* 801451A0 001420E0  54 00 10 3A */	slwi r0, r0, 2
/* 801451A4 001420E4  3C 60 80 3B */	lis r3, lbl_803AED78@ha
/* 801451A8 001420E8  38 63 ED 78 */	addi r3, r3, lbl_803AED78@l
/* 801451AC 001420EC  7C 63 00 AE */	lbzx r3, r3, r0
/* 801451B0 001420F0  4E 80 00 20 */	blr 
/* 801451B4 001420F4  3C 80 80 3B */	lis r4, lbl_803AED78@ha
/* 801451B8 001420F8  38 84 ED 78 */	addi r4, r4, lbl_803AED78@l
/* 801451BC 001420FC  88 03 09 2A */	lbz r0, 0x92a(r3)
/* 801451C0 00142100  54 00 10 3A */	slwi r0, r0, 2
/* 801451C4 00142104  7C 64 02 14 */	add r3, r4, r0
/* 801451C8 00142108  88 63 00 01 */	lbz r3, 1(r3)
/* 801451CC 0014210C  4E 80 00 20 */	blr 
/* 801451D0 00142110  3C 80 80 3B */	lis r4, lbl_803AED78@ha
/* 801451D4 00142114  38 84 ED 78 */	addi r4, r4, lbl_803AED78@l
/* 801451D8 00142118  88 03 09 2A */	lbz r0, 0x92a(r3)
/* 801451DC 0014211C  54 00 10 3A */	slwi r0, r0, 2
/* 801451E0 00142120  7C 64 02 14 */	add r3, r4, r0
/* 801451E4 00142124  88 63 00 02 */	lbz r3, 2(r3)
/* 801451E8 00142128  4E 80 00 20 */	blr 

