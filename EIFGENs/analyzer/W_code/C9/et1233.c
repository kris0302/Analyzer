/*
 * Code for class ETF_INPUT_HANDLER_INTERFACE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1233_12754(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1233_12755(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1233_12756(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1233_12757(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1233_12758(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1233_12759(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1233_12760(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1233_12761(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1233_12762(EIF_REFERENCE);
extern void F1233_12763(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1233_12764(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1233_12765(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit1233(void);

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

/* {ETF_INPUT_HANDLER_INTERFACE}.make_without_running */
void F1233_12754 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "make_without_running";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1232, Current, 0, 2, 18976);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1232, Current, 18976);
	RTCC(arg1, 1232, l_feature_name, 1, eif_new_type(231, 0x01), 0x01);
	RTCC(arg2, 1232, l_feature_name, 2, eif_new_type(1147, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 10526, 0xF8000824, 0); /* on_error */
	tr1 = RTLNSMART(RTWCT(10526, dtype, Dftype(Current)).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(10526, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 10524, 0xF80000E7, 0); /* input_string */
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(10524, dtype)) = (EIF_REFERENCE) RTCCL(arg1);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 10525, 0xF800047B, 0); /* abstract_ui */
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + RTWA(10525, dtype)) = (EIF_REFERENCE) RTCCL(arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {ETF_INPUT_HANDLER_INTERFACE}.make */
void F1233_12755 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,ur1);
	RTLR(3,ur2);
	RTLR(4,Current);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1232, Current, 0, 2, 18977);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1232, Current, 18977);
	RTCC(arg1, 1232, l_feature_name, 1, eif_new_type(231, 0x01), 0x01);
	RTCC(arg2, 1232, l_feature_name, 2, eif_new_type(1147, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(10520, dtype))(Current, ur1x, ur2x);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(10529, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef ur1
#undef ur2
#undef arg2
#undef arg1
}

/* {ETF_INPUT_HANDLER_INTERFACE}.etf_evt_out */
EIF_TYPED_VALUE F1233_12756 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "etf_evt_out";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLR(4,Result);
	RTLR(5,ur1);
	RTLR(6,tr2);
	RTLR(7,Current);
	RTLIU(8);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 1232, Current, 3, 1, 18978);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1232, Current, 18978);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,185,0xFF01,231,0xFF01,263,0xFF01,1234,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 1232, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 2, 0xF80000E7, 0, 0); /* loc2 */
	tr1 = eif_boxed_item(arg1,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 3, 0xF8000107, 0, 0); /* loc3 */
	tr1 = eif_boxed_item(arg1,2);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(Current, 0, 0xF80000E7, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(231, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(4556, Dtype(tr1)))(tr1);
	RTNHOOK(3,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	tr1 = RTMS_EX_H("(",1,40);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4634, "plus", loc2))(loc2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4734, "append", Result))(Result, ur1x);
	RTHOOK(5);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = *(EIF_INTEGER_32 *)(loc3 + RTVA(2849, "lower", loc3));
	loc1 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(6);
		ti4_1 = *(EIF_INTEGER_32 *)(loc3 + RTVA(2848, "upper", loc3));
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		RTHOOK(7);
		ui4_1 = loc1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1741, "item", loc3))(loc3, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10532, "src_out", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(7,1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4572, "is_empty", tr2))(tr2)).it_b);
		if (tb1) {
			RTHOOK(8);
			ui4_1 = loc1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1741, "item", loc3))(loc3, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(28, "out", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4734, "append", Result))(Result, ur1x);
		} else {
			RTHOOK(9);
			ui4_1 = loc1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1741, "item", loc3))(loc3, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10532, "src_out", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4734, "append", Result))(Result, ur1x);
		}
		RTHOOK(10);
		ti4_2 = *(EIF_INTEGER_32 *)(loc3 + RTVA(2848, "upper", loc3));
		if ((EIF_BOOLEAN) (loc1 < ti4_2)) {
			RTHOOK(11);
			tr1 = RTMS_EX_H(", ",2,11296);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4734, "append", Result))(Result, ur1x);
		}
		RTHOOK(12);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	RTHOOK(13);
	tr1 = RTMS_EX_H(")",1,41);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4734, "append", Result))(Result, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef arg1
}

/* {ETF_INPUT_HANDLER_INTERFACE}.etf_error */
EIF_TYPED_VALUE F1233_12757 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(10523,Dtype(Current)));
	return r;
}


/* {ETF_INPUT_HANDLER_INTERFACE}.input_string */
EIF_TYPED_VALUE F1233_12758 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(10524,Dtype(Current)));
	return r;
}


/* {ETF_INPUT_HANDLER_INTERFACE}.abstract_ui */
EIF_TYPED_VALUE F1233_12759 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(10525,Dtype(Current)));
	return r;
}


/* {ETF_INPUT_HANDLER_INTERFACE}.on_error */
EIF_TYPED_VALUE F1233_12760 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(10526,Dtype(Current)));
	return r;
}


/* {ETF_INPUT_HANDLER_INTERFACE}.input_cmds_syntax_err_msg */
RTOID (F1233_12761)


EIF_TYPED_VALUE F1233_12761 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F1233_12761,18984,RTMS_EX_H("Syntax Error: specification of command executions cannot be parsed",66,187532644));
}

/* {ETF_INPUT_HANDLER_INTERFACE}.input_cmds_type_err_msg */
RTOID (F1233_12762)


EIF_TYPED_VALUE F1233_12762 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F1233_12762,18985,RTMS_EX_H("Type Error: specification of command executions is not type-correct",67,295559028));
}

/* {ETF_INPUT_HANDLER_INTERFACE}.parse_and_validate_input_string */
void F1233_12763 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "parse_and_validate_input_string";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(11);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLR(5,tr3);
	RTLR(6,ur2);
	RTLR(7,loc3);
	RTLR(8,loc4);
	RTLR(9,loc2);
	RTLR(10,tr4);
	RTLIU(11);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 1232, Current, 4, 0, 18985);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1232, Current, 18985);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF8000775, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(1909, 0x01).id);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10518, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10515, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(18057, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10524, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(18070, "parse_string", loc1))(loc1, ur1x);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18059, "last_error", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4572, "is_empty", tr1))(tr1)).it_b);
	if (tb1) {
		RTHOOK(4);
		RTDBGAL(Current, 3, 0xF80000E7, 0, 0); /* loc3 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18058, "event_trace", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		loc3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10531, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(5);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4572, "is_empty", loc3))(loc3)).it_b);
		if (tb1) {
			RTHOOK(6);
			RTDBGAL(Current, 1, 0xF800011D, 0, 0); /* loc4 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18058, "event_trace", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2501, "new_cursor", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc4 = (EIF_REFERENCE) RTCCL(tr2);
			for (;;) {
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1677, "after", loc4))(loc4)).it_b);
				if (tb1) break;
				RTHOOK(7);
				RTDBGAL(Current, 2, 0xF800054D, 0, 0); /* loc2 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1676, "item", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr1);
				loc2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10530, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTHOOK(8);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10525, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(8,1);
				ur1 = RTCCL(loc2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9303, "put", tr1))(tr1, ur1x);
				RTHOOK(9);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1678, "forth", loc4))(loc4);
			}
		} else {
			RTHOOK(10);
			RTDBGAA(Current, dtype, 10523, 0x04000000, 1); /* etf_error */
			*(EIF_BOOLEAN *)(Current + RTWA(10523, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			RTHOOK(11);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10526, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(11,1);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,185,0xFF01,231,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr2 = RTLNTS(typres0.id, 2, 0);
			}
			tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10528, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			tr4 = RTMS_EX_H("\012",1,10);
			ur1 = tr4;
			tr4 = ((up3x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4634, "plus", tr3))(tr3, ur1x)), (((up3x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up3x.it_r = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.it_r);
			ur1 = RTCCL(loc3);
			tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4634, "plus", tr4))(tr4, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
			RTAR(tr2,tr3);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7615, "notify", tr1))(tr1, ur1x);
		}
	} else {
		RTHOOK(12);
		RTDBGAA(Current, dtype, 10523, 0x04000000, 1); /* etf_error */
		*(EIF_BOOLEAN *)(Current + RTWA(10523, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(13);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10526, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(13,1);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,185,0xFF01,231,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr2 = RTLNTS(typres0.id, 2, 0);
		}
		tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10527, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		tr4 = RTMS_EX_H("\012",1,10);
		ur1 = tr4;
		tr4 = ((up3x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4634, "plus", tr3))(tr3, ur1x)), (((up3x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up3x.it_r = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.it_r);
		tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18059, "last_error", loc1))(loc1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = RTCCL(tr3);
		tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4634, "plus", tr4))(tr4, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
		RTAR(tr2,tr3);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7615, "notify", tr1))(tr1, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef up2
#undef up3
#undef ur1
#undef ur2
}

