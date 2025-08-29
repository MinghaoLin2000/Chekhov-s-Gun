$s17ControlCenterCore19NavigationAnchorKeyV5EntryVwxx
__int64 __fastcall destroy for NavigationAnchorKey.Entry(_QWORD *a1)
{
  __int64 v2; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  if ( *a1 )
    swift_release(a1[1]);
  v2 = a1[2];
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return swift_release(v2);
}