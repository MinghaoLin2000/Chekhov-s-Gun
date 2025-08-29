_$s34AppleMediaServicesUIDynamicService16JSServiceRequestV11descriptionSSvg
__int64 JSServiceRequest.description.getter()
{
  _QWORD *v0; // x20
  _QWORD *v1; // x24
  unsigned __int64 v2; // x19
  __int64 v3; // x21
  __int64 v4; // x22
  __int64 v5; // x1
  __int64 v6; // x0
  __int64 v7; // x0
  __int64 v8; // x8
  char *v9; // x23
  __int64 v10; // x12
  char *v11; // x25
  __int64 v12; // x26
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x27
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  char *v25; // x20
  __int64 v26; // x0
  int v27; // w24
  unsigned __int64 v28; // x1
  _QWORD v30[2]; // [xsp+0h] [xbp-70h] BYREF
  __int64 v31; // [xsp+10h] [xbp-60h]
  unsigned __int64 v32; // [xsp+18h] [xbp-58h]

  v1 = v0;
  v2 = 0xE900000000000064LL;
  v3 = 0x656E696665646E75LL;
  v4 = sub_100003D44(&unk_10005C648);
  v6 = sub_100017DAC(v4, v5);
  v7 = __chkstk_darwin(v6);
  v9 = (char *)v30 - ((v8 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  __chkstk_darwin(v7);
  v11 = (char *)v30 - v10;
  v31 = 0LL;
  v32 = 0xE000000000000000LL;
  sub_1000464B8(56LL);
  v12 = type metadata accessor for JSServiceRequest(0LL);
  v30[0] = v12;
  v13 = sub_100003D44(&unk_10005CFA0);
  v14 = sub_1000461A8(v30, v13);
  v16 = v15;
  sub_1000461C8(v14);
  swift_bridgeObjectRelease(v16);
  sub_1000461C8(0xD000000000000013LL);
  v17 = v0[1];
  if ( v17 )
  {
    v30[0] = *v0;
    v30[1] = v17;
    swift_bridgeObjectRetain(v17);
    v18 = sub_100003D44(&unk_10005CD50);
    v19 = sub_1000461A8(v30, v18);
    v16 = v20;
  }
  else
  {
    v19 = sub_10002841C();
  }
  sub_1000461C8(v19);
  swift_bridgeObjectRelease(v16);
  sub_1000461C8(0x706F202020200A29LL);
  v21 = v0[2];
  if ( v21 )
  {
    v30[0] = v0[2];
    swift_bridgeObjectRetain(v21);
    v22 = sub_100003D44(&unk_10005CFA8);
    v23 = sub_1000461A8(v30, v22);
    v16 = v24;
  }
  else
  {
    v23 = sub_10002841C();
  }
  sub_1000461C8(v23);
  swift_bridgeObjectRelease(v16);
  sub_1000461C8(0x7275202020200A29LL);
  v25 = (char *)v0 + *(int *)(v12 + 24);
  sub_1000179B0((char *)v1 + *(int *)(v12 + 24), v11);
  v26 = sub_100045608(0LL);
  v27 = sub_100004D58(v11, 1LL, v26);
  sub_10000BCDC(v11, &unk_10005C648);
  if ( v27 != 1 )
  {
    sub_1000179B0(v25, v9);
    v3 = sub_1000461A8(v9, v4);
    v2 = v28;
  }
  sub_1000461C8(v3);
  swift_bridgeObjectRelease(v2);
  sub_1000461C8(8194601LL);
  return v31;
}