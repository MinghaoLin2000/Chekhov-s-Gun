$s34AppleMediaServicesUIDynamicService16JSServiceRequestVwxx
__int64 __fastcall destroy for JSServiceRequest(__int64 a1, __int64 a2)
{
  __int64 v4; // x19
  __int64 v5; // x20
  __int64 result; // x0
  __int64 (__fastcall *v7)(__int64, __int64); // x2
  __int64 vars8; // [xsp+18h] [xbp+8h]

  swift_bridgeObjectRelease(*(_QWORD *)(a1 + 8));
  swift_bridgeObjectRelease(*(_QWORD *)(a1 + 16));
  v4 = a1 + *(int *)(a2 + 24);
  v5 = sub_100045608(0LL);
  result = sub_100004D58(v4, 1LL, v5);
  if ( !(_DWORD)result )
  {
    v7 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v5 - 8) + 8LL);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return v7(v4, v5);
  }
  return result;
}