$s34AppleMediaServicesUIDynamicService16JSServiceRequestVwca
_QWORD *__fastcall assignWithCopy for JSServiceRequest(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // x0
  __int64 v7; // x22
  __int64 v8; // x22
  __int64 v9; // x0
  __int64 v10; // x8
  char *v11; // x20
  char *v12; // x21
  __int64 v13; // x22
  int v14; // w23
  int v15; // w0
  __int64 v16; // x16
  __int64 v17; // x0

  *a1 = *a2;
  v6 = a2[1];
  v7 = a1[1];
  a1[1] = v6;
  swift_bridgeObjectRetain(v6);
  swift_bridgeObjectRelease(v7);
  v8 = a1[2];
  v9 = a2[2];
  a1[2] = v9;
  swift_bridgeObjectRetain(v9);
  swift_bridgeObjectRelease(v8);
  v10 = *(int *)(a3 + 24);
  v11 = (char *)a1 + v10;
  v12 = (char *)a2 + v10;
  v13 = sub_100045608(0LL);
  v14 = sub_100004D58(v11, 1LL, v13);
  v15 = sub_100004D58(v12, 1LL, v13);
  if ( !v14 )
  {
    v16 = *(_QWORD *)(v13 - 8);
    if ( !v15 )
    {
      (*(void (__fastcall **)(char *, char *, __int64))(v16 + 24))(v11, v12, v13);
      return a1;
    }
    (*(void (__fastcall **)(char *, __int64))(v16 + 8))(v11, v13);
    goto LABEL_6;
  }
  if ( v15 )
  {
LABEL_6:
    v17 = sub_100003D44(&unk_10005C648);
    memcpy(v11, v12, *(_QWORD *)(*(_QWORD *)(v17 - 8) + 64LL));
    return a1;
  }
  (*(void (__fastcall **)(char *, char *, __int64))(*(_QWORD *)(v13 - 8) + 16LL))(v11, v12, v13);
  sub_100004CC8(v11, 0LL, 1LL, v13);
  return a1;
}