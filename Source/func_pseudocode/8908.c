_$s34AppleMediaServicesUIDynamicService16JSServiceRequestV13deserializing5usingAC9JetEngine10JSONObjectV_AF11JSONContextVtKcfC
__int64 __usercall JSServiceRequest.init(deserializing:using:)@<X0>(__int64 a1@<X0>, __int64 a2@<X1>, __int64 *a3@<X8>)
{
  __int64 v4; // x0
  __int64 v5; // x0
  __int64 v6; // x8
  __int64 v7; // x0
  __int64 v8; // x0
  __int64 v9; // x0
  __int64 v10; // x8
  __int64 v11; // x9
  __int64 v12; // x28
  __int64 v13; // x23
  __int64 v14; // x0
  __int64 v15; // x16
  __int64 v16; // x24
  __int64 v17; // x0
  __int64 v18; // x8
  char *v19; // x19
  __int64 v20; // x0
  __int64 v21; // x12
  char *v22; // x27
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x20
  __int64 v26; // x1
  __int64 v27; // x26
  __int64 (__fastcall *v28)(__int64); // x22
  __int64 v29; // x0
  __int64 v30; // x0
  __int64 *v31; // x8
  __int64 v32; // x26
  __int64 *v33; // x23
  __int64 v34; // x0
  __int64 v35; // x0
  __int64 v36; // x0
  __int64 v37; // x19
  __int64 v38; // x20
  __int64 v39; // x16
  __int64 v40; // x0
  char *v41; // x19
  __int64 v42; // x0
  __int64 v43; // x0
  void (__fastcall *v44)(__int64); // x8
  __int64 v45; // x0
  __int64 v46; // x0
  __int64 v47; // x0
  __int64 v49; // [xsp+0h] [xbp-70h] BYREF
  __int64 *v50; // [xsp+8h] [xbp-68h]
  __int64 v51; // [xsp+10h] [xbp-60h]
  char *v52; // [xsp+18h] [xbp-58h]

  v50 = a3;
  v51 = a2;
  v4 = sub_100003D44(&unk_10005C648);
  v5 = sub_100017CDC(v4);
  __chkstk_darwin(v5);
  v52 = (char *)&v49 - ((v6 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v7 = sub_100003D44(&unk_10005C7F0);
  v8 = sub_100017CDC(v7);
  v9 = __chkstk_darwin(v8);
  sub_100017CE8(v9);
  v12 = v11 - v10;
  v13 = sub_1000459A8(0LL);
  v14 = sub_100005068();
  v16 = v15;
  v17 = __chkstk_darwin(v14);
  v19 = (char *)&v49 - ((v18 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v20 = __chkstk_darwin(v17);
  v22 = (char *)&v49 - v21;
  v23 = sub_1000284C4(v20);
  v24 = sub_1000459B8(v23);
  v25 = sub_100045988(v24);
  v27 = v26;
  v28 = *(__int64 (__fastcall **)(__int64))(v16 + 8);
  v29 = sub_100028454(v22, v13);
  v30 = v28(v29);
  v31 = v50;
  *v50 = v25;
  v31[1] = v27;
  v32 = v13;
  v33 = v31;
  v34 = sub_100028478(v30);
  v35 = sub_1000459B8(v34);
  sub_100045958(v35);
  v36 = sub_100028454(v19, v32);
  v28(v36);
  v37 = sub_100045BD8(0LL);
  if ( (unsigned int)sub_100004D58(v12, 1LL, v37) == 1 )
  {
    sub_10000BCDC(v12, &unk_10005C7F0);
    v38 = 0LL;
  }
  else
  {
    v38 = sub_100045BC8(
            &type metadata for AnyHashable,
            (char *)&type metadata for Any + 8,
            &protocol witness table for AnyHashable);
    sub_100017DAC();
    (*(void (__fastcall **)(__int64, __int64))(v39 + 8))(v12, v37);
  }
  v33[2] = v38;
  v40 = sub_1000459B8(7107189LL);
  v41 = v52;
  sub_100045978(v40);
  v42 = sub_100045AC8(0LL);
  sub_10000BFCC(v42);
  v43 = sub_10000BF90(v51);
  v44(v43);
  v45 = sub_100028454(a1, v32);
  v28(v45);
  v46 = sub_100028454(v22, v32);
  v28(v46);
  v47 = type metadata accessor for JSServiceRequest(0LL);
  return sub_100026038(v41, (char *)v33 + *(int *)(v47 + 24));
}