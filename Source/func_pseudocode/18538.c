$s19ControlCenterHelper13AuthorizationVwxx
__int64 __fastcall destroy for Authorization(__int64 a1, __int64 a2)
{
  __int64 v4; // x19
  __int64 v5; // x0
  __int64 (__fastcall *v6)(__int64, __int64); // x2
  __int64 vars8; // [xsp+18h] [xbp+8h]

  swift_bridgeObjectRelease(*(_QWORD *)(a1 + 8));
  v4 = a1 + *(int *)(a2 + 24);
  v5 = sub_10006EE70(0LL);
  v6 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v5 - 8) + 8LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return v6(v4, v5);
}