$s34AppleMediaServicesUIDynamicService16JSServiceRequestVwta
_QWORD *__fastcall assignWithTake for JSServiceRequest(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // x9
  __int64 v7; // x0
  __int64 v8; // x0
  __int64 v9; // x8
  char *v10; // x20
  char *v11; // x21
  __int64 v12; // x22
  int v13; // w23
  int v14; // w0
  __int64 v15; // x16
  __int64 v16; // x0

  v6 = a2[1];
  v7 = a1[1];
  *a1 = *a2;
  a1[1] = v6;
  swift_bridgeObjectRelease(v7);
  v8 = a1[2];
  a1[2] = a2[2];
  swift_bridgeObjectRelease(v8);
  v9 = *(int *)(a3 + 24);
  v10 = (char *)a1 + v9;
  v11 = (char *)a2 + v9;
  v12 = sub_100045608(0LL);
  v13 = sub_100004D58(v10, 1LL, v12);
  v14 = sub_100004D58(v11, 1LL, v12);
  if ( !v13 )
  {
    v15 = *(_QWORD *)(v12 - 8);
    if ( !v14 )
    {
      (*(void (__fastcall **)(char *, char *, __int64))(v15 + 40))(v10, v11, v12);
      return a1;
    }
    (*(void (__fastcall **)(char *, __int64))(v15 + 8))(v10, v12);
    goto LABEL_6;
  }
  if ( v14 )
  {
LABEL_6:
    v16 = sub_100003D44(&unk_10005C648);
    memcpy(v10, v11, *(_QWORD *)(*(_QWORD *)(v16 - 8) + 64LL));
    return a1;
  }
  (*(void (__fastcall **)(char *, char *, __int64))(*(_QWORD *)(v12 - 8) + 32LL))(v10, v11, v12);
  sub_100004CC8(v10, 0LL, 1LL, v12);
  return a1;
}