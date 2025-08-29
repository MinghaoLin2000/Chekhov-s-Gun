$s34AppleMediaServicesUIDynamicService16JSServiceRequestVwCP
__int64 *__fastcall initializeBufferWithCopyOfBuffer for JSServiceRequest(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 *v3; // x19
  int v4; // w8
  __int64 v5; // x23
  __int64 v6; // x24
  __int64 v7; // x8
  char *v8; // x20
  char *v9; // x21
  __int64 v10; // x22
  __int64 v11; // x0
  __int64 v12; // x0

  v3 = a1;
  v4 = *(_DWORD *)(*(_QWORD *)(a3 - 8) + 80LL);
  if ( (v4 & 0x20000) != 0 )
  {
    v12 = *a2;
    *v3 = *a2;
    v3 = (__int64 *)(v12 + (((unsigned __int8)v4 + 16LL) & ~(unsigned __int64)(unsigned __int8)v4));
    swift_retain(v12);
  }
  else
  {
    v5 = a2[1];
    *a1 = *a2;
    a1[1] = v5;
    v6 = a2[2];
    a1[2] = v6;
    v7 = *(int *)(a3 + 24);
    v8 = (char *)a1 + v7;
    v9 = (char *)a2 + v7;
    v10 = sub_100045608(0LL);
    swift_bridgeObjectRetain(v5);
    swift_bridgeObjectRetain(v6);
    if ( (unsigned int)sub_100004D58(v9, 1LL, v10) )
    {
      v11 = sub_100003D44(&unk_10005C648);
      memcpy(v8, v9, *(_QWORD *)(*(_QWORD *)(v11 - 8) + 64LL));
    }
    else
    {
      (*(void (__fastcall **)(char *, char *, __int64))(*(_QWORD *)(v10 - 8) + 16LL))(v8, v9, v10);
      sub_100004CC8(v8, 0LL, 1LL, v10);
    }
  }
  return v3;
}