_$s19ControlCenterHelper13AuthorizationV04withD08required4bodyySb_ySo15SFAuthorizationCKXEtKF
void __fastcall Authorization.withAuthorization(required:body:)(char a1, void (__fastcall *a2)(void *))
{
  __int64 v2; // x20
  __int64 v5; // x19
  __int64 v6; // x0
  __int64 v7; // x16
  __int64 v8; // x8
  char *v9; // x23
  id v10; // x0
  void *v11; // x22
  __int64 v12; // x27
  __int64 v13; // x0
  __int64 v14; // x24
  __int64 v15; // x28
  unsigned int v16; // w19
  id v17; // x27
  __int64 v18; // x0
  __int64 v19; // x28
  __int64 v20; // x20
  __int64 v21; // x24
  __int64 v22; // x0
  __int64 v23; // x25
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x8
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x0
  __int64 v31; // [xsp+0h] [xbp-70h] BYREF
  __int64 v32; // [xsp+8h] [xbp-68h]
  id v33; // [xsp+10h] [xbp-60h] BYREF

  v5 = sub_10006EE70(0LL);
  v6 = sub_10000B2FC();
  v32 = v7;
  __chkstk_darwin(v6);
  v9 = (char *)&v31 - ((v8 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v10 = objc_msgSend(objc_allocWithZone((Class)&OBJC_CLASS___SFAuthorization), "init");
  if ( !v10 )
    __break(1u);
  v11 = v10;
  if ( (a1 & 1) == 0 )
    goto LABEL_4;
  v12 = *(unsigned int *)(v2 + 16);
  v13 = sub_100070100(*(_QWORD *)v2, *(_QWORD *)(v2 + 8));
  v31 = v2;
  v14 = v5;
  v15 = v13;
  v33 = 0LL;
  v16 = (unsigned int)objc_msgSend(v11, "obtainWithRight:flags:error:", v13 + 32, v12, &v33);
  v17 = objc_retain(v33);
  v18 = v15;
  v19 = v14;
  v20 = v31;
  swift_release(v18);
  if ( !v16 )
  {
    v21 = sub_10006EC40(v17);
    objc_release(v17);
    ((void (*)(void))swift_willThrow)();
    v22 = type metadata accessor for Authorization(0LL);
    v23 = v32;
    v24 = (*(__int64 (__fastcall **)(char *, __int64, __int64))(v32 + 16))(v9, v20 + *(int *)(v22 + 24), v19);
    v25 = __chkstk_darwin(v24);
    v26 = sub_10001DE8C(v25);
    *(_QWORD *)(v27 - 16) = v20;
    v28 = __chkstk_darwin(v26);
    sub_10001DE9C(v28);
    *(_QWORD *)(v29 - 16) = v21;
    sub_10002160C(sub_10001D8D0);
    v30 = (*(__int64 (__fastcall **)(char *, __int64))(v23 + 8))(v9, v19);
    swift_willThrow(v30);
  }
  else
  {
LABEL_4:
    a2(v11);
  }
  objc_release(v11);
}