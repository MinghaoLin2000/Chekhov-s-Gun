_$s34AppleMediaServicesUIDynamicService16JSServiceRequestV9makeValue2inSo7JSValueCSo9JSContextC_tF
JSValue __swiftcall JSServiceRequest.makeValue(in:)(JSContext in)
{
  __int64 v1; // x20
  __int64 v2; // x22
  __int64 v4; // x0
  __int64 v5; // x0
  __int64 v6; // x0
  __int64 v7; // x8
  __int64 v8; // x9
  __int64 v9; // x25
  JSValue result; // x0
  Class isa; // x21
  objc_class *v12; // x24
  __int64 v13; // x1
  __int64 v14; // x20
  objc_class *v15; // x0
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x0
  __int64 v19; // x26
  __int64 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x20
  __int64 v23; // x1
  __int64 v24; // x0
  void (__fastcall *v25)(__int64); // x8
  objc_class *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x20
  objc_class *v29; // x0
  __int64 v30; // x0
  __int64 v31; // x1

  v2 = v1;
  v4 = sub_100003D44(&unk_10005C648);
  v5 = sub_100017CDC(v4);
  v6 = __chkstk_darwin(v5);
  sub_100017CE8(v6);
  v9 = v8 - v7;
  result.super.isa = (Class)objc_retainAutoreleasedReturnValue(
                              objc_msgSend(
                                (id)objc_opt_self(&OBJC_CLASS___JSValue),
                                "valueWithNewObjectInContext:",
                                in.super.isa));
  if ( !result.super.isa )
  {
    __break(1u);
    goto LABEL_15;
  }
  isa = result.super.isa;
  sub_10000ED68(0LL);
  v12 = objc_retain(in.super.isa);
  result.super.isa = (Class)sub_100028400(v12, v13);
  if ( !result.super.isa )
  {
LABEL_15:
    __break(1u);
    goto LABEL_16;
  }
  sub_100046338(result.super.isa, 0x646E696B24LL, 0xE500000000000000LL);
  v14 = *(_QWORD *)(v1 + 8);
  if ( !v14 )
    goto LABEL_6;
  v15 = objc_retain(v12);
  v16 = swift_bridgeObjectRetain(v14);
  result.super.isa = (Class)sub_100028400(v16, v17);
  if ( !result.super.isa )
  {
LABEL_16:
    __break(1u);
LABEL_17:
    __break(1u);
    goto LABEL_18;
  }
  sub_100046338(result.super.isa, 0x746E656D67617266LL, 0xE800000000000000LL);
LABEL_6:
  v18 = type metadata accessor for JSServiceRequest(0LL);
  sub_1000179B0(v2 + *(int *)(v18 + 24), v9);
  v19 = sub_100045608(0LL);
  v20 = sub_100004D58(v9, 1LL, v19);
  if ( (_DWORD)v20 == 1 )
  {
    sub_10000BCDC(v9, &unk_10005C648);
LABEL_10:
    v28 = *(_QWORD *)(v2 + 16);
    if ( !v28 )
      return (JSValue)isa;
    sub_100003D44(&unk_10005C310);
    v29 = objc_retain(v12);
    v30 = swift_bridgeObjectRetain(v28);
    result.super.isa = (Class)sub_100028400(v30, v31);
    if ( result.super.isa )
    {
      sub_100046338(result.super.isa, 0x736E6F6974706FLL, 0xE700000000000000LL);
      return (JSValue)isa;
    }
    goto LABEL_17;
  }
  v22 = sub_100045568(v20, v21);
  sub_100017DAC(v22, v23);
  v24 = sub_10000BF90(v9);
  v25(v24);
  v26 = objc_retain(v12);
  result.super.isa = (Class)sub_100028400(v26, v27);
  if ( result.super.isa )
  {
    sub_100046338(result.super.isa, 7107189LL, 0xE300000000000000LL);
    goto LABEL_10;
  }
LABEL_18:
  __break(1u);
  return result;
}