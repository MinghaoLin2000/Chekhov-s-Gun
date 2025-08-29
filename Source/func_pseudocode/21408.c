$s22localspeechrecognition10ClientInfoVwxx
void __fastcall destroy for ClientInfo(
        _TtC22localspeechrecognition19EARSpeechRecognizer **a1,
        __int64 a2,
        void *a3,
        void *a4,
        void *a5,
        void *a6,
        void *a7,
        void *a8)
{
  SEL v10; // x1
  id v11; // x2
  id v12; // x3
  id v13; // x4
  id v14; // x5
  id v15; // x6
  id v16; // x7
  SEL v17; // x1
  id v18; // x2
  id v19; // x3
  id v20; // x4
  id v21; // x5
  id v22; // x6
  id v23; // x7
  SEL v24; // x1
  id v25; // x2
  id v26; // x3
  id v27; // x4
  id v28; // x5
  id v29; // x6
  id v30; // x7
  char *v31; // x19
  __int64 v32; // x20
  __int64 v33; // x21
  void (__fastcall *v34)(char *, __int64); // x22
  const char *v35; // x1
  void *v36; // x2
  void *v37; // x3
  void *v38; // x4
  void *v39; // x5
  void *v40; // x6
  void *v41; // x7
  _TtC22localspeechrecognition19EARSpeechRecognizer *v42; // x0
  __int64 vars8; // [xsp+38h] [xbp+8h]

  swift_bridgeObjectRelease(a1[1], (SEL)a2, a3, a4, a5, a6, a7, a8);
  swift_bridgeObjectRelease(a1[3], v10, v11, v12, v13, v14, v15, v16);
  swift_bridgeObjectRelease(a1[5], v17, v18, v19, v20, v21, v22, v23);
  swift_bridgeObjectRelease(a1[7], v24, v25, v26, v27, v28, v29, v30);
  v31 = (char *)a1 + *(int *)(a2 + 32);
  v32 = type metadata accessor for ClientInfo.LoggingInfo(0LL);
  if ( !(unsigned int)sub_100004D00(v31, 1LL, v32) )
  {
    v33 = sub_100040F10(0LL);
    v34 = *(void (__fastcall **)(char *, __int64))(*(_QWORD *)(v33 - 8) + 8LL);
    v34(v31, v33);
    v34(&v31[*(int *)(v32 + 20)], v33);
    v42 = *(_TtC22localspeechrecognition19EARSpeechRecognizer **)&v31[*(int *)(v32 + 24) + 8];
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    swift_bridgeObjectRelease(v42, v35, v36, v37, v38, v39, v40, v41);
  }
}