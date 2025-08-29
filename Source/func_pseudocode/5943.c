_$s33SiriSuggestionsBookkeepingService07DefaultB13LoggerFactoryC6create07featureD00aB3API0bF0_p0aB12Intelligence08_FeatureD0_p_tF
__int64 __usercall DefaultSuggestionsLoggerFactory.create(featureService:)@<X0>(__int64 a1@<X0>, __int64 *a2@<X8>)
{
  __int64 v2; // x20
  __int64 v3; // x21
  __int64 v6; // x22
  __int64 v7; // x0
  __int64 v8; // x16
  __int64 v9; // x28
  __int64 v10; // x0
  __int64 v11; // x8
  _BYTE *v12; // x24
  __int64 v13; // x12
  _BYTE *v14; // x25
  __int64 v15; // x26
  __int64 v16; // x27
  __int64 v17; // x0
  os_log_s *v18; // x20
  os_log_type_t v19; // w24
  uint8_t *v20; // x26
  __int64 v21; // x21
  __int64 v22; // x22
  __int64 v23; // x20
  void *v24; // x0
  __int64 v25; // x0
  os_log_s *v26; // x20
  os_log_type_t v27; // w23
  uint8_t *v28; // x25
  _BYTE v31[40]; // [xsp+8h] [xbp-78h] BYREF

  v3 = v2;
  v6 = sub_10000D9B8(0LL);
  v7 = sub_100005C1C();
  v9 = v8;
  v10 = __chkstk_darwin(v7);
  v12 = &v31[-((v11 + 15) & 0xFFFFFFFFFFFFFFF0LL) - 8];
  __chkstk_darwin(v10);
  v14 = &v31[-v13 - 8];
  v15 = *(_QWORD *)(v2 + 40);
  v16 = *(_QWORD *)(v2 + 48);
  sub_100005B00(v2 + 16, v15);
  if ( (sub_10000D7F8(v15, v16) & 1) != 0 )
  {
    v17 = sub_10000D858();
    v18 = (os_log_s *)sub_10000D998(v17);
    v19 = (unsigned __int8)sub_10000DA28();
    if ( os_log_type_enabled(v18, v19) )
    {
      v20 = (uint8_t *)swift_slowAlloc(2LL, -1LL);
      *(_WORD *)v20 = 0;
      _os_log_impl((void *)&_mh_execute_header, v18, v19, "Enabled feature extraction logger", v20, 2u);
      swift_slowDealloc(v20, -1LL, -1LL);
    }
    objc_release(v18);
    (*(void (__fastcall **)(_BYTE *, __int64))(v9 + 8))(v14, v6);
    sub_1000052BC(a1, v31);
    v21 = *(_QWORD *)(v3 + 56);
    v22 = sub_10000D8C8(0LL);
    swift_allocObject(v22, 96LL, 7LL);
    v23 = sub_10000D8B8(v31, v21, 0LL, 1LL, 0LL, 0LL);
    a2[3] = v22;
    v24 = (void *)sub_100005B44();
  }
  else
  {
    v25 = sub_10000D858();
    v26 = (os_log_s *)sub_10000D998(v25);
    v27 = (unsigned __int8)sub_10000DA28();
    if ( os_log_type_enabled(v26, v27) )
    {
      v28 = (uint8_t *)swift_slowAlloc(2LL, -1LL);
      *(_WORD *)v28 = 0;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v26,
        v27,
        "Feature Extraction disabled. Only using raw remembers logger",
        v28,
        2u);
      swift_slowDealloc(v28, -1LL, -1LL);
    }
    objc_release(v26);
    (*(void (__fastcall **)(_BYTE *, __int64))(v9 + 8))(v12, v6);
    v23 = *(_QWORD *)(v3 + 56);
    a2[3] = sub_10000D788(0LL);
    v24 = &protocol witness table for SiriRemembersLogger;
    v21 = v23;
  }
  a2[4] = (__int64)v24;
  *a2 = v23;
  return swift_retain(v21);
}