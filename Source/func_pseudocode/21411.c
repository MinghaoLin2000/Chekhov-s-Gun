$s22localspeechrecognition10ClientInfoVwtk
_OWORD *__fastcall initializeWithTake for ClientInfo(_OWORD *a1, _OWORD *a2, __int64 a3)
{
  __int128 v4; // q1
  __int128 v5; // q1
  __int64 v6; // x8
  char *v7; // x20
  char *v8; // x21
  __int64 v9; // x22
  __int64 v10; // x1
  __int64 v11; // x0
  __int64 v12; // x23
  void (__fastcall *v13)(char *, char *, __int64); // x24

  v4 = a2[1];
  *a1 = *a2;
  a1[1] = v4;
  v5 = a2[3];
  a1[2] = a2[2];
  a1[3] = v5;
  v6 = *(int *)(a3 + 32);
  v7 = (char *)a1 + v6;
  v8 = (char *)a2 + v6;
  v9 = type metadata accessor for ClientInfo.LoggingInfo(0LL);
  if ( (unsigned int)sub_100004D00(v8, 1LL, v9) )
  {
    v11 = sub_100004C54(&unk_100064388, v10);
    memcpy(v7, v8, *(_QWORD *)(*(_QWORD *)(v11 - 8) + 64LL));
  }
  else
  {
    v12 = sub_100040F10(0LL);
    v13 = *(void (__fastcall **)(char *, char *, __int64))(*(_QWORD *)(v12 - 8) + 32LL);
    v13(v7, v8, v12);
    v13(&v7[*(int *)(v9 + 20)], &v8[*(int *)(v9 + 20)], v12);
    *(_OWORD *)&v7[*(int *)(v9 + 24)] = *(_OWORD *)&v8[*(int *)(v9 + 24)];
    sub_1000075A8(v7, 0LL, 1LL, v9);
  }
  return a1;
}