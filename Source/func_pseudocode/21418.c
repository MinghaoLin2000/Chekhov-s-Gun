$s22localspeechrecognition10ClientInfoV11LoggingInfoVwca
__int64 __fastcall assignWithCopy for ClientInfo.LoggingInfo(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // x22
  void (__fastcall *v7)(__int64, __int64, __int64); // x23
  __int64 v8; // x8
  _QWORD *v9; // x9
  _QWORD *v10; // x8
  __int64 v11; // x0
  _TtC22localspeechrecognition19EARSpeechRecognizer *v12; // x19
  SEL v13; // x1
  id v14; // x2
  id v15; // x3
  id v16; // x4
  id v17; // x5
  id v18; // x6
  id v19; // x7

  v6 = sub_100040F10(0LL);
  v7 = *(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v6 - 8) + 24LL);
  v7(a1, a2, v6);
  v7(a1 + *(int *)(a3 + 20), a2 + *(int *)(a3 + 20), v6);
  v8 = *(int *)(a3 + 24);
  v9 = (_QWORD *)(a1 + v8);
  v10 = (_QWORD *)(a2 + v8);
  *v9 = *v10;
  v11 = v10[1];
  v12 = (_TtC22localspeechrecognition19EARSpeechRecognizer *)v9[1];
  v9[1] = v11;
  swift_bridgeObjectRetain(v11);
  swift_bridgeObjectRelease(v12, v13, v14, v15, v16, v17, v18, v19);
  return a1;
}