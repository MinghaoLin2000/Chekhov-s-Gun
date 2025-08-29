$s34AppleMediaServicesUIDynamicService16JSServiceRequestVwtk
__int64 __fastcall initializeWithTake for JSServiceRequest(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // x8
  void *v5; // x20
  const void *v6; // x21
  __int64 v7; // x22
  __int64 v8; // x0

  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  v4 = *(int *)(a3 + 24);
  v5 = (void *)(a1 + v4);
  v6 = (const void *)(a2 + v4);
  v7 = sub_100045608(0LL);
  if ( (unsigned int)sub_100004D58(v6, 1LL, v7) )
  {
    v8 = sub_100003D44(&unk_10005C648);
    memcpy(v5, v6, *(_QWORD *)(*(_QWORD *)(v8 - 8) + 64LL));
  }
  else
  {
    (*(void (__fastcall **)(void *, const void *, __int64))(*(_QWORD *)(v7 - 8) + 32LL))(v5, v6, v7);
    sub_100004CC8(v5, 0LL, 1LL, v7);
  }
  return a1;
}