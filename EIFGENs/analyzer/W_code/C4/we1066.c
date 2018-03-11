/*
 * Code for class WEL_UDM_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1066_10236(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1066_10237(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1066_10238(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1066_10239(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1066_10240(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1066_10241(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1066_10242(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1066_10243(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1066_10244(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1066_10245(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1066_10246(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1066_10247(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1066_10248(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1066_10249(EIF_REFERENCE);
extern void EIF_Minit1066(void);

#ifdef __cplusplus
}
#endif

#include "cctrl.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_UDM_CONSTANTS}.udm_getaccel */
EIF_TYPED_VALUE F1066_10236 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "udm_getaccel";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1065, Current, 0, 0, 16552);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1065, Current, 16552);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) UDM_GETACCEL;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_UDM_CONSTANTS}.udm_getbase */
EIF_TYPED_VALUE F1066_10237 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "udm_getbase";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1065, Current, 0, 0, 16553);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1065, Current, 16553);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) UDM_GETBASE;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_UDM_CONSTANTS}.udm_getbuddy */
EIF_TYPED_VALUE F1066_10238 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "udm_getbuddy";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1065, Current, 0, 0, 16554);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1065, Current, 16554);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) UDM_GETBUDDY;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_UDM_CONSTANTS}.udm_getpos */
EIF_TYPED_VALUE F1066_10239 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "udm_getpos";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1065, Current, 0, 0, 16555);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1065, Current, 16555);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) UDM_GETPOS;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_UDM_CONSTANTS}.udm_getrange */
EIF_TYPED_VALUE F1066_10240 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "udm_getrange";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1065, Current, 0, 0, 16556);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1065, Current, 16556);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) UDM_GETRANGE;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_UDM_CONSTANTS}.udm_getrange32 */
EIF_TYPED_VALUE F1066_10241 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "udm_getrange32";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1065, Current, 0, 0, 16557);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1065, Current, 16557);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) UDM_GETRANGE32;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_UDM_CONSTANTS}.udm_setaccel */
EIF_TYPED_VALUE F1066_10242 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "udm_setaccel";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1065, Current, 0, 0, 16558);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1065, Current, 16558);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) UDM_SETACCEL;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_UDM_CONSTANTS}.udm_setbase */
EIF_TYPED_VALUE F1066_10243 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "udm_setbase";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1065, Current, 0, 0, 16559);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1065, Current, 16559);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) UDM_SETBASE;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_UDM_CONSTANTS}.udm_setbuddy */
EIF_TYPED_VALUE F1066_10244 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "udm_setbuddy";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1065, Current, 0, 0, 16560);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1065, Current, 16560);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) UDM_SETBUDDY;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_UDM_CONSTANTS}.udm_setpos */
EIF_TYPED_VALUE F1066_10245 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "udm_setpos";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1065, Current, 0, 0, 16561);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1065, Current, 16561);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) UDM_SETPOS;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_UDM_CONSTANTS}.udm_setrange */
EIF_TYPED_VALUE F1066_10246 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "udm_setrange";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1065, Current, 0, 0, 16562);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1065, Current, 16562);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) UDM_SETRANGE;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_UDM_CONSTANTS}.udm_setrange32 */
EIF_TYPED_VALUE F1066_10247 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1135L);
	return r;
}

/* {WEL_UDM_CONSTANTS}.udm_getpos32 */
EIF_TYPED_VALUE F1066_10248 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1138L);
	return r;
}

/* {WEL_UDM_CONSTANTS}.udm_setpos32 */
EIF_TYPED_VALUE F1066_10249 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1137L);
	return r;
}

void EIF_Minit1066 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
