_$s19ControlCenterHelperAAC27presentScreenMirroringAlert9displayID0H4Name0H9IsSpatial7options8responseys6UInt32V_SSSbShySiGyAA0efG6ResultOctF
__int64 __fastcall ControlCenterHelper.presentScreenMirroringAlert(displayID:displayName:displayIsSpatial:options:response:)(
        int a1,
        __int64 a2,
        __int64 a3,
        char a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v9; // x26
  __int64 v10; // x0
  __int64 v11; // x16
  __int64 v12; // x0
  __int64 v13; // x8
  __int64 v14; // x9
  __int64 v15; // x25
  __int64 v16; // x0
  __int64 v17; // x16
  __int64 v18; // x0
  __int64 v19; // x8
  __int64 v20; // x9
  __int64 v21; // x24
  __int64 v22; // x0
  __int64 v23; // x21
  unsigned int *v24; // x0
  int v25; // w0
  int v26; // w27
  __int64 v27; // x0
  os_log_s *v28; // x20
  os_log_type_t v29; // w22
  uint8_t *v30; // x26
  __int64 *v31; // x25
  __int64 v32; // x23
  __int64 v33; // x0
  __int64 v34; // x0
  _DWORD *v35; // x1
  __int64 v36; // x23
  __int64 v37; // x0
  __int64 *v38; // x0
  uint8_t *v39; // x0
  __int64 v40; // x0
  os_log_s *v41; // x20
  os_log_type_t v42; // w22
  uint8_t *v43; // x19
  int v44; // w19
  char v45; // w0
  __int64 v46; // x22
  char v47; // w0
  char v48; // w23
  char v49; // w19
  void *v50; // x27
  __int64 v51; // x0
  void *v52; // x21
  __int64 v53; // x19
  __int64 v54; // x0
  __int64 v55; // x19
  __int64 v56; // x20
  __int64 v57; // x0
  __int64 v59; // [xsp+8h] [xbp-118h]
  __int64 v60; // [xsp+10h] [xbp-110h]
  __int64 v66; // [xsp+38h] [xbp-E8h]
  __int64 v67; // [xsp+40h] [xbp-E0h]
  __int64 v68; // [xsp+48h] [xbp-D8h]
  void **aBlock; // [xsp+50h] [xbp-D0h] BYREF
  _QWORD v70[4]; // [xsp+58h] [xbp-C8h] BYREF
  __int64 v71; // [xsp+78h] [xbp-A8h]
  _DWORD v72[3]; // [xsp+84h] [xbp-9Ch] BYREF
  char v73[24]; // [xsp+90h] [xbp-90h] BYREF
  char v74[24]; // [xsp+A8h] [xbp-78h] BYREF

  v9 = sub_10006FEF0(0LL);
  v10 = sub_10000B2FC();
  v68 = v11;
  v12 = __chkstk_darwin(v10);
  sub_100014458(v12);
  v67 = v14 - v13;
  v15 = sub_10006FF30(0LL);
  v16 = sub_10000B2FC();
  v66 = v17;
  v18 = __chkstk_darwin(v16);
  sub_100014458(v18);
  v21 = v20 - v19;
  v22 = sub_10001E698(a5);
  v23 = sub_10001DF74(v22);
  v72[0] = 0;
  v24 = (unsigned int *)CGSConnection.main.unsafeMutableAddressor();
  v25 = SLSGetTVConnectDefaultPolicy(*v24, v72);
  if ( v25 )
  {
    v26 = v25;
    if ( qword_1000939B8 != -1 )
      swift_once(&qword_1000939B8, sub_1000076D8);
    v27 = sub_10006EE70(0LL);
    sub_10000677C(v27, &unk_1000976B8);
    v28 = (os_log_s *)sub_10006EE40();
    v29 = (unsigned __int8)sub_100070310();
    if ( os_log_type_enabled(v28, v29) )
    {
      v60 = v9;
      v30 = (uint8_t *)swift_slowAlloc(12LL, -1LL);
      v59 = v15;
      v31 = (__int64 *)swift_slowAlloc(8LL, -1LL);
      *(_DWORD *)v30 = 138543362;
      v32 = type metadata accessor for CGError(0LL);
      v33 = sub_100020240(
              &qword_100095060,
              type metadata accessor for CGError,
              &protocol conformance descriptor for CGError);
      v34 = swift_allocError(v32, v33, 0LL, 0LL);
      *v35 = v26;
      v36 = _swift_stdlib_bridgeErrorToNSError(v34);
      aBlock = (void **)v36;
      sub_1000704F0(&aBlock, v70, v30 + 4, v30 + 12);
      *v31 = v36;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v28,
        v29,
        "Failed to get default connection policy; %{public}@",
        v30,
        0xCu);
      v37 = sub_1000071C4(&unk_100095068);
      swift_arrayDestroy(v31, 1LL, v37);
      v38 = v31;
      v15 = v59;
      swift_slowDealloc(v38, -1LL, -1LL);
      v39 = v30;
      v9 = v60;
      swift_slowDealloc(v39, -1LL, -1LL);
    }
    objc_release(v28);
    v72[0] = 0;
  }
  else
  {
    if ( qword_1000939B8 != -1 )
      swift_once(&qword_1000939B8, sub_1000076D8);
    v40 = sub_10006EE70(0LL);
    sub_10000677C(v40, &unk_1000976B8);
    v41 = (os_log_s *)sub_10006EE40();
    v42 = (unsigned __int8)sub_100070330();
    if ( os_log_type_enabled(v41, v42) )
    {
      v43 = (uint8_t *)swift_slowAlloc(8LL, -1LL);
      *(_DWORD *)v43 = 67240192;
      swift_beginAccess(v72, v73, 0LL, 0LL);
      LODWORD(aBlock) = v72[0];
      sub_1000704F0(&aBlock, (char *)&aBlock + 4, v43 + 4, v43 + 8);
      _os_log_impl((void *)&_mh_execute_header, v41, v42, "Using default connection policy %{public}d", v43, 8u);
      swift_slowDealloc(v43, -1LL, -1LL);
    }
    objc_release(v41);
  }
  swift_beginAccess(v72, v74, 0LL, 0LL);
  v44 = v72[0];
  if ( v72[0] == 4 )
  {
    v47 = sub_10001DEAC(0LL, v23);
    v46 = v47 & 1;
    v48 = v47 ^ 1;
  }
  else
  {
    if ( v72[0] == 2 )
    {
      v45 = sub_10001DEAC(0LL, v23);
      v46 = 0LL;
LABEL_21:
      v48 = v45 ^ 1;
      goto LABEL_22;
    }
    v46 = 3LL;
    if ( (sub_10001DEAC(3LL, v23) & 1) == 0 )
    {
      v45 = sub_10001DEAC(2LL, v23);
      if ( (v45 & 1) != 0 )
        v46 = 2LL;
      else
        v46 = 0LL;
      goto LABEL_21;
    }
    v48 = 0;
  }
