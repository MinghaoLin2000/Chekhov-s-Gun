$s22localspeechrecognition10ClientInfoVwca
_QWORD *__fastcall assignWithCopy for ClientInfo(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // x0
  _TtC22localspeechrecognition19EARSpeechRecognizer *v7; // x22
  SEL v8; // x1
  id v9; // x2
  id v10; // x3
  id v11; // x4
  id v12; // x5
  id v13; // x6
  id v14; // x7
  __int64 v15; // x0
  _TtC22localspeechrecognition19EARSpeechRecognizer *v16; // x22
  SEL v17; // x1
  id v18; // x2
  id v19; // x3
  id v20; // x4
  id v21; // x5
  id v22; // x6
  id v23; // x7
  __int64 v24; // x0
  _TtC22localspeechrecognition19EARSpeechRecognizer *v25; // x22
  SEL v26; // x1
  id v27; // x2
  id v28; // x3
  id v29; // x4
  id v30; // x5
  id v31; // x6
  id v32; // x7
  __int64 v33; // x0
  _TtC22localspeechrecognition19EARSpeechRecognizer *v34; // x22
  SEL v35; // x1
  id v36; // x2
  id v37; // x3
  id v38; // x4
  id v39; // x5
  id v40; // x6
  id v41; // x7
  __int64 v42; // x8
  char *v43; // x20
  char *v44; // x21
  __int64 v45; // x22
  int v46; // w23
  int v47; // w0
  __int64 v48; // x1
  __int64 v49; // x23
  void (__fastcall *v50)(char *, char *, __int64); // x24
  __int64 v51; // x8
  char *v52; // x9
  char *v53; // x8
  __int64 v54; // x0
  __int64 v55; // x0
  __int64 v57; // x23
  void (__fastcall *v58)(char *, char *, __int64); // x24
  __int64 v59; // x8
  char *v60; // x9
  char *v61; // x8
  __int64 v62; // x0
  _TtC22localspeechrecognition19EARSpeechRecognizer *v63; // x20
  SEL v64; // x1
  id v65; // x2
  id v66; // x3
  id v67; // x4
  id v68; // x5
  id v69; // x6
  id v70; // x7

  *a1 = *a2;
  v6 = a2[1];
  v7 = (_TtC22localspeechrecognition19EARSpeechRecognizer *)a1[1];
  a1[1] = v6;
  swift_bridgeObjectRetain(v6);
  swift_bridgeObjectRelease(v7, v8, v9, v10, v11, v12, v13, v14);
  a1[2] = a2[2];
  v15 = a2[3];
  v16 = (_TtC22localspeechrecognition19EARSpeechRecognizer *)a1[3];
  a1[3] = v15;
  swift_bridgeObjectRetain(v15);
  swift_bridgeObjectRelease(v16, v17, v18, v19, v20, v21, v22, v23);
  a1[4] = a2[4];
  v24 = a2[5];
  v25 = (_TtC22localspeechrecognition19EARSpeechRecognizer *)a1[5];
  a1[5] = v24;
  swift_bridgeObjectRetain(v24);
  swift_bridgeObjectRelease(v25, v26, v27, v28, v29, v30, v31, v32);
  a1[6] = a2[6];
  v33 = a2[7];
  v34 = (_TtC22localspeechrecognition19EARSpeechRecognizer *)a1[7];
  a1[7] = v33;
  swift_bridgeObjectRetain(v33);
  swift_bridgeObjectRelease(v34, v35, v36, v37, v38, v39, v40, v41);
  v42 = *(int *)(a3 + 32);
  v43 = (char *)a1 + v42;
  v44 = (char *)a2 + v42;
  v45 = type metadata accessor for ClientInfo.LoggingInfo(0LL);
  v46 = sub_100004D00(v43, 1LL, v45);
  v47 = sub_100004D00(v44, 1LL, v45);
  if ( !v46 )
  {
    if ( !v47 )
    {
      v57 = sub_100040F10(0LL);
      v58 = *(void (__fastcall **)(char *, char *, __int64))(*(_QWORD *)(v57 - 8) + 24LL);
      v58(v43, v44, v57);
      v58(&v43[*(int *)(v45 + 20)], &v44[*(int *)(v45 + 20)], v57);
      v59 = *(int *)(v45 + 24);
      v60 = &v43[v59];
      v61 = &v44[v59];
      *(_QWORD *)v60 = *(_QWORD *)v61;
      v62 = *((_QWORD *)v61 + 1);
      v63 = (_TtC22localspeechrecognition19EARSpeechRecognizer *)*((_QWORD *)v60 + 1);
      *((_QWORD *)v60 + 1) = v62;
      swift_bridgeObjectRetain(v62);
      swift_bridgeObjectRelease(v63, v64, v65, v66, v67, v68, v69, v70);
      return a1;
    }
    sub_100029D28(v43);
    goto LABEL_6;
  }
  if ( v47 )
  {
LABEL_6:
    v55 = sub_100004C54(&unk_100064388, v48);
    memcpy(v43, v44, *(_QWORD *)(*(_QWORD *)(v55 - 8) + 64LL));
    return a1;
  }
  v49 = sub_100040F10(0LL);
  v50 = *(void (__fastcall **)(char *, char *, __int64))(*(_QWORD *)(v49 - 8) + 16LL);
  v50(v43, v44, v49);
  v50(&v43[*(int *)(v45 + 20)], &v44[*(int *)(v45 + 20)], v49);
  v51 = *(int *)(v45 + 24);
  v52 = &v43[v51];
  v53 = &v44[v51];
  *(_QWORD *)v52 = *(_QWORD *)v53;
  v54 = *((_QWORD *)v53 + 1);
  *((_QWORD *)v52 + 1) = v54;
  swift_bridgeObjectRetain(v54);
  sub_1000075A8(v43, 0LL, 1LL, v45);
  return a1;
}