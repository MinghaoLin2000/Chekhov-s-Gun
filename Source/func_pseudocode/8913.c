_$s34AppleMediaServicesUIDynamicService16JSServiceRequestV4fromACs7Decoder_p_tKcfC
__int64 __usercall JSServiceRequest.init(from:)@<X0>(_QWORD *a1@<X0>, __int64 a2@<X8>)
{
  __int64 v2; // x21
  __int64 v3; // x23
  _QWORD *v4; // x24
  __int64 v6; // x0
  __int64 v7; // x0
  __int64 v8; // x0
  __int64 v9; // x27
  __int64 v10; // x0
  __int64 v11; // x0
  __int64 v12; // x19
  __int64 v13; // x1
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x26
  __int64 v17; // x28
  __int64 v18; // x0
  __int64 v20; // x20
  _QWORD *v21; // x23
  _QWORD *v22; // x25
  __int64 v23; // x1
  __int64 v24; // x26
  __int64 v25; // x0
  id v26; // x26
  id v27; // x28
  void *v28; // x19
  id v29; // x27
  void *v30; // x26
  id v31; // x19
  id v32; // x28
  id v33; // x0
  __int64 v34; // x0
  int v35; // w0
  __int64 v36; // x8
  __int64 v37; // x0
  __int64 v38; // x1
  __int64 v39; // x24
  __int64 v40; // x0
  __int64 v41; // x0
  void (__fastcall *v42)(__int64); // x8
  id v43; // x19
  __int64 v44; // x0
  void (__fastcall *v45)(__int64); // x8
  id v46; // [xsp+8h] [xbp-B8h]
  __int64 v47; // [xsp+10h] [xbp-B0h]
  __int64 v48; // [xsp+18h] [xbp-A8h]
  __int64 v50; // [xsp+38h] [xbp-88h]
  __int64 v51; // [xsp+40h] [xbp-80h] BYREF
  id v52[4]; // [xsp+48h] [xbp-78h] BYREF

  v6 = sub_100003D44(&unk_10005C648);
  v7 = sub_100017CDC(v6);
  v8 = __chkstk_darwin(v7);
  sub_100028438(v8);
  v9 = sub_100003D44(&unk_10005CF78);
  v10 = sub_100005068();
  v11 = __chkstk_darwin(v10);
  sub_100028460(v11);
  v12 = type metadata accessor for JSServiceRequest(0LL);
  v14 = sub_100017DAC(v12, v13);
  v15 = __chkstk_darwin(v14);
  sub_1000283E8(v15);
  v17 = a1[3];
  v16 = a1[4];
  sub_10000487C(a1, v17);
  v18 = sub_100027648();
  sub_1000466D8(
    &type metadata for JSServiceRequest.CodingKeys,
    &type metadata for JSServiceRequest.CodingKeys,
    v18,
    v17,
    v16);
  if ( v2 )
    return _s34AppleMediaServicesUIDynamicService9JSAccountVwxx_0(a1);
  LOBYTE(v52[0]) = 0;
  v20 = v3;
  v21 = a1;
  v22 = v4;
  *v4 = sub_100046588(v52, v9);
  v4[1] = v23;
  LOBYTE(v51) = 1;
  v24 = v23;
  v25 = sub_100027694();
  sub_1000465B8(v52, &type metadata for Data, &v51, v9, &type metadata for Data, v25);
  v47 = v9;
  v48 = v24;
  v26 = v52[0];
  v27 = v52[1];
  v28 = (void *)objc_opt_self(&OBJC_CLASS___NSJSONSerialization);
  v29 = v26;
  v46 = v27;
  v30 = (void *)sub_100045628(v26, v27);
  v52[0] = 0LL;
  v31 = objc_retainAutoreleasedReturnValue(objc_msgSend(v28, "JSONObjectWithData:options:error:", v30, 0LL, v52));
  objc_release(v30);
  v32 = v52[0];
  if ( v31 )
  {
    v33 = objc_retain(v52[0]);
    sub_1000463B8(v52, v31);
    sub_10002773C(v29, v46);
    swift_unknownObjectRelease(v31);
    v34 = sub_100003D44(&unk_10005C310);
    v35 = swift_dynamicCast(&v51, v52, (char *)&type metadata for Any + 8, v34, 6LL);
    v36 = v51;
    if ( !v35 )
      v36 = 0LL;
    v4[2] = v36;
    LOBYTE(v52[0]) = 2;
    v37 = sub_100046588(v52, v47);
    v39 = v38;
    sub_1000455E8(v37);
    v40 = swift_bridgeObjectRelease(v39);
    v41 = sub_1000284AC(v40);
    v42(v41);
    sub_100026038(v50);
    sub_1000176B4(v22, a2);
    _s34AppleMediaServicesUIDynamicService9JSAccountVwxx_0(v21);
    return sub_1000276E0(v22);
  }
  else
  {
    v43 = objc_retain(v52[0]);
    sub_100045538(v32);
    objc_release(v43);
    swift_willThrow();
    sub_10002773C(v29, v46);
    v44 = sub_10000BF90(v20);
    v45(v44);
    _s34AppleMediaServicesUIDynamicService9JSAccountVwxx_0(v21);
    return swift_bridgeObjectRelease(v48);
  }
}