_$s34AppleMediaServicesUIDynamicService16JSServiceRequestV6encode2toys7Encoder_p_tKF
__int64 __fastcall JSServiceRequest.encode(to:)(__int64 a1)
{
  __int64 *v1; // x20
  __int64 v2; // x21
  __int64 v3; // x23
  __int64 v4; // x19
  __int64 *v5; // x27
  __int64 v7; // x0
  __int64 v8; // x0
  __int64 v9; // x0
  __int64 v10; // x8
  __int64 v11; // x9
  __int64 v12; // x26
  __int64 v13; // x0
  __int64 v14; // x16
  __int64 v15; // x0
  __int64 v16; // x22
  __int64 v17; // x0
  __int64 v18; // x16
  __int64 v19; // x24
  __int64 v20; // x0
  __int64 v21; // x25
  __int64 v22; // x28
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x20
  void *v26; // x25
  void *v27; // x28
  id v28; // x20
  id v29; // x0
  void *v30; // x25
  void *v31; // x1
  void *v32; // x28
  __int64 v33; // x0
  __int64 v34; // x0
  void (__fastcall *v35)(__int64); // x8
  void *v37; // x25
  __int64 v38; // x0
  __int64 v39; // x0
  void (__fastcall *v40)(__int64); // x8
  __int64 v41; // x0
  __int64 v42; // x1
  __int64 v43; // x0
  __int64 v44; // x1
  __int64 v45; // x25
  __int64 v46; // [xsp+8h] [xbp-88h]
  __int64 v47; // [xsp+10h] [xbp-80h]
  __int64 v48; // [xsp+18h] [xbp-78h]
  char v49; // [xsp+27h] [xbp-69h] BYREF
  id v50[2]; // [xsp+28h] [xbp-68h] BYREF

  v4 = v2;
  v5 = v1;
  v7 = sub_100003D44(&unk_10005C648);
  v8 = sub_100017CDC(v7);
  v9 = __chkstk_darwin(v8);
  sub_100017CE8(v9);
  v12 = v11 - v10;
  sub_100045608(0LL);
  v13 = sub_100005068();
  v47 = v14;
  v48 = v13;
  v15 = __chkstk_darwin(v13);
  sub_100028438(v15);
  v16 = sub_100003D44(&unk_10005CF90);
  v17 = sub_100005068();
  v19 = v18;
  v20 = __chkstk_darwin(v17);
  sub_100028460(v20);
  v21 = *(_QWORD *)(a1 + 24);
  v22 = *(_QWORD *)(a1 + 32);
  sub_10000487C(a1, v21);
  v23 = sub_100027648();
  sub_1000466E8(
    &type metadata for JSServiceRequest.CodingKeys,
    &type metadata for JSServiceRequest.CodingKeys,
    v23,
    v21,
    v22);
  if ( v5[1] )
  {
    v24 = *v5;
    LOBYTE(v50[0]) = 0;
    sub_1000284DC(v24);
    v4 = v2;
    if ( v2 )
      return (*(__int64 (__fastcall **)(__int64, __int64))(v19 + 8))(v3, v16);
  }
  v25 = v5[2];
  if ( v25 )
  {
    v26 = (void *)objc_opt_self(&OBJC_CLASS___NSJSONSerialization);
    v27 = (void *)sub_1000460E8(
                    v25,
                    &type metadata for AnyHashable,
                    (char *)&type metadata for Any + 8,
                    &protocol witness table for AnyHashable);
    v50[0] = 0LL;
    v28 = objc_retainAutoreleasedReturnValue(objc_msgSend(v26, "dataWithJSONObject:options:error:", v27, 0LL, v50));
    objc_release(v27);
    v29 = objc_retain(v50[0]);
    if ( !v28 )
    {
      v37 = v29;
      sub_100045538(v29);
      objc_release(v37);
      swift_willThrow();
      return (*(__int64 (__fastcall **)(__int64, __int64))(v19 + 8))(v3, v16);
    }
    v30 = (void *)sub_100045638(v28);
    v32 = v31;
    objc_release(v28);
    v50[0] = v30;
    v50[1] = v32;
    v49 = 1;
    v33 = sub_100027794();
    sub_1000465F8(v50, &v49, v16, &type metadata for Data, v33);
    if ( v4 )
    {
      v34 = sub_100028454(v3, v16);
      v35(v34);
      return sub_10002773C(v30, v32);
    }
    sub_10002773C(v30, v32);
  }
  v38 = type metadata accessor for JSServiceRequest(0LL);
  sub_1000179B0((char *)v5 + *(int *)(v38 + 24), v12);
  if ( (unsigned int)sub_100004D58(v12, 1LL, v48) == 1 )
  {
    v39 = sub_100028454(v3, v16);
    v40(v39);
    return sub_10000BCDC(v12, &unk_10005C648);
  }
  v41 = (*(__int64 (**)(void))(v47 + 32))();
  v43 = sub_100045568(v41, v42);
  v45 = v44;
  LOBYTE(v50[0]) = 2;
  sub_1000284DC(v43);
  swift_bridgeObjectRelease(v45);
  (*(void (__fastcall **)(__int64, __int64))(v47 + 8))(v46, v48);
  return (*(__int64 (__fastcall **)(__int64, __int64))(v19 + 8))(v3, v16);
}