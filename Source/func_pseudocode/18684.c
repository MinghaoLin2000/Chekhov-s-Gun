$s17ControlCenterCore24_NavigationHoverModifierVwxx_0
__int64 __fastcall _s17ControlCenterCore24_NavigationHoverModifierVwxx_0(__int64 a1)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 vars8; // [xsp+18h] [xbp+8h]

  swift_release(*(_QWORD *)(a1 + 8));
  v2 = *(_QWORD *)(a1 + 24);
  v3 = *(_QWORD *)(a1 + 32);
  v4 = *(_QWORD *)(a1 + 40);
  v5 = *(unsigned __int8 *)(a1 + 48);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return sub_1000451E0(v2, v3, v4, v5);
}