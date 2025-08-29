$s34AppleMediaServicesUIDynamicService16JSServiceRequestVwcp
_QWORD *__fastcall initializeWithCopy for JSServiceRequest(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // x23
  __int64 v5; // x24
  __int64 v6; // x8
  char *v7; // x20
  char *v8; // x21
  __int64 v9; // x22
  __int64 v10; // x0

  v4 = a2[1];
  *a1 = *a2;
  a1[1] = v4;
  v5 = a2[2];
  a1[2] = v5;
  v6 = *(int *)(a3 + 24);
  v7 = (char *)a1 + v6;
  v8 = (char *)a2 + v6;
  v9 = sub_100045608(0LL);
  swift_bridgeObjectRetain(v4);
  swift_bridgeObjectRetain(v5);
  if ( (unsigned int)sub_100004D58(v8, 1LL, v9) )
  {
    v10 = sub_100003D44(&unk_10005C648);
    memcpy(v7, v8, *(_QWORD *)(*(_QWORD *)(v10 - 8) + 64LL));
  }
  else
  {
    (*(void (__fastcall **)(char *, char *, __int64))(*(_QWORD *)(v9 - 8) + 16LL))(v7, v8, v9);
    sub_100004CC8(v7, 0LL, 1LL, v9);
  }
  return a1;
}