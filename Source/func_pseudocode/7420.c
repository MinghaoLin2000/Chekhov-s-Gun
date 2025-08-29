-[_TtC13DisplayMarkup27ScreenAnnotationsController applicationDataForSidecarController:]
id __cdecl -[ScreenAnnotationsController applicationDataForSidecarController:](
        _TtC13DisplayMarkup27ScreenAnnotationsController *self,
        SEL a2,
        id a3)
{
  id v4; // x20
  _TtC13DisplayMarkup27ScreenAnnotationsController *v5; // x19
  __int64 v6; // x21
  void *v7; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retain(self);
  v6 = sub_100007784();
  objc_release(v4);
  objc_release(v5);
  v7 = (void *)sub_10001CA60(
                 v6,
                 &type metadata for AnyHashable,
                 (char *)&type metadata for Any + 8,
                 &protocol witness table for AnyHashable);
  swift_bridgeObjectRelease(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}