LABEL_22:
  v49 = (v44 != 0) & sub_10001DEAC(4LL, v23);
  sub_10000A424(0LL);
  v50 = (void *)sub_1000703A0();
  v51 = swift_allocObject(&unk_10008B9A0, 88LL, 7LL);
  *(_DWORD *)(v51 + 16) = a1;
  *(_QWORD *)(v51 + 24) = a2;
  *(_QWORD *)(v51 + 32) = a3;
  *(_BYTE *)(v51 + 40) = a4 & 1;
  *(_QWORD *)(v51 + 48) = v23;
  *(_QWORD *)(v51 + 56) = v46;
  *(_BYTE *)(v51 + 64) = v48 & 1;
  *(_BYTE *)(v51 + 65) = v49;
  *(_QWORD *)(v51 + 72) = a6;
  *(_QWORD *)(v51 + 80) = a7;
  v70[3] = sub_1000201E8;
  v71 = v51;
  aBlock = _NSConcreteStackBlock;
  v70[0] = 1107296256LL;
  v70[1] = sub_10000A148;
  v70[2] = &unk_10008B9B8;
  v52 = _Block_copy(&aBlock);
  v53 = v71;
  swift_bridgeObjectRetain(a3);
  swift_retain(a7);
  v54 = swift_release(v53);
  sub_10006FF10(v54);
  aBlock = (void **)&_swiftEmptyArrayStorage;
  v55 = sub_100020240(
          &qword_1000966F0,
          &type metadata accessor for DispatchWorkItemFlags,
          &protocol conformance descriptor for DispatchWorkItemFlags);
  v56 = sub_1000071C4(&unk_100094900);
  v57 = sub_100009FCC();
  sub_100070540(&aBlock, v56, v57, v9, v55);
  sub_1000703B0(0LL, v21);
  _Block_release(v52);
  objc_release(v50);
  (*(void (__fastcall **)(__int64, __int64))(v68 + 8))(v67, v9);
  return (*(__int64 (__fastcall **)(__int64, __int64))(v66 + 8))(v21, v15);
}