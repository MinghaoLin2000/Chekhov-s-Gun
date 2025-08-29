_$s10Foundation4DataV34AppleMediaServicesUIDynamicServiceE13deserializing5usingAC9JetEngine10JSONObjectV_AG11JSONContextVtKcfC
void *__fastcall Data.init(deserializing:using:)(void *a1, __int64 a2)
{
  __int64 v2; // x24
  __int64 v5; // x0
  __int64 v6; // x0
  __int64 v7; // x0
  __int64 v8; // x0
  void *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x0
  void (__fastcall *v13)(__int64); // x8
  void *v14; // x24
  void *v15; // x26
  id v16; // x25
  id v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  void (__fastcall *v20)(__int64); // x8
  __int64 v21; // x0
  __int64 v22; // x0
  void (__fastcall *v23)(__int64); // x8
  __int64 v24; // x0
  __int64 v25; // x0
  void (__fastcall *v26)(__int64); // x8
  __int64 v27; // x0
  __int64 v28; // x0
  void (__fastcall *v29)(__int64); // x8
  id v31; // [xsp+0h] [xbp-50h] BYREF

  v5 = sub_100003D44(&unk_10005C7F0);
  v6 = sub_100017CDC(v5);
  v7 = __chkstk_darwin(v6);
  v8 = sub_1000283E8(v7);
  v9 = a1;
  sub_100045958(v8);
  v10 = sub_100045BD8(0LL);
  if ( (unsigned int)sub_100004D58(v2, 1LL, v10) == 1 )
  {
    sub_10000BCDC(v2, &unk_10005C7F0);
LABEL_6:
    objc_msgSend(objc_allocWithZone((Class)&OBJC_CLASS___NSError), "init");
LABEL_7:
    swift_willThrow();
    v24 = sub_100045AC8(0LL);
    sub_10000BFCC(v24);
    v25 = sub_10000BF90(a2);
    v26(v25);
    v27 = sub_1000459A8(0LL);
    sub_10000BFCC(v27);
    v28 = sub_10000BF90(a1);
    v29(v28);
    return v9;
  }
  v9 = (void *)sub_100045BC8(
                 &type metadata for AnyHashable,
                 (char *)&type metadata for Any + 8,
                 &protocol witness table for AnyHashable);
  sub_100017DAC(v9, v11);
  v12 = sub_10000BF90(v2);
  v13(v12);
  if ( !v9 )
    goto LABEL_6;
  v14 = (void *)objc_opt_self(&OBJC_CLASS___NSJSONSerialization);
  v15 = (void *)sub_1000460E8(
                  v9,
                  &type metadata for AnyHashable,
                  (char *)&type metadata for Any + 8,
                  &protocol witness table for AnyHashable);
  swift_bridgeObjectRelease(v9);
  v31 = 0LL;
  v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "dataWithJSONObject:options:error:", v15, 0LL, &v31));
  objc_release(v15);
  v17 = objc_retain(v31);
  if ( !v16 )
  {
    v9 = v17;
    sub_100045538();
    objc_release(v9);
    goto LABEL_7;
  }
  v9 = (void *)sub_100045638(v16);
  objc_release(v16);
  v18 = sub_100045AC8(0LL);
  sub_10000BFCC(v18);
  v19 = sub_10000BF90(a2);
  v20(v19);
  v21 = sub_1000459A8(0LL);
  sub_10000BFCC(v21);
  v22 = sub_10000BF90(a1);
  v23(v22);
  return v9;
}