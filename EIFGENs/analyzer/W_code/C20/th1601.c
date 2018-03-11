/*
 * Code for class THERE_EXISTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1601_17508(EIF_REFERENCE);
extern void F1601_17509(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit1601(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {THERE_EXISTS}.make_exists */
void F1601_17508 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make_exists";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1600, Current, 0, 0, 24255);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1600, Current, 24255);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 14712, 0xF80000E7, 0); /* children */
	tr1 = RTLNSMART(RTWCT(14712, dtype, Dftype(Current)).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(4556, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(14712, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 14711, 0xF8000636, 0); /* right */
	tr1 = RTLN(eif_new_type(1618, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(14756, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(14711, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 14712, 0xF80000E7, 0); /* children */
	tr1 = RTMS_EX_H("\?",1,63);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(14712, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 14713, 0xF80000E7, 0); /* children_status */
	tr1 = RTMS_EX_H("CONSTANT",8,542880084);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(14713, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 14714, 0xF80000E7, 0); /* str */
	tr1 = RTMS_EX_H("|| ",3,8158240);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(14714, dtype)) = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {THERE_EXISTS}.accept */
void F1601_17509 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "accept";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1600, Current, 0, 1, 24256);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1600, Current, 24256);
	RTCC(arg1, 1600, l_feature_name, 1, eif_new_type(1269, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ur1 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10828, "visit_exists", arg1))(arg1, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef arg1
}

void EIF_Minit1601 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
