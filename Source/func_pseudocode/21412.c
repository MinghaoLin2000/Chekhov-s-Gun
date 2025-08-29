$s22localspeechrecognition10ClientInfoVwta
_QWORD *__fastcall assignWithTake for ClientInfo(
        _QWORD *a1,
        __int64 a2,
        int *a3,
        void *a4,
        void *a5,
        void *a6,
        void *a7,
        void *a8)
{
  __int64 v11; // x9
  _TtC22localspeechrecognition19EARSpeechRecognizer *v12; // x0
  __int64 v13; // x9
  _TtC22localspeechrecognition19EARSpeechRecognizer *v14; // x0
  SEL v15; // x1
  id v16; // x2
  id v17; // x3
  id v18; // x4
  id v19; // x5
  id v20; // x6
  id v21; // x7
  __int64 v22; // x9
  _TtC22localspeechrecognition19EARSpeechRecognizer *v23; // x0
  SEL v24; // x1
  id v25; // x2
  id v26; // x3
  id v27; // x4
  id v28; // x5
  id v29; // x6
  id v30; // x7
  __int64 v31; // x9
  _TtC22localspeechrecognition19EARSpeechRecognizer *v32; // x0
  SEL v33; // x1
  id v34; // x2
  id v35; // x3
  id v36; // x4
  id v37; // x5
  id v38; // x6
  id v39; // x7
  __int64 v40; // x8
  char *v41; // x20
  char *v42; // x21
  __int64 v43; // x22
  int v44; // w23
  int v45; // w0
  __int64 v46; // x1
  __int64 v47; // x23
  void (__fastcall *v48)(char *, char *, __int64); // x24
  __int64 v49; // x0
  __int64 v51; // x23
  void (__fastcall *v52)(char *, char *, __int64); // x24
  __int64 v53; // x8
  char *v54; // x9
  char *v55; // x8
  __int64 v56; // x8
  __int64 v57; // x10
  _TtC22localspeechrecognition19EARSpeechRecognizer *v58; // x0
  SEL v59; // x1
  id v60; // x2
  id v61; // x3
  id v62; // x4
  id v63; // x5
  id v64; // x6
  id v65; // x7

  v11 = *(_QWORD *)(a2 + 8);
  v12 = (_TtC22localspeechrecognition19EARSpeechRecognizer *)a1[1];
  *a1 = *(_QWORD *)a2;
  a1[1] = v11;
  swift_bridgeObjectRelease(v12, (SEL)a2, a3, a4, a5, a6, a7, a8);
  v13 = *(_QWORD *)(a2 + 24);
  v14 = (_TtC22localspeechrecognition19EARSpeechRecognizer *)a1[3];
  a1[2] = *(_QWORD *)(a2 + 16);
  a1[3] = v13;
  swift_bridgeObjectRelease(v14, v15, v16, v17, v18, v19, v20, v21);
  v22 = *(_QWORD *)(a2 + 40);
  v23 = (_TtC22localspeechrecognition19EARSpeechRecognizer *)a1[5];
  a1[4] = *(_QWORD *)(a2 + 32);
  a1[5] = v22;
  swift_bridgeObjectRelease(v23, v24, v25, v26, v27, v28, v29, v30);
  v31 = *(_QWORD *)(a2 + 56);
  v32 = (_TtC22localspeechrecognition19EARSpeechRecognizer *)a1[7];
  a1[6] = *(_QWORD *)(a2 + 48);
  a1[7] = v31;
  swift_bridgeObjectRelease(v32, v33, v34, v35, v36, v37, v38, v39);
  v40 = a3[8];
  v41 = (char *)a1 + v40;
  v42 = (char *)(a2 + v40);
  v43 = type metadata accessor for ClientInfo.LoggingInfo(0LL);
  v44 = sub_100004D00(v41, 1LL, v43);
  v45 = sub_100004D00(v42, 1LL, v43);
  if ( !v44 )
  {
    if ( !v45 )
    {
      v51 = sub_100040F10(0LL);
      v52 = *(void (__fastcall **)(char *, char *, __int64))(*(_QWORD *)(v51 - 8) + 40LL);
      v52(v41, v42, v51);
      v52(&v41[*(int *)(v43 + 20)], &v42[*(int *)(v43 + 20)], v51);
      v53 = *(int *)(v43 + 24);
      v54 = &v41[v53];
      v55 = &v42[v53];
      v57 = *(_QWORD *)v55;
      v56 = *((_QWORD *)v55 + 1);
      v58 = (_TtC22localspeechrecognition19EARSpeechRecognizer *)*((_QWORD *)v54 + 1);
      *(_QWORD *)v54 = v57;
      *((_QWORD *)v54 + 1) = v56;
      swift_bridgeObjectRelease(v58, v59, v60, v61, v62, v63, v64, v65);
      return a1;
    }
    sub_100029D28(v41);
    goto LABEL_6;
  }
  if ( v45 )
  {
LABEL_6:
    v49 = sub_100004C54(&unk_100064388, v46);
    memcpy(v41, v42, *(_QWORD *)(*(_QWORD *)(v49 - 8) + 64LL));
    return a1;
  }
  v47 = sub_100040F10(0LL);
  v48 = *(void (__fastcall **)(char *, char *, __int64))(*(_QWORD *)(v47 - 8) + 32LL);
  v48(v41, v42, v47);
  v48(&v41[*(int *)(v43 + 20)], &v42[*(int *)(v43 + 20)], v47);
  *(_OWORD *)&v41[*(int *)(v43 + 24)] = *(_OWORD *)&v42[*(int *)(v43 + 24)];
  sub_1000075A8(v41, 0LL, 1LL, v43);
  return a1;
}