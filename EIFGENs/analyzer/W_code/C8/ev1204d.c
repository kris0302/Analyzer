/*
 * Class EV_BMP_FORMAT
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_1204 [] = {0xFF01,231,0xFFFF};
static const EIF_TYPE_INDEX egt_1_1204 [] = {0xFF01,244,1203,0xFFFF};
static const EIF_TYPE_INDEX egt_2_1204 [] = {0xFF01,1203,0xFFFF};
static const EIF_TYPE_INDEX egt_3_1204 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_1204 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_1204 [] = {0xFF01,1203,0xFFFF};
static const EIF_TYPE_INDEX egt_6_1204 [] = {0xFF01,1203,0xFFFF};
static const EIF_TYPE_INDEX egt_7_1204 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_1204 [] = {0xFF01,14,0xFFFF};
static const EIF_TYPE_INDEX egt_9_1204 [] = {0xFF01,231,0xFFFF};
static const EIF_TYPE_INDEX egt_10_1204 [] = {0xFF01,231,0xFFFF};
static const EIF_TYPE_INDEX egt_11_1204 [] = {0xFF01,15,0xFFFF};
static const EIF_TYPE_INDEX egt_12_1204 [] = {0xFF01,1203,0xFFFF};
static const EIF_TYPE_INDEX egt_13_1204 [] = {0xFF01,237,0xFFFF};


static const struct desc_info desc_1204[] = {
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_1204), 0, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_1204), 1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 9, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_1204), 10, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_1204), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_1204), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_1204), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_1204), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_1204), 17, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_1204), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_1204), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_1204), 22, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 23, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_1204), 24, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0967 /*1203*/), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01C5 /*226*/), 29, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_1204), 30, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 18725, 0},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 18726, 4},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 18727, 8},
	{EIF_GENERIC(egt_13_1204), 18734, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18728, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18729, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18730, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18731, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18732, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18733, 0xFFFFFFFF},
};
void Init1204(void)
{
	IDSC(desc_1204, 0, 1203);
	IDSC(desc_1204 + 1, 1, 1203);
	IDSC(desc_1204 + 32, 627, 1203);
}


#ifdef __cplusplus
}
#endif
