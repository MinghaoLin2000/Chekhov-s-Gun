_$s34AppleMediaServicesUIDynamicService14MetricsContextV4fromACs7Decoder_p_tKcfC
__int64 __fastcall MetricsContext.init(from:)(_QWORD *a1)
{
  __int64 v1; // x21
  __int64 v3; // x23
  __int64 v4; // x0
  __int64 v5; // x16
  __int64 v6; // x27
  __int64 v7; // x8
  char *v8; // x24
  id v9; // x25
  __int64 v10; // x26
  __int64 v11; // x0
  __int64 v13; // x0
  id v14; // x26
  id v15; // x28
  void *v16; // x20
  void *v17; // x28
  id v18; // x20
  id v19; // x28
  id v20; // x0
  __int64 v21; // x0
  __int64 v22; // x0
  void (__fastcall *v23)(__int64); // x8
  __int64 v24; // x0
  __int64 v25; // [xsp+0h] [xbp-90h] BYREF
  id v26; // [xsp+8h] [xbp-88h]
  __int64 v27; // [xsp+10h] [xbp-80h] BYREF
  id v28[4]; // [xsp+18h] [xbp-78h] BYREF

  v3 = sub_100003D44(&unk_10005DA30);
  v4 = sub_100009414();
  v6 = v5;
  __chkstk_darwin(v4);
  v8 = (char *)&v25 - ((v7 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v9 = (id)a1[3];
  v10 = a1[4];
  sub_10000487C(a1, v9);
  v11 = sub_1000379C0();
  sub_1000466D8(
    &type metadata for MetricsContext.CodingKeys,
    &type metadata for MetricsContext.CodingKeys,
    v11,
    v9,
    v10);
  if ( !v1 )
  {
    LOBYTE(v28[0]) = 0;
    LOBYTE(v9) = sub_100046598(v28, v3);
    LOBYTE(v27) = 1;
    v13 = sub_100027694();
    sub_1000465B8(v28, &type metadata for Data, &v27, v3, &type metadata for Data, v13);
    v15 = v28[0];
    v14 = v28[1];
    v16 = (void *)objc_opt_self(&OBJC_CLASS___NSJSONSerialization);
    v26 = v15;
    v17 = (void *)sub_100045628(v15, v14);
    v28[0] = 0LL;
    v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "JSONObjectWithData:options:error:", v17, 0LL, v28));
    objc_release(v17);
    v19 = v28[0];
    if ( v18 )
    {
      v20 = objc_retain(v28[0]);
      sub_1000463B8(v28, v18);
      sub_10002773C(v26, v14);
      v21 = swift_unknownObjectRelease(v18);
      v22 = sub_10003819C(v21);
      v23(v22);
      v24 = sub_100003D44(&unk_10005C300);
      swift_dynamicCast(&v27, v28, (char *)&type metadata for Any + 8, v24, 6LL);
    }
    else
    {
      v9 = objc_retain(v28[0]);
      sub_100045538(v19);
      objc_release(v9);
      swift_willThrow();
      sub_10002773C(v26, v14);
      (*(void (__fastcall **)(char *, __int64))(v6 + 8))(v8, v3);
    }
  }
  _s34AppleMediaServicesUIDynamicService9JSAccountVwxx_0(a1);
  return (unsigned __int8)v9 & 1;
}