/* {ETF_INPUT_HANDLER_INTERFACE}.evt_to_cmd */
EIF_TYPED_VALUE F1233_12764 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "evt_to_cmd";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(15);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLR(5,tr2);
	RTLR(6,ur1);
	RTLR(7,Current);
	RTLR(8,tr3);
	RTLR(9,ur2);
	RTLR(10,tr4);
	RTLR(11,ur3);
	RTLR(12,Result);
	RTLR(13,loc4);
	RTLR(14,loc5);
	RTLIU(15);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	
	RTEAA(l_feature_name, 1232, Current, 5, 1, 18986);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1232, Current, 18986);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,185,0xFF01,231,0xFF01,263,0xFF01,1234,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg1, 1232, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF80000E7, 0, 0); /* loc1 */
	tr1 = eif_boxed_item(arg1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 2, 0xF8000107, 0, 0); /* loc2 */
	tr1 = eif_boxed_item(arg1,2);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(Current, 3, 0xF800054F, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(1359, 0x01).id);
	tr2 = RTMS_EX_H("dummy",5,1970873721);
	ur1 = tr2;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,185,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3 = RTLNTS(typres0.id, 1, 1);
	}
	ur2 = tr3;
	tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10525, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = RTCCL(tr4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(11896, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
	RTNHOOK(3,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	if (RTEQ(loc1, RTMS_EX_H("type_check",10,1152524907))) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) 1) {
			RTHOOK(6);
			RTDBGAL(Current, 0, 0xF800054D, 0,0); /* Result */
			tr1 = RTLN(eif_new_type(1363, 0x01).id);
			tr2 = RTMS_EX_H("type_check",10,1152524907);
			ur1 = tr2;
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,185,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr3 = RTLNTS(typres0.id, 1, 1);
			}
			ur2 = tr3;
			tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10525, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur3 = RTCCL(tr4);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(11896, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
			RTNHOOK(6,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
		} else {
			RTHOOK(7);
			RTDBGAL(Current, 0, 0xF800054D, 0,0); /* Result */
			Result = (EIF_REFERENCE) RTCCL(loc3);
		}
	} else {
		RTHOOK(8);
		if (RTEQ(loc1, RTMS_EX_H("evaluate",8,1446040677))) {
			RTHOOK(9);
			if ((EIF_BOOLEAN) 1) {
				RTHOOK(10);
				RTDBGAL(Current, 0, 0xF800054D, 0,0); /* Result */
				tr1 = RTLN(eif_new_type(1361, 0x01).id);
				tr2 = RTMS_EX_H("evaluate",8,1446040677);
				ur1 = tr2;
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,185,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					tr3 = RTLNTS(typres0.id, 1, 1);
				}
				ur2 = tr3;
				tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10525, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur3 = RTCCL(tr4);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(11896, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
				RTNHOOK(10,1);
				Result = (EIF_REFERENCE) RTCCL(tr1);
			} else {
				RTHOOK(11);
				RTDBGAL(Current, 0, 0xF800054D, 0,0); /* Result */
				Result = (EIF_REFERENCE) RTCCL(loc3);
			}
		} else {
			RTHOOK(12);
			if (RTEQ(loc1, RTMS_EX_H("reset",5,1702936948))) {
				RTHOOK(13);
				if ((EIF_BOOLEAN) 1) {
					RTHOOK(14);
					RTDBGAL(Current, 0, 0xF800054D, 0,0); /* Result */
					tr1 = RTLN(eif_new_type(1409, 0x01).id);
					tr2 = RTMS_EX_H("reset",5,1702936948);
					ur1 = tr2;
					{
						static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,185,0xFFFF};
						EIF_TYPE typres0;
						static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
						
						typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
						tr3 = RTLNTS(typres0.id, 1, 1);
					}
					ur2 = tr3;
					tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10525, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ur3 = RTCCL(tr4);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(11896, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
					RTNHOOK(14,1);
					Result = (EIF_REFERENCE) RTCCL(tr1);
				} else {
					RTHOOK(15);
					RTDBGAL(Current, 0, 0xF800054D, 0,0); /* Result */
					Result = (EIF_REFERENCE) RTCCL(loc3);
				}
			} else {
				RTHOOK(16);
				if (RTEQ(loc1, RTMS_EX_H("boolean_constant",16,1775360372))) {
					RTHOOK(17);
					tb1 = '\0';
					ui4_1 = ((EIF_INTEGER_32) 1L);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1741, "item", loc2))(loc2, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc4 = RTCCL(tr1);
					loc4 = RTRV(eif_new_type(1245, 0x01),loc4);
					if (EIF_TEST(loc4)) {
						tb1 = (EIF_BOOLEAN) 1;
					}
					if (tb1) {
						RTHOOK(18);
						RTDBGAL(Current, 0, 0xF800054D, 0,0); /* Result */
						tr1 = RTLN(eif_new_type(1407, 0x01).id);
						tr2 = RTMS_EX_H("boolean_constant",16,1775360372);
						ur1 = tr2;
						{
							static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,185,202,0xFFFF};
							EIF_TYPE typres0;
							static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
							
							typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
							tr3 = RTLNTS(typres0.id, 2, 1);
						}
						tb1 = *(EIF_BOOLEAN *)(loc4 + RTVA(10557, "value", loc4));
						((EIF_TYPED_VALUE *)tr3+1)->it_b = tb1;
						ur2 = RTCCL(tr3);
						tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10525, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ur3 = RTCCL(tr4);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(11896, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
						RTNHOOK(18,1);
						Result = (EIF_REFERENCE) RTCCL(tr1);
					} else {
						RTHOOK(19);
						RTDBGAL(Current, 0, 0xF800054D, 0,0); /* Result */
						Result = (EIF_REFERENCE) RTCCL(loc3);
					}
				} else {
					RTHOOK(20);
					if (RTEQ(loc1, RTMS_EX_H("integer_constant",16,1643208564))) {
						RTHOOK(21);
						tb1 = '\0';
						ui4_1 = ((EIF_INTEGER_32) 1L);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1741, "item", loc2))(loc2, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						loc5 = RTCCL(tr1);
						loc5 = RTRV(eif_new_type(1244, 0x01),loc5);
						if (EIF_TEST(loc5)) {
							tb1 = (EIF_BOOLEAN) 1;
						}
						if (tb1) {
							RTHOOK(22);
							RTDBGAL(Current, 0, 0xF800054D, 0,0); /* Result */
							tr1 = RTLN(eif_new_type(1383, 0x01).id);
							tr2 = RTMS_EX_H("integer_constant",16,1643208564);
							ur1 = tr2;
							{
								static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,185,199,0xFFFF};
								EIF_TYPE typres0;
								static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
								
								typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
								tr3 = RTLNTS(typres0.id, 2, 1);
							}
							ti8_1 = *(EIF_INTEGER_64 *)(loc5 + RTVA(10555, "value", loc5));
							((EIF_TYPED_VALUE *)tr3+1)->it_i8 = ti8_1;
							ur2 = RTCCL(tr3);
							tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10525, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							ur3 = RTCCL(tr4);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(11896, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
							RTNHOOK(22,1);
							Result = (EIF_REFERENCE) RTCCL(tr1);
						} else {
							RTHOOK(23);
							RTDBGAL(Current, 0, 0xF800054D, 0,0); /* Result */
							Result = (EIF_REFERENCE) RTCCL(loc3);
						}
					} else {
						RTHOOK(24);
						if (RTEQ(loc1, RTMS_EX_H("add",3,6382692))) {
							RTHOOK(25);
							if ((EIF_BOOLEAN) 1) {
								RTHOOK(26);
								RTDBGAL(Current, 0, 0xF800054D, 0,0); /* Result */
								tr1 = RTLN(eif_new_type(1405, 0x01).id);
								tr2 = RTMS_EX_H("add",3,6382692);
								ur1 = tr2;
								{
									static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,185,0xFFFF};
									EIF_TYPE typres0;
									static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
									
									typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
									tr3 = RTLNTS(typres0.id, 1, 1);
								}
								ur2 = tr3;
								tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10525, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								ur3 = RTCCL(tr4);
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(11896, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
								RTNHOOK(26,1);
								Result = (EIF_REFERENCE) RTCCL(tr1);
							} else {
								RTHOOK(27);
								RTDBGAL(Current, 0, 0xF800054D, 0,0); /* Result */
								Result = (EIF_REFERENCE) RTCCL(loc3);
							}
						} else {
							RTHOOK(28);
							if (RTEQ(loc1, RTMS_EX_H("subtract",8,897641332))) {
								RTHOOK(29);
								if ((EIF_BOOLEAN) 1) {
									RTHOOK(30);
									RTDBGAL(Current, 0, 0xF800054D, 0,0); /* Result */
									tr1 = RTLN(eif_new_type(1403, 0x01).id);
									tr2 = RTMS_EX_H("subtract",8,897641332);
									ur1 = tr2;
									{
										static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,185,0xFFFF};
										EIF_TYPE typres0;
										static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
										
										typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
										tr3 = RTLNTS(typres0.id, 1, 1);
									}
									ur2 = tr3;
									tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10525, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
									ur3 = RTCCL(tr4);
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(11896, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
									RTNHOOK(30,1);
									Result = (EIF_REFERENCE) RTCCL(tr1);
								} else {
									RTHOOK(31);
									RTDBGAL(Current, 0, 0xF800054D, 0,0); /* Result */
									Result = (EIF_REFERENCE) RTCCL(loc3);
								}
							} else {
								RTHOOK(32);
								if (RTEQ(loc1, RTMS_EX_H("multiply",8,765910137))) {
									RTHOOK(33);
									if ((EIF_BOOLEAN) 1) {
										RTHOOK(34);
										RTDBGAL(Current, 0, 0xF800054D, 0,0); /* Result */
										tr1 = RTLN(eif_new_type(1401, 0x01).id);
										tr2 = RTMS_EX_H("multiply",8,765910137);
										ur1 = tr2;
										{
											static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,185,0xFFFF};
											EIF_TYPE typres0;
											static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
											
											typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
											tr3 = RTLNTS(typres0.id, 1, 1);
										}
										ur2 = tr3;
										tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10525, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										ur3 = RTCCL(tr4);
										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(11896, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
										RTNHOOK(34,1);
										Result = (EIF_REFERENCE) RTCCL(tr1);
									} else {
										RTHOOK(35);
										RTDBGAL(Current, 0, 0xF800054D, 0,0); /* Result */
										Result = (EIF_REFERENCE) RTCCL(loc3);
									}
								} else {
									RTHOOK(36);
									if (RTEQ(loc1, RTMS_EX_H("divide",6,36553061))) {
										RTHOOK(37);
										if ((EIF_BOOLEAN) 1) {
											RTHOOK(38);
											RTDBGAL(Current, 0, 0xF800054D, 0,0); /* Result */
											tr1 = RTLN(eif_new_type(1399, 0x01).id);
											tr2 = RTMS_EX_H("divide",6,36553061);
											ur1 = tr2;
											{
												static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,185,0xFFFF};
												EIF_TYPE typres0;
												static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
												
												typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
												tr3 = RTLNTS(typres0.id, 1, 1);
											}
											ur2 = tr3;
											tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10525, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
											ur3 = RTCCL(tr4);
											(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(11896, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
											RTNHOOK(38,1);
											Result = (EIF_REFERENCE) RTCCL(tr1);
										} else {
											RTHOOK(39);
											RTDBGAL(Current, 0, 0xF800054D, 0,0); /* Result */
											Result = (EIF_REFERENCE) RTCCL(loc3);
										}
									} else {
										RTHOOK(40);
										if (RTEQ(loc1, RTMS_EX_H("conjoin",7,293582190))) {
											RTHOOK(41);
											if ((EIF_BOOLEAN) 1) {
												RTHOOK(42);
												RTDBGAL(Current, 0, 0xF800054D, 0,0); /* Result */
												tr1 = RTLN(eif_new_type(1369, 0x01).id);
												tr2 = RTMS_EX_H("conjoin",7,293582190);
												ur1 = tr2;
												{
													static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,185,0xFFFF};
													EIF_TYPE typres0;
													static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
													
													typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
													tr3 = RTLNTS(typres0.id, 1, 1);
												}
												ur2 = tr3;
												tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10525, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
												ur3 = RTCCL(tr4);
												(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(11896, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
												RTNHOOK(42,1);
												Result = (EIF_REFERENCE) RTCCL(tr1);
											} else {
												RTHOOK(43);
												RTDBGAL(Current, 0, 0xF800054D, 0,0); /* Result */
												Result = (EIF_REFERENCE) RTCCL(loc3);
											}
										} else {
											RTHOOK(44);
											if (RTEQ(loc1, RTMS_EX_H("disjoin",7,785140590))) {
												RTHOOK(45);
												if ((EIF_BOOLEAN) 1) {
													RTHOOK(46);
													RTDBGAL(Current, 0, 0xF800054D, 0,0); /* Result */
													tr1 = RTLN(eif_new_type(1367, 0x01).id);
													tr2 = RTMS_EX_H("disjoin",7,785140590);
													ur1 = tr2;
													{
														static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,185,0xFFFF};
														EIF_TYPE typres0;
														static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
														
														typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
														tr3 = RTLNTS(typres0.id, 1, 1);
													}
													ur2 = tr3;
													tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10525, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
													ur3 = RTCCL(tr4);
													(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(11896, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
													RTNHOOK(46,1);
													Result = (EIF_REFERENCE) RTCCL(tr1);
												} else {
													RTHOOK(47);
													RTDBGAL(Current, 0, 0xF800054D, 0,0); /* Result */
													Result = (EIF_REFERENCE) RTCCL(loc3);
												}
											} else {
												RTHOOK(48);
												if (RTEQ(loc1, RTMS_EX_H("imply",5,1836890745))) {
													RTHOOK(49);
													if ((EIF_BOOLEAN) 1) {
														RTHOOK(50);
														RTDBGAL(Current, 0, 0xF800054D, 0,0); /* Result */
														tr1 = RTLN(eif_new_type(1397, 0x01).id);
														tr2 = RTMS_EX_H("imply",5,1836890745);
														ur1 = tr2;
														{
															static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,185,0xFFFF};
															EIF_TYPE typres0;
															static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
															
															typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
															tr3 = RTLNTS(typres0.id, 1, 1);
														}
														ur2 = tr3;
														tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10525, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
														ur3 = RTCCL(tr4);
														(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(11896, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
														RTNHOOK(50,1);
														Result = (EIF_REFERENCE) RTCCL(tr1);
													} else {
														RTHOOK(51);
														RTDBGAL(Current, 0, 0xF800054D, 0,0); /* Result */
														Result = (EIF_REFERENCE) RTCCL(loc3);
													}
												} else {
													RTHOOK(52);
													if (RTEQ(loc1, RTMS_EX_H("equals",6,21281139))) {
														RTHOOK(53);
														if ((EIF_BOOLEAN) 1) {
															RTHOOK(54);
															RTDBGAL(Current, 0, 0xF800054D, 0,0); /* Result */
															tr1 = RTLN(eif_new_type(1395, 0x01).id);
															tr2 = RTMS_EX_H("equals",6,21281139);
															ur1 = tr2;
															{
																static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,185,0xFFFF};
																EIF_TYPE typres0;
																static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
																
																typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
																tr3 = RTLNTS(typres0.id, 1, 1);
															}
															ur2 = tr3;
															tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10525, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
															ur3 = RTCCL(tr4);
															(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(11896, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
															RTNHOOK(54,1);
															Result = (EIF_REFERENCE) RTCCL(tr1);
														} else {
															RTHOOK(55);
															RTDBGAL(Current, 0, 0xF800054D, 0,0); /* Result */
															Result = (EIF_REFERENCE) RTCCL(loc3);
														}
													} else {
														RTHOOK(56);
														if (RTEQ(loc1, RTMS_EX_H("greater_than",12,1624960366))) {
															RTHOOK(57);
															if ((EIF_BOOLEAN) 1) {
																RTHOOK(58);
																RTDBGAL(Current, 0, 0xF800054D, 0,0); /* Result */
																tr1 = RTLN(eif_new_type(1393, 0x01).id);
																tr2 = RTMS_EX_H("greater_than",12,1624960366);
																ur1 = tr2;
																{
																	static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,185,0xFFFF};
																	EIF_TYPE typres0;
																	static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
																	
																	typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
																	tr3 = RTLNTS(typres0.id, 1, 1);
																}
																ur2 = tr3;
																tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10525, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
																ur3 = RTCCL(tr4);
																(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(11896, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
																RTNHOOK(58,1);
																Result = (EIF_REFERENCE) RTCCL(tr1);
															} else {
																RTHOOK(59);
																RTDBGAL(Current, 0, 0xF800054D, 0,0); /* Result */
																Result = (EIF_REFERENCE) RTCCL(loc3);
															}
														} else {
															RTHOOK(60);
															if (RTEQ(loc1, RTMS_EX_H("less_than",9,2030197102))) {
																RTHOOK(61);
																if ((EIF_BOOLEAN) 1) {
																	RTHOOK(62);
																	RTDBGAL(Current, 0, 0xF800054D, 0,0); /* Result */
																	tr1 = RTLN(eif_new_type(1391, 0x01).id);
																	tr2 = RTMS_EX_H("less_than",9,2030197102);
																	ur1 = tr2;
																	{
																		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,185,0xFFFF};
																		EIF_TYPE typres0;
																		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
																		
																		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
																		tr3 = RTLNTS(typres0.id, 1, 1);
																	}
																	ur2 = tr3;
																	tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10525, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
																	ur3 = RTCCL(tr4);
																	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(11896, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
																	RTNHOOK(62,1);
																	Result = (EIF_REFERENCE) RTCCL(tr1);
																} else {
																	RTHOOK(63);
																	RTDBGAL(Current, 0, 0xF800054D, 0,0); /* Result */
																	Result = (EIF_REFERENCE) RTCCL(loc3);
																}
															} else {
																RTHOOK(64);
																if (RTEQ(loc1, RTMS_EX_H("union",5,1853302126))) {
																	RTHOOK(65);
																	if ((EIF_BOOLEAN) 1) {
																		RTHOOK(66);
																		RTDBGAL(Current, 0, 0xF800054D, 0,0); /* Result */
																		tr1 = RTLN(eif_new_type(1389, 0x01).id);
																		tr2 = RTMS_EX_H("union",5,1853302126);
																		ur1 = tr2;
																		{
																			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,185,0xFFFF};
																			EIF_TYPE typres0;
																			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
																			
																			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
																			tr3 = RTLNTS(typres0.id, 1, 1);
																		}
																		ur2 = tr3;
																		tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10525, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
																		ur3 = RTCCL(tr4);
																		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(11896, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
																		RTNHOOK(66,1);
																		Result = (EIF_REFERENCE) RTCCL(tr1);
																	} else {
																		RTHOOK(67);
																		RTDBGAL(Current, 0, 0xF800054D, 0,0); /* Result */
																		Result = (EIF_REFERENCE) RTCCL(loc3);
																	}
																} else {
																	RTHOOK(68);
																	if (RTEQ(loc1, RTMS_EX_H("intersect",9,166807668))) {
																		RTHOOK(69);
																		if ((EIF_BOOLEAN) 1) {
																			RTHOOK(70);
																			RTDBGAL(Current, 0, 0xF800054D, 0,0); /* Result */
																			tr1 = RTLN(eif_new_type(1387, 0x01).id);
																			tr2 = RTMS_EX_H("intersect",9,166807668);
																			ur1 = tr2;
																			{
																				static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,185,0xFFFF};
																				EIF_TYPE typres0;
																				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
																				
																				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
																				tr3 = RTLNTS(typres0.id, 1, 1);
																			}
																			ur2 = tr3;
																			tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10525, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
																			ur3 = RTCCL(tr4);
																			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(11896, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
																			RTNHOOK(70,1);
																			Result = (EIF_REFERENCE) RTCCL(tr1);
																		} else {
																			RTHOOK(71);
																			RTDBGAL(Current, 0, 0xF800054D, 0,0); /* Result */
																			Result = (EIF_REFERENCE) RTCCL(loc3);
																		}
																	} else {
																		RTHOOK(72);
																		if (RTEQ(loc1, RTMS_EX_H("difference",10,1745296741))) {
																			RTHOOK(73);
																			if ((EIF_BOOLEAN) 1) {
																				RTHOOK(74);
																				RTDBGAL(Current, 0, 0xF800054D, 0,0); /* Result */
																				tr1 = RTLN(eif_new_type(1385, 0x01).id);
																				tr2 = RTMS_EX_H("difference",10,1745296741);
																				ur1 = tr2;
																				{
																					static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,185,0xFFFF};
																					EIF_TYPE typres0;
																					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
																					
																					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
																					tr3 = RTLNTS(typres0.id, 1, 1);
																				}
																				ur2 = tr3;
																				tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10525, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
																				ur3 = RTCCL(tr4);
																				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(11896, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
																				RTNHOOK(74,1);
																				Result = (EIF_REFERENCE) RTCCL(tr1);
																			} else {
																				RTHOOK(75);
																				RTDBGAL(Current, 0, 0xF800054D, 0,0); /* Result */
																				Result = (EIF_REFERENCE) RTCCL(loc3);
																			}
																		} else {
																			RTHOOK(76);
																			if (RTEQ(loc1, RTMS_EX_H("negative",8,1477112933))) {
																				RTHOOK(77);
																				if ((EIF_BOOLEAN) 1) {
																					RTHOOK(78);
																					RTDBGAL(Current, 0, 0xF800054D, 0,0); /* Result */
																					tr1 = RTLN(eif_new_type(1365, 0x01).id);
																					tr2 = RTMS_EX_H("negative",8,1477112933);
																					ur1 = tr2;
																					{
																						static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,185,0xFFFF};
																						EIF_TYPE typres0;
																						static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
																						
																						typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
																						tr3 = RTLNTS(typres0.id, 1, 1);
																					}
																					ur2 = tr3;
																					tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10525, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
																					ur3 = RTCCL(tr4);
																					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(11896, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
																					RTNHOOK(78,1);
																					Result = (EIF_REFERENCE) RTCCL(tr1);
																				} else {
																					RTHOOK(79);
																					RTDBGAL(Current, 0, 0xF800054D, 0,0); /* Result */
																					Result = (EIF_REFERENCE) RTCCL(loc3);
																				}
																			} else {
																				RTHOOK(80);
																				if (RTEQ(loc1, RTMS_EX_H("negation",8,1477111150))) {
																					RTHOOK(81);
																					if ((EIF_BOOLEAN) 1) {
																						RTHOOK(82);
																						RTDBGAL(Current, 0, 0xF800054D, 0,0); /* Result */
																						tr1 = RTLN(eif_new_type(1381, 0x01).id);
																						tr2 = RTMS_EX_H("negation",8,1477111150);
																						ur1 = tr2;
																						{
																							static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,185,0xFFFF};
																							EIF_TYPE typres0;
																							static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
																							
																							typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
																							tr3 = RTLNTS(typres0.id, 1, 1);
																						}
																						ur2 = tr3;
																						tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10525, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
																						ur3 = RTCCL(tr4);
																						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(11896, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
																						RTNHOOK(82,1);
																						Result = (EIF_REFERENCE) RTCCL(tr1);
																					} else {
																						RTHOOK(83);
																						RTDBGAL(Current, 0, 0xF800054D, 0,0); /* Result */
																						Result = (EIF_REFERENCE) RTCCL(loc3);
																					}
																				} else {
																					RTHOOK(84);
																					if (RTEQ(loc1, RTMS_EX_H("sum",3,7566701))) {
																						RTHOOK(85);
																						if ((EIF_BOOLEAN) 1) {
																							RTHOOK(86);
																							RTDBGAL(Current, 0, 0xF800054D, 0,0); /* Result */
																							tr1 = RTLN(eif_new_type(1379, 0x01).id);
																							tr2 = RTMS_EX_H("sum",3,7566701);
																							ur1 = tr2;
																							{
																								static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,185,0xFFFF};
																								EIF_TYPE typres0;
																								static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
																								
																								typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
																								tr3 = RTLNTS(typres0.id, 1, 1);
																							}
																							ur2 = tr3;
																							tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10525, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
																							ur3 = RTCCL(tr4);
																							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(11896, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
																							RTNHOOK(86,1);
																							Result = (EIF_REFERENCE) RTCCL(tr1);
																						} else {
																							RTHOOK(87);
																							RTDBGAL(Current, 0, 0xF800054D, 0,0); /* Result */
																							Result = (EIF_REFERENCE) RTCCL(loc3);
																						}
																					} else {
																						RTHOOK(88);
																						if (RTEQ(loc1, RTMS_EX_H("for_all",7,1618096236))) {
																							RTHOOK(89);
																							if ((EIF_BOOLEAN) 1) {
																								RTHOOK(90);
																								RTDBGAL(Current, 0, 0xF800054D, 0,0); /* Result */
																								tr1 = RTLN(eif_new_type(1377, 0x01).id);
																								tr2 = RTMS_EX_H("for_all",7,1618096236);
																								ur1 = tr2;
																								{
																									static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,185,0xFFFF};
																									EIF_TYPE typres0;
																									static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
																									
																									typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
																									tr3 = RTLNTS(typres0.id, 1, 1);
																								}
																								ur2 = tr3;
																								tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10525, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
																								ur3 = RTCCL(tr4);
																								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(11896, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
																								RTNHOOK(90,1);
																								Result = (EIF_REFERENCE) RTCCL(tr1);
																							} else {
																								RTHOOK(91);
																								RTDBGAL(Current, 0, 0xF800054D, 0,0); /* Result */
																								Result = (EIF_REFERENCE) RTCCL(loc3);
																							}
																						} else {
																							RTHOOK(92);
																							if (RTEQ(loc1, RTMS_EX_H("there_exists",12,854333555))) {
																								RTHOOK(93);
																								if ((EIF_BOOLEAN) 1) {
																									RTHOOK(94);
																									RTDBGAL(Current, 0, 0xF800054D, 0,0); /* Result */
																									tr1 = RTLN(eif_new_type(1375, 0x01).id);
																									tr2 = RTMS_EX_H("there_exists",12,854333555);
																									ur1 = tr2;
																									{
																										static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,185,0xFFFF};
																										EIF_TYPE typres0;
																										static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
																										
																										typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
																										tr3 = RTLNTS(typres0.id, 1, 1);
																									}
																									ur2 = tr3;
																									tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10525, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
																									ur3 = RTCCL(tr4);
																									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(11896, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
																									RTNHOOK(94,1);
																									Result = (EIF_REFERENCE) RTCCL(tr1);
																								} else {
																									RTHOOK(95);
																									RTDBGAL(Current, 0, 0xF800054D, 0,0); /* Result */
																									Result = (EIF_REFERENCE) RTCCL(loc3);
																								}
																							} else {
																								RTHOOK(96);
																								if (RTEQ(loc1, RTMS_EX_H("open_set_enumeration",20,1232232814))) {
																									RTHOOK(97);
																									if ((EIF_BOOLEAN) 1) {
																										RTHOOK(98);
																										RTDBGAL(Current, 0, 0xF800054D, 0,0); /* Result */
																										tr1 = RTLN(eif_new_type(1373, 0x01).id);
																										tr2 = RTMS_EX_H("open_set_enumeration",20,1232232814);
																										ur1 = tr2;
																										{
																											static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,185,0xFFFF};
																											EIF_TYPE typres0;
																											static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
																											
																											typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
																											tr3 = RTLNTS(typres0.id, 1, 1);
																										}
																										ur2 = tr3;
																										tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10525, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
																										ur3 = RTCCL(tr4);
																										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(11896, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
																										RTNHOOK(98,1);
																										Result = (EIF_REFERENCE) RTCCL(tr1);
																									} else {
																										RTHOOK(99);
																										RTDBGAL(Current, 0, 0xF800054D, 0,0); /* Result */
																										Result = (EIF_REFERENCE) RTCCL(loc3);
																									}
																								} else {
																									RTHOOK(100);
																									if (RTEQ(loc1, RTMS_EX_H("close_set_enumeration",21,1868078702))) {
																										RTHOOK(101);
																										if ((EIF_BOOLEAN) 1) {
																											RTHOOK(102);
																											RTDBGAL(Current, 0, 0xF800054D, 0,0); /* Result */
																											tr1 = RTLN(eif_new_type(1371, 0x01).id);
																											tr2 = RTMS_EX_H("close_set_enumeration",21,1868078702);
																											ur1 = tr2;
																											{
																												static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,185,0xFFFF};
																												EIF_TYPE typres0;
																												static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
																												
																												typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
																												tr3 = RTLNTS(typres0.id, 1, 1);
																											}
																											ur2 = tr3;
																											tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10525, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
																											ur3 = RTCCL(tr4);
																											(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(11896, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
																											RTNHOOK(102,1);
																											Result = (EIF_REFERENCE) RTCCL(tr1);
																										} else {
																											RTHOOK(103);
																											RTDBGAL(Current, 0, 0xF800054D, 0,0); /* Result */
																											Result = (EIF_REFERENCE) RTCCL(loc3);
																										}
																									} else {
																										RTHOOK(104);
																										RTDBGAL(Current, 0, 0xF800054D, 0,0); /* Result */
																										Result = (EIF_REFERENCE) RTCCL(loc3);
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(105);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
#undef arg1
}

/* {ETF_INPUT_HANDLER_INTERFACE}.find_invalid_evt_trace */
EIF_TYPED_VALUE F1233_12765 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "find_invalid_evt_trace";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(12);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc2);
	RTLR(4,loc5);
	RTLR(5,ur1);
	RTLR(6,Current);
	RTLR(7,loc3);
	RTLR(8,loc4);
	RTLR(9,tr2);
	RTLR(10,loc6);
	RTLR(11,loc7);
	RTLIU(12);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	
	RTEAA(l_feature_name, 1232, Current, 7, 1, 18987);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1232, Current, 18987);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,263,0xFF01,0xFFF9,2,185,0xFF01,231,0xFF01,263,0xFF01,1234,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 1232, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80000E7, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(231, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(4556, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2849, "lower", arg1));
	loc1 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(3);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2848, "upper", arg1));
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		RTHOOK(4);
		RTDBGAL(Current, 2, 0xF80000B9, 0, 0); /* loc2 */
		ui4_1 = loc1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1741, "item", arg1))(arg1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(5);
		RTDBGAL(Current, 5, 0xF80000E7, 0, 0); /* loc5 */
		ur1 = RTCCL(loc2);
		loc5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10522, Dtype(Current)))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(6);
		RTDBGAL(Current, 3, 0xF80000E7, 0, 0); /* loc3 */
		tr1 = eif_boxed_item(loc2,1);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(7);
		RTDBGAL(Current, 4, 0xF8000107, 0, 0); /* loc4 */
		tr1 = eif_boxed_item(loc2,2);
		loc4 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(8);
		if (RTEQ(loc3, RTMS_EX_H("type_check",10,1152524907))) {
			RTHOOK(9);
			if ((EIF_BOOLEAN) 0) {
				RTHOOK(10);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4572, "is_empty", Result))(Result)).it_b);
				if ((EIF_BOOLEAN) !tb1) {
					RTHOOK(11);
					tr1 = RTMS_EX_H("\012",1,10);
					ur1 = tr1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4734, "append", Result))(Result, ur1x);
				}
				RTHOOK(12);
				tr1 = RTMS_EX_H(" does not conform to declaration ",33,1347883296);
				ur1 = tr1;
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4634, "plus", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				tr2 = RTMS_EX_H("type_check",10,1152524907);
				ur1 = tr2;
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4634, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4734, "append", Result))(Result, ur1x);
			}
		} else {
			RTHOOK(13);
			if (RTEQ(loc3, RTMS_EX_H("evaluate",8,1446040677))) {
				RTHOOK(14);
				if ((EIF_BOOLEAN) 0) {
					RTHOOK(15);
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4572, "is_empty", Result))(Result)).it_b);
					if ((EIF_BOOLEAN) !tb1) {
						RTHOOK(16);
						tr1 = RTMS_EX_H("\012",1,10);
						ur1 = tr1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4734, "append", Result))(Result, ur1x);
					}
					RTHOOK(17);
					tr1 = RTMS_EX_H(" does not conform to declaration ",33,1347883296);
					ur1 = tr1;
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4634, "plus", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					tr2 = RTMS_EX_H("evaluate",8,1446040677);
					ur1 = tr2;
					tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4634, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ur1 = RTCCL(tr2);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4734, "append", Result))(Result, ur1x);
				}
			} else {
				RTHOOK(18);
				if (RTEQ(loc3, RTMS_EX_H("reset",5,1702936948))) {
					RTHOOK(19);
					if ((EIF_BOOLEAN) 0) {
						RTHOOK(20);
						tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4572, "is_empty", Result))(Result)).it_b);
						if ((EIF_BOOLEAN) !tb1) {
							RTHOOK(21);
							tr1 = RTMS_EX_H("\012",1,10);
							ur1 = tr1;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4734, "append", Result))(Result, ur1x);
						}
						RTHOOK(22);
						tr1 = RTMS_EX_H(" does not conform to declaration ",33,1347883296);
						ur1 = tr1;
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4634, "plus", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						tr2 = RTMS_EX_H("reset",5,1702936948);
						ur1 = tr2;
						tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4634, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ur1 = RTCCL(tr2);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4734, "append", Result))(Result, ur1x);
					}
				} else {
					RTHOOK(23);
					if (RTEQ(loc3, RTMS_EX_H("boolean_constant",16,1775360372))) {
						RTHOOK(24);
						tb1 = '\0';
						tb2 = '\0';
						ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1758, "count", loc4))(loc4)).it_i4);
						if ((EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 1L))) {
							ui4_1 = ((EIF_INTEGER_32) 1L);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1741, "item", loc4))(loc4, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							loc6 = RTCCL(tr1);
							loc6 = RTRV(eif_new_type(1245, 0x01),loc6);
							tb2 = EIF_TEST(loc6);
						}
						if (tb2) {
							tb1 = (EIF_BOOLEAN) 1;
						}
						if ((EIF_BOOLEAN) !tb1) {
							RTHOOK(25);
							tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4572, "is_empty", Result))(Result)).it_b);
							if ((EIF_BOOLEAN) !tb1) {
								RTHOOK(26);
								tr1 = RTMS_EX_H("\012",1,10);
								ur1 = tr1;
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4734, "append", Result))(Result, ur1x);
							}
							RTHOOK(27);
							tr1 = RTMS_EX_H(" does not conform to declaration ",33,1347883296);
							ur1 = tr1;
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4634, "plus", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							tr2 = RTMS_EX_H("boolean_constant(c: BOOLEAN)",28,1066449705);
							ur1 = tr2;
							tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4634, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							ur1 = RTCCL(tr2);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4734, "append", Result))(Result, ur1x);
						}
					} else {
						RTHOOK(28);
						if (RTEQ(loc3, RTMS_EX_H("integer_constant",16,1643208564))) {
							RTHOOK(29);
							tb1 = '\0';
							tb2 = '\0';
							ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1758, "count", loc4))(loc4)).it_i4);
							if ((EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 1L))) {
								ui4_1 = ((EIF_INTEGER_32) 1L);
								tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1741, "item", loc4))(loc4, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								loc7 = RTCCL(tr1);
								loc7 = RTRV(eif_new_type(1244, 0x01),loc7);
								tb2 = EIF_TEST(loc7);
							}
							if (tb2) {
								tb1 = (EIF_BOOLEAN) 1;
							}
							if ((EIF_BOOLEAN) !tb1) {
								RTHOOK(30);
								tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4572, "is_empty", Result))(Result)).it_b);
								if ((EIF_BOOLEAN) !tb1) {
									RTHOOK(31);
									tr1 = RTMS_EX_H("\012",1,10);
									ur1 = tr1;
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4734, "append", Result))(Result, ur1x);
								}
								RTHOOK(32);
								tr1 = RTMS_EX_H(" does not conform to declaration ",33,1347883296);
								ur1 = tr1;
								tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4634, "plus", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								tr2 = RTMS_EX_H("integer_constant(c: INTEGER_64)",31,1351244073);
								ur1 = tr2;
								tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4634, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								ur1 = RTCCL(tr2);
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4734, "append", Result))(Result, ur1x);
							}
						} else {
							RTHOOK(33);
							if (RTEQ(loc3, RTMS_EX_H("add",3,6382692))) {
								RTHOOK(34);
								if ((EIF_BOOLEAN) 0) {
									RTHOOK(35);
									tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4572, "is_empty", Result))(Result)).it_b);
									if ((EIF_BOOLEAN) !tb1) {
										RTHOOK(36);
										tr1 = RTMS_EX_H("\012",1,10);
										ur1 = tr1;
										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4734, "append", Result))(Result, ur1x);
									}
									RTHOOK(37);
									tr1 = RTMS_EX_H(" does not conform to declaration ",33,1347883296);
									ur1 = tr1;
									tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4634, "plus", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
									tr2 = RTMS_EX_H("add",3,6382692);
									ur1 = tr2;
									tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4634, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
									ur1 = RTCCL(tr2);
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4734, "append", Result))(Result, ur1x);
								}
							} else {
								RTHOOK(38);
								if (RTEQ(loc3, RTMS_EX_H("subtract",8,897641332))) {
									RTHOOK(39);
									if ((EIF_BOOLEAN) 0) {
										RTHOOK(40);
										tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4572, "is_empty", Result))(Result)).it_b);
										if ((EIF_BOOLEAN) !tb1) {
											RTHOOK(41);
											tr1 = RTMS_EX_H("\012",1,10);
											ur1 = tr1;
											(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4734, "append", Result))(Result, ur1x);
										}
										RTHOOK(42);
										tr1 = RTMS_EX_H(" does not conform to declaration ",33,1347883296);
										ur1 = tr1;
										tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4634, "plus", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										tr2 = RTMS_EX_H("subtract",8,897641332);
										ur1 = tr2;
										tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4634, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										ur1 = RTCCL(tr2);
										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4734, "append", Result))(Result, ur1x);
									}
								} else {
									RTHOOK(43);
									if (RTEQ(loc3, RTMS_EX_H("multiply",8,765910137))) {
										RTHOOK(44);
										if ((EIF_BOOLEAN) 0) {
											RTHOOK(45);
											tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4572, "is_empty", Result))(Result)).it_b);
											if ((EIF_BOOLEAN) !tb1) {
												RTHOOK(46);
												tr1 = RTMS_EX_H("\012",1,10);
												ur1 = tr1;
												(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4734, "append", Result))(Result, ur1x);
											}
											RTHOOK(47);
											tr1 = RTMS_EX_H(" does not conform to declaration ",33,1347883296);
											ur1 = tr1;
											tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4634, "plus", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
											tr2 = RTMS_EX_H("multiply",8,765910137);
											ur1 = tr2;
											tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4634, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
											ur1 = RTCCL(tr2);
											(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4734, "append", Result))(Result, ur1x);
										}
									} else {
										RTHOOK(48);
										if (RTEQ(loc3, RTMS_EX_H("divide",6,36553061))) {
											RTHOOK(49);
											if ((EIF_BOOLEAN) 0) {
												RTHOOK(50);
												tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4572, "is_empty", Result))(Result)).it_b);
												if ((EIF_BOOLEAN) !tb1) {
													RTHOOK(51);
													tr1 = RTMS_EX_H("\012",1,10);
													ur1 = tr1;
													(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4734, "append", Result))(Result, ur1x);
												}
												RTHOOK(52);
												tr1 = RTMS_EX_H(" does not conform to declaration ",33,1347883296);
												ur1 = tr1;
												tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4634, "plus", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
												tr2 = RTMS_EX_H("divide",6,36553061);
												ur1 = tr2;
												tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4634, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
												ur1 = RTCCL(tr2);
												(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4734, "append", Result))(Result, ur1x);
											}
										} else {
											RTHOOK(53);
											if (RTEQ(loc3, RTMS_EX_H("conjoin",7,293582190))) {
												RTHOOK(54);
												if ((EIF_BOOLEAN) 0) {
													RTHOOK(55);
													tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4572, "is_empty", Result))(Result)).it_b);
													if ((EIF_BOOLEAN) !tb1) {
														RTHOOK(56);
														tr1 = RTMS_EX_H("\012",1,10);
														ur1 = tr1;
														(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4734, "append", Result))(Result, ur1x);
													}
													RTHOOK(57);
													tr1 = RTMS_EX_H(" does not conform to declaration ",33,1347883296);
													ur1 = tr1;
													tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4634, "plus", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
													tr2 = RTMS_EX_H("conjoin",7,293582190);
													ur1 = tr2;
													tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4634, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
													ur1 = RTCCL(tr2);
													(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4734, "append", Result))(Result, ur1x);
												}
											} else {
												RTHOOK(58);
												if (RTEQ(loc3, RTMS_EX_H("disjoin",7,785140590))) {
													RTHOOK(59);
													if ((EIF_BOOLEAN) 0) {
														RTHOOK(60);
														tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4572, "is_empty", Result))(Result)).it_b);
														if ((EIF_BOOLEAN) !tb1) {
															RTHOOK(61);
															tr1 = RTMS_EX_H("\012",1,10);
															ur1 = tr1;
															(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4734, "append", Result))(Result, ur1x);
														}
														RTHOOK(62);
														tr1 = RTMS_EX_H(" does not conform to declaration ",33,1347883296);
														ur1 = tr1;
														tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4634, "plus", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
														tr2 = RTMS_EX_H("disjoin",7,785140590);
														ur1 = tr2;
														tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4634, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
														ur1 = RTCCL(tr2);
														(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4734, "append", Result))(Result, ur1x);
													}
												} else {
													RTHOOK(63);
													if (RTEQ(loc3, RTMS_EX_H("imply",5,1836890745))) {
														RTHOOK(64);
														if ((EIF_BOOLEAN) 0) {
															RTHOOK(65);
															tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4572, "is_empty", Result))(Result)).it_b);
															if ((EIF_BOOLEAN) !tb1) {
																RTHOOK(66);
																tr1 = RTMS_EX_H("\012",1,10);
																ur1 = tr1;
																(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4734, "append", Result))(Result, ur1x);
															}
															RTHOOK(67);
															tr1 = RTMS_EX_H(" does not conform to declaration ",33,1347883296);
															ur1 = tr1;
															tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4634, "plus", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
															tr2 = RTMS_EX_H("imply",5,1836890745);
															ur1 = tr2;
															tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4634, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
															ur1 = RTCCL(tr2);
															(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4734, "append", Result))(Result, ur1x);
														}
													} else {
														RTHOOK(68);
														if (RTEQ(loc3, RTMS_EX_H("equals",6,21281139))) {
															RTHOOK(69);
															if ((EIF_BOOLEAN) 0) {
																RTHOOK(70);
																tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4572, "is_empty", Result))(Result)).it_b);
																if ((EIF_BOOLEAN) !tb1) {
																	RTHOOK(71);
																	tr1 = RTMS_EX_H("\012",1,10);
																	ur1 = tr1;
																	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4734, "append", Result))(Result, ur1x);
																}
																RTHOOK(72);
																tr1 = RTMS_EX_H(" does not conform to declaration ",33,1347883296);
																ur1 = tr1;
																tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4634, "plus", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
																tr2 = RTMS_EX_H("equals",6,21281139);
																ur1 = tr2;
																tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4634, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
																ur1 = RTCCL(tr2);
																(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4734, "append", Result))(Result, ur1x);
															}
														} else {
															RTHOOK(73);
															if (RTEQ(loc3, RTMS_EX_H("greater_than",12,1624960366))) {
																RTHOOK(74);
																if ((EIF_BOOLEAN) 0) {
																	RTHOOK(75);
																	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4572, "is_empty", Result))(Result)).it_b);
																	if ((EIF_BOOLEAN) !tb1) {
																		RTHOOK(76);
																		tr1 = RTMS_EX_H("\012",1,10);
																		ur1 = tr1;
																		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4734, "append", Result))(Result, ur1x);
																	}
																	RTHOOK(77);
																	tr1 = RTMS_EX_H(" does not conform to declaration ",33,1347883296);
																	ur1 = tr1;
																	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4634, "plus", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
																	tr2 = RTMS_EX_H("greater_than",12,1624960366);
																	ur1 = tr2;
																	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4634, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
																	ur1 = RTCCL(tr2);
																	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4734, "append", Result))(Result, ur1x);
																}
															} else {
																RTHOOK(78);
																if (RTEQ(loc3, RTMS_EX_H("less_than",9,2030197102))) {
																	RTHOOK(79);
																	if ((EIF_BOOLEAN) 0) {
																		RTHOOK(80);
																		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4572, "is_empty", Result))(Result)).it_b);
																		if ((EIF_BOOLEAN) !tb1) {
																			RTHOOK(81);
																			tr1 = RTMS_EX_H("\012",1,10);
																			ur1 = tr1;
																			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4734, "append", Result))(Result, ur1x);
																		}
																		RTHOOK(82);
																		tr1 = RTMS_EX_H(" does not conform to declaration ",33,1347883296);
																		ur1 = tr1;
																		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4634, "plus", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
																		tr2 = RTMS_EX_H("less_than",9,2030197102);
																		ur1 = tr2;
																		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4634, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
																		ur1 = RTCCL(tr2);
																		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4734, "append", Result))(Result, ur1x);
																	}
																} else {
																	RTHOOK(83);
																	if (RTEQ(loc3, RTMS_EX_H("union",5,1853302126))) {
																		RTHOOK(84);
																		if ((EIF_BOOLEAN) 0) {
																			RTHOOK(85);
																			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4572, "is_empty", Result))(Result)).it_b);
																			if ((EIF_BOOLEAN) !tb1) {
																				RTHOOK(86);
																				tr1 = RTMS_EX_H("\012",1,10);
																				ur1 = tr1;
																				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4734, "append", Result))(Result, ur1x);
																			}
																			RTHOOK(87);
																			tr1 = RTMS_EX_H(" does not conform to declaration ",33,1347883296);
																			ur1 = tr1;
																			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4634, "plus", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
																			tr2 = RTMS_EX_H("union",5,1853302126);
																			ur1 = tr2;
																			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4634, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
																			ur1 = RTCCL(tr2);
																			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4734, "append", Result))(Result, ur1x);
																		}
																	} else {
																		RTHOOK(88);
																		if (RTEQ(loc3, RTMS_EX_H("intersect",9,166807668))) {
																			RTHOOK(89);
																			if ((EIF_BOOLEAN) 0) {
																				RTHOOK(90);
																				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4572, "is_empty", Result))(Result)).it_b);
																				if ((EIF_BOOLEAN) !tb1) {
																					RTHOOK(91);
																					tr1 = RTMS_EX_H("\012",1,10);
																					ur1 = tr1;
																					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4734, "append", Result))(Result, ur1x);
																				}
																				RTHOOK(92);
																				tr1 = RTMS_EX_H(" does not conform to declaration ",33,1347883296);
																				ur1 = tr1;
																				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4634, "plus", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
																				tr2 = RTMS_EX_H("intersect",9,166807668);
																				ur1 = tr2;
																				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4634, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
																				ur1 = RTCCL(tr2);
																				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4734, "append", Result))(Result, ur1x);
																			}
																		} else {
																			RTHOOK(93);
																			if (RTEQ(loc3, RTMS_EX_H("difference",10,1745296741))) {
																				RTHOOK(94);
																				if ((EIF_BOOLEAN) 0) {
																					RTHOOK(95);
																					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4572, "is_empty", Result))(Result)).it_b);
																					if ((EIF_BOOLEAN) !tb1) {
																						RTHOOK(96);
																						tr1 = RTMS_EX_H("\012",1,10);
																						ur1 = tr1;
																						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4734, "append", Result))(Result, ur1x);
																					}
																					RTHOOK(97);
																					tr1 = RTMS_EX_H(" does not conform to declaration ",33,1347883296);
																					ur1 = tr1;
																					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4634, "plus", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
																					tr2 = RTMS_EX_H("difference",10,1745296741);
																					ur1 = tr2;
																					tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4634, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
																					ur1 = RTCCL(tr2);
																					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4734, "append", Result))(Result, ur1x);
																				}
																			} else {
																				RTHOOK(98);
																				if (RTEQ(loc3, RTMS_EX_H("negative",8,1477112933))) {
																					RTHOOK(99);
																					if ((EIF_BOOLEAN) 0) {
																						RTHOOK(100);
																						tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4572, "is_empty", Result))(Result)).it_b);
																						if ((EIF_BOOLEAN) !tb1) {
																							RTHOOK(101);
																							tr1 = RTMS_EX_H("\012",1,10);
																							ur1 = tr1;
																							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4734, "append", Result))(Result, ur1x);
																						}
																						RTHOOK(102);
																						tr1 = RTMS_EX_H(" does not conform to declaration ",33,1347883296);
																						ur1 = tr1;
																						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4634, "plus", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
																						tr2 = RTMS_EX_H("negative",8,1477112933);
																						ur1 = tr2;
																						tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4634, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
																						ur1 = RTCCL(tr2);
																						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4734, "append", Result))(Result, ur1x);
																					}
																				} else {
																					RTHOOK(103);
																					if (RTEQ(loc3, RTMS_EX_H("negation",8,1477111150))) {
																						RTHOOK(104);
																						if ((EIF_BOOLEAN) 0) {
																							RTHOOK(105);
																							tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4572, "is_empty", Result))(Result)).it_b);
																							if ((EIF_BOOLEAN) !tb1) {
																								RTHOOK(106);
																								tr1 = RTMS_EX_H("\012",1,10);
																								ur1 = tr1;
																								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4734, "append", Result))(Result, ur1x);
																							}
																							RTHOOK(107);
																							tr1 = RTMS_EX_H(" does not conform to declaration ",33,1347883296);
																							ur1 = tr1;
																							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4634, "plus", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
																							tr2 = RTMS_EX_H("negation",8,1477111150);
																							ur1 = tr2;
																							tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4634, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
																							ur1 = RTCCL(tr2);
																							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4734, "append", Result))(Result, ur1x);
																						}
																					} else {
																						RTHOOK(108);
																						if (RTEQ(loc3, RTMS_EX_H("sum",3,7566701))) {
																							RTHOOK(109);
																							if ((EIF_BOOLEAN) 0) {
																								RTHOOK(110);
																								tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4572, "is_empty", Result))(Result)).it_b);
																								if ((EIF_BOOLEAN) !tb1) {
																									RTHOOK(111);
																									tr1 = RTMS_EX_H("\012",1,10);
																									ur1 = tr1;
																									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4734, "append", Result))(Result, ur1x);
																								}
																								RTHOOK(112);
																								tr1 = RTMS_EX_H(" does not conform to declaration ",33,1347883296);
																								ur1 = tr1;
																								tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4634, "plus", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
																								tr2 = RTMS_EX_H("sum",3,7566701);
																								ur1 = tr2;
																								tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4634, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
																								ur1 = RTCCL(tr2);
																								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4734, "append", Result))(Result, ur1x);
																							}
																						} else {
																							RTHOOK(113);
																							if (RTEQ(loc3, RTMS_EX_H("for_all",7,1618096236))) {
																								RTHOOK(114);
																								if ((EIF_BOOLEAN) 0) {
																									RTHOOK(115);
																									tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4572, "is_empty", Result))(Result)).it_b);
																									if ((EIF_BOOLEAN) !tb1) {
																										RTHOOK(116);
																										tr1 = RTMS_EX_H("\012",1,10);
																										ur1 = tr1;
																										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4734, "append", Result))(Result, ur1x);
																									}
																									RTHOOK(117);
																									tr1 = RTMS_EX_H(" does not conform to declaration ",33,1347883296);
																									ur1 = tr1;
																									tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4634, "plus", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
																									tr2 = RTMS_EX_H("for_all",7,1618096236);
																									ur1 = tr2;
																									tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4634, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
																									ur1 = RTCCL(tr2);
																									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4734, "append", Result))(Result, ur1x);
																								}
																							} else {
																								RTHOOK(118);
																								if (RTEQ(loc3, RTMS_EX_H("there_exists",12,854333555))) {
																									RTHOOK(119);
																									if ((EIF_BOOLEAN) 0) {
																										RTHOOK(120);
																										tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4572, "is_empty", Result))(Result)).it_b);
																										if ((EIF_BOOLEAN) !tb1) {
																											RTHOOK(121);
																											tr1 = RTMS_EX_H("\012",1,10);
																											ur1 = tr1;
																											(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4734, "append", Result))(Result, ur1x);
																										}
																										RTHOOK(122);
																										tr1 = RTMS_EX_H(" does not conform to declaration ",33,1347883296);
																										ur1 = tr1;
																										tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4634, "plus", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
																										tr2 = RTMS_EX_H("there_exists",12,854333555);
																										ur1 = tr2;
																										tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4634, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
																										ur1 = RTCCL(tr2);
																										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4734, "append", Result))(Result, ur1x);
																									}
																								} else {
																									RTHOOK(123);
																									if (RTEQ(loc3, RTMS_EX_H("open_set_enumeration",20,1232232814))) {
																										RTHOOK(124);
																										if ((EIF_BOOLEAN) 0) {
																											RTHOOK(125);
																											tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4572, "is_empty", Result))(Result)).it_b);
																											if ((EIF_BOOLEAN) !tb1) {
																												RTHOOK(126);
																												tr1 = RTMS_EX_H("\012",1,10);
																												ur1 = tr1;
																												(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4734, "append", Result))(Result, ur1x);
																											}
																											RTHOOK(127);
																											tr1 = RTMS_EX_H(" does not conform to declaration ",33,1347883296);
																											ur1 = tr1;
																											tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4634, "plus", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
																											tr2 = RTMS_EX_H("open_set_enumeration",20,1232232814);
																											ur1 = tr2;
																											tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4634, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
																											ur1 = RTCCL(tr2);
																											(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4734, "append", Result))(Result, ur1x);
																										}
																									} else {
																										RTHOOK(128);
																										if (RTEQ(loc3, RTMS_EX_H("close_set_enumeration",21,1868078702))) {
																											RTHOOK(129);
																											if ((EIF_BOOLEAN) 0) {
																												RTHOOK(130);
																												tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4572, "is_empty", Result))(Result)).it_b);
																												if ((EIF_BOOLEAN) !tb1) {
																													RTHOOK(131);
																													tr1 = RTMS_EX_H("\012",1,10);
																													ur1 = tr1;
																													(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4734, "append", Result))(Result, ur1x);
																												}
																												RTHOOK(132);
																												tr1 = RTMS_EX_H(" does not conform to declaration ",33,1347883296);
																												ur1 = tr1;
																												tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4634, "plus", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
																												tr2 = RTMS_EX_H("close_set_enumeration",21,1868078702);
																												ur1 = tr2;
																												tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4634, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
																												ur1 = RTCCL(tr2);
																												(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4734, "append", Result))(Result, ur1x);
																											}
																										} else {
																											RTHOOK(133);
																											tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4572, "is_empty", Result))(Result)).it_b);
																											if ((EIF_BOOLEAN) !tb1) {
																												RTHOOK(134);
																												tr1 = RTMS_EX_H("\012",1,10);
																												ur1 = tr1;
																												(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4734, "append", Result))(Result, ur1x);
																											}
																											RTHOOK(135);
																											tr1 = RTMS_EX_H("Error: unknown event name ",26,1919922208);
																											ur1 = RTCCL(loc3);
																											tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4634, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
																											ur1 = RTCCL(tr2);
																											(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4734, "append", Result))(Result, ur1x);
																										}
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		RTHOOK(136);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(137);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(10);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef arg1
}

void EIF_Minit1233 (void)
{
	GTCX
	RTOTS (12761,F1233_12761)
	RTOTS (12762,F1233_12762)
}


#ifdef __cplusplus
}
#endif
