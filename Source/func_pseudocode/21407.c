$s22localspeechrecognition10ClientInfoVwCP
__int64 *__fastcall initializeBufferWithCopyOfBuffer for ClientInfo(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 *v3; // x19
  int v4; // w8
  __int64 v5; // x23
  __int64 v6; // x24
  __int64 v7; // x25
  __int64 v8; // x26
  __int64 v9; // x9
  char *v10; // x21
  char *v11; // x20
  __int64 v12; // x22
  __int64 v13; // x1
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x23
  void (__fastcall *v17)(char *, char *, __int64); // x24
  __int64 v18; // x8
  char *v19; // x9
  char *v20; // x8
  __int64 v21; // x0

  v3 = a1;
  v4 = *(_DWORD *)(*(_QWORD *)(a3 - 8) + 80LL);
  if ( (v4 & 0x20000) != 0 )
  {
    v15 = *a2;
    *v3 = *a2;
    v3 = (__int64 *)(v15 + (((unsigned __int8)v4 + 16LL) & ~(unsigned __int64)(unsigned __int8)v4));
    swift_retain();
  }
  else
  {
    v5 = a2[1];
    *a1 = *a2;
    a1[1] = v5;
    v6 = a2[3];
    a1[2] = a2[2];
    a1[3] = v6;
    v7 = a2[5];
    a1[4] = a2[4];
    a1[5] = v7;
    v8 = a2[7];
    v9 = *(int *)(a3 + 32);
    v10 = (char *)a2 + v9;
    v11 = (char *)a1 + v9;
    a1[6] = a2[6];
    a1[7] = v8;
    v12 = type metadata accessor for ClientInfo.LoggingInfo(0LL);
    swift_bridgeObjectRetain(v5);
    swift_bridgeObjectRetain(v6);
    swift_bridgeObjectRetain(v7);
    swift_bridgeObjectRetain(v8);
    if ( (unsigned int)sub_100004D00(v10, 1LL, v12) )
    {
      v14 = sub_100004C54(&unk_100064388, v13);
      memcpy(v11, v10, *(_QWORD *)(*(_QWORD *)(v14 - 8) + 64LL));
    }
    else
    {
      v16 = sub_100040F10(0LL);
      v17 = *(void (__fastcall **)(char *, char *, __int64))(*(_QWORD *)(v16 - 8) + 16LL);
      v17(v11, v10, v16);
      v17(&v11[*(int *)(v12 + 20)], &v10[*(int *)(v12 + 20)], v16);
      v18 = *(int *)(v12 + 24);
      v19 = &v11[v18];
      v20 = &v10[v18];
      v21 = *((_QWORD *)v20 + 1);
      *(_QWORD *)v19 = *(_QWORD *)v20;
      *((_QWORD *)v19 + 1) = v21;
      swift_bridgeObjectRetain(v21);
      sub_1000075A8(v11, 0LL, 1LL, v12);
    }
  }
  return v3;
}