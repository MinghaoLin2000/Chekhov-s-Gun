_$s19ControlCenterHelper04WiFiC0CfD
__int64 WiFiHelper.__deallocating_deinit()
{
  __int64 v0; // x20
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 vars8; // [xsp+8h] [xbp+8h]

  WiFiHelper.deinit();
  v1 = *(unsigned int *)(*(_QWORD *)v0 + 48LL);
  v2 = *(unsigned __int16 *)(*(_QWORD *)v0 + 52LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return _swift_deallocClassInstance(v0, v1, v2);
}