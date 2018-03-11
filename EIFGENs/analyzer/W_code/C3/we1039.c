/*
 * Code for class WEL_SC_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1039_9857(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1039_9858(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1039_9859(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1039_9860(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1039_9861(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1039_9862(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1039_9863(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1039_9864(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1039_9865(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1039_9866(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1039_9867(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1039_9868(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1039_9869(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1039_9870(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1039_9871(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1039_9872(EIF_REFERENCE);
extern void EIF_Minit1039(void);

#ifdef __cplusplus
}
#endif

#include "wel.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_SC_CONSTANTS}.sc_size */
EIF_TYPED_VALUE F1039_9857 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_size";
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
	
	RTEAA(l_feature_name, 1038, Current, 0, 0, 16191);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1038, Current, 16191);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_SIZE;
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

/* {WEL_SC_CONSTANTS}.sc_move */
EIF_TYPED_VALUE F1039_9858 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_move";
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
	
	RTEAA(l_feature_name, 1038, Current, 0, 0, 16176);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1038, Current, 16176);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_MOVE;
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

/* {WEL_SC_CONSTANTS}.sc_minimize */
EIF_TYPED_VALUE F1039_9859 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_minimize";
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
	
	RTEAA(l_feature_name, 1038, Current, 0, 0, 16177);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1038, Current, 16177);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_MINIMIZE;
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

/* {WEL_SC_CONSTANTS}.sc_maximize */
EIF_TYPED_VALUE F1039_9860 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_maximize";
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
	
	RTEAA(l_feature_name, 1038, Current, 0, 0, 16178);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1038, Current, 16178);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_MAXIMIZE;
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

/* {WEL_SC_CONSTANTS}.sc_nextwindow */
EIF_TYPED_VALUE F1039_9861 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_nextwindow";
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
	
	RTEAA(l_feature_name, 1038, Current, 0, 0, 16179);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1038, Current, 16179);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_NEXTWINDOW;
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

/* {WEL_SC_CONSTANTS}.sc_prevwindow */
EIF_TYPED_VALUE F1039_9862 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_prevwindow";
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
	
	RTEAA(l_feature_name, 1038, Current, 0, 0, 16180);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1038, Current, 16180);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_PREVWINDOW;
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

/* {WEL_SC_CONSTANTS}.sc_close */
EIF_TYPED_VALUE F1039_9863 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_close";
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
	
	RTEAA(l_feature_name, 1038, Current, 0, 0, 16181);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1038, Current, 16181);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_CLOSE;
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

/* {WEL_SC_CONSTANTS}.sc_vscroll */
EIF_TYPED_VALUE F1039_9864 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_vscroll";
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
	
	RTEAA(l_feature_name, 1038, Current, 0, 0, 16182);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1038, Current, 16182);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_VSCROLL;
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

/* {WEL_SC_CONSTANTS}.sc_hscroll */
EIF_TYPED_VALUE F1039_9865 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_hscroll";
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
	
	RTEAA(l_feature_name, 1038, Current, 0, 0, 16183);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1038, Current, 16183);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_HSCROLL;
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

/* {WEL_SC_CONSTANTS}.sc_mousemenu */
EIF_TYPED_VALUE F1039_9866 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_mousemenu";
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
	
	RTEAA(l_feature_name, 1038, Current, 0, 0, 16184);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1038, Current, 16184);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_MOUSEMENU;
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

/* {WEL_SC_CONSTANTS}.sc_keymenu */
EIF_TYPED_VALUE F1039_9867 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_keymenu";
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
	
	RTEAA(l_feature_name, 1038, Current, 0, 0, 16185);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1038, Current, 16185);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_KEYMENU;
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

/* {WEL_SC_CONSTANTS}.sc_arrange */
EIF_TYPED_VALUE F1039_9868 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_arrange";
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
	
	RTEAA(l_feature_name, 1038, Current, 0, 0, 16186);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1038, Current, 16186);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_ARRANGE;
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

/* {WEL_SC_CONSTANTS}.sc_restore */
EIF_TYPED_VALUE F1039_9869 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_restore";
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
	
	RTEAA(l_feature_name, 1038, Current, 0, 0, 16187);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1038, Current, 16187);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_RESTORE;
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

/* {WEL_SC_CONSTANTS}.sc_tasklist */
EIF_TYPED_VALUE F1039_9870 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_tasklist";
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
	
	RTEAA(l_feature_name, 1038, Current, 0, 0, 16188);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1038, Current, 16188);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_TASKLIST;
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

/* {WEL_SC_CONSTANTS}.sc_screensave */
EIF_TYPED_VALUE F1039_9871 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_screensave";
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
	
	RTEAA(l_feature_name, 1038, Current, 0, 0, 16189);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1038, Current, 16189);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_SCREENSAVE;
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

/* {WEL_SC_CONSTANTS}.sc_hotkey */
EIF_TYPED_VALUE F1039_9872 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_hotkey";
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
	
	RTEAA(l_feature_name, 1038, Current, 0, 0, 16190);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1038, Current, 16190);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_HOTKEY;
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

void EIF_Minit1039 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
