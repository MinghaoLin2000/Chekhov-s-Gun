$s22localspeechrecognition10ClientInfoVwcp
_QWORD *__fastcall initializeWithCopy for ClientInfo(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // x23
  __int64 v5; // x24
  __int64 v6; // x25
  __int64 v7; // x26
  __int64 v8; // x9
  char *v9; // x21
  char *v10; // x20
  __int64 v11; // x22
  __int64 v12; // x1
  __int64 v13; // x0
  __int64 v14; // x23
  void (__fastcall *v15)(char *, char *, __int64); // x24
  __int64 v16; // x8
  char *v17; // x9
  char *v18; // x8
  __int64 v19; // x0

  v4 = a2[1];
  *a1 = *a2;
  a1[1] = v4;
  v5 = a2[3];
  a1[2] = a2[2];
  a1[3] = v5;
  v6 = a2[5];
  a1[4] = a2[4];
  a1[5] = v6;
  v7 = a2[7];
  v8 = *(int *)(a3 + 32);
  v9 = (char *)a2 + v8;
  v10 = (char *)a1 + v8;
  a1[6] = a2[6];
  a1[7] = v7;
  v11 = type metadata accessor for ClientInfo.LoggingInfo(0LL);
  swift_bridgeObjectRetain(v4);
  swift_bridgeObjectRetain(v5);
  swift_bridgeObjectRetain(v6);
  swift_bridgeObjectRetain(v7);
  if ( (unsigned int)sub_100004D00(v9, 1LL, v11) )
  {
    v13 = sub_100004C54(&unk_100064388, v12);
    memcpy(v10, v9, *(_QWORD *)(*(_QWORD *)(v13 - 8) + 64LL));
  }
  else
  {
    v14 = sub_100040F10(0LL);
    v15 = *(void (__fastcall **)(char *, char *, __int64))(*(_QWORD *)(v14 - 8) + 16LL);
    v15(v10, v9, v14);
    v15(&v10[*(int *)(v11 + 20)], &v9[*(int *)(v11 + 20)], v14);
    v16 = *(int *)(v11 + 24);
    v17 = &v10[v16];
    v18 = &v9[v16];
    v19 = *((_QWORD *)v18 + 1);
    *(_QWORD *)v17 = *(_QWORD *)v18;
    *((_QWORD *)v17 + 1) = v19;
    swift_bridgeObjectRetain(v19);
    sub_1000075A8(v10, 0LL, 1LL, v11);
  }
  return a1;
}