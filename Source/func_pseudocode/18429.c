-[_TtC19ControlCenterHelper22ControlCenterHelperApp _shouldLoadMainNibNamed:]
bool __cdecl -[ControlCenterHelperApp _shouldLoadMainNibNamed:](
        _TtC19ControlCenterHelper22ControlCenterHelperApp *self,
        SEL a2,
        id a3)
{
  __int64 v3; // x1
  __int64 v4; // x0

  if ( a3 )
  {
    sub_1000700D0(a3, a2);
    v4 = v3;
  }
  else
  {
    v4 = 0LL;
  }
  swift_bridgeObjectRelease(v4);
  return 0;
}