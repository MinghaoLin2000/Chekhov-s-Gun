_$s34AppleMediaServicesUIDynamicService14MetricsContextV6encode2toys7Encoder_p_tKF
__int64 __fastcall MetricsContext.encode(to:)(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // x21
  __int64 v7; // x19
  __int64 v8; // x0
  __int64 v9; // x26
  __int64 v10; // x27
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 (__fastcall *v14)(__int64); // x8
  void *v16; // x20
  void *v17; // x24
  id v18; // x20
  id v19; // x0
  void *v20; // x24
  void *v21; // x1
  void *v22; // x25
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x0
  void (__fastcall *v26)(__int64); // x8
  void *v27; // x24
  char v28; // [xsp+7h] [xbp-69h] BYREF
  id v29[2]; // [xsp+8h] [xbp-68h] BYREF

  v7 = sub_100003D44(&unk_10005DA40);
  v8 = sub_100009414();
  __chkstk_darwin(v8);
  v9 = *(_QWORD *)(a1 + 24);
  v10 = *(_QWORD *)(a1 + 32);
  sub_10000487C(a1, v9);
  v11 = sub_1000379C0();
  sub_1000466E8(
    &type metadata for MetricsContext.CodingKeys,
    &type metadata for MetricsContext.CodingKeys,
    v11,
    v9,
    v10);
  LOBYTE(v29[0]) = 0;
  v12 = sub_1000465D8(a2, v29, v7);
  if ( v3 || !a3 )
    goto LABEL_2;
  v16 = (void *)objc_opt_self(&OBJC_CLASS___NSJSONSerialization);
  v17 = (void *)sub_1000460E8(
                  a3,
                  &type metadata for String,
                  (char *)&type metadata for Any + 8,
                  &protocol witness table for String);
  v29[0] = 0LL;
  v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "dataWithJSONObject:options:error:", v17, 0LL, v29));
  objc_release(v17);
  v19 = objc_retain(v29[0]);
  if ( !v18 )
  {
    v27 = v19;
    sub_100045538(v19);
    objc_release(v27);
    v12 = swift_willThrow();
LABEL_2:
    v13 = sub_1000381D8(v12);
    return v14(v13);
  }
  v20 = (void *)sub_100045638(v18);
  v22 = v21;
  objc_release(v18);
  v29[0] = v20;
  v29[1] = v22;
  v28 = 1;
  v23 = sub_100027794();
  v24 = sub_1000465F8(v29, &v28, v7, &type metadata for Data, v23);
  v25 = sub_1000381D8(v24);
  v26(v25);
  return sub_10002773C(v20, v22);
}