-[_TtC27BackgroundReplacementHelper10MainWindow frameAutosaveName]
NSString *__cdecl -[MainWindow frameAutosaveName](_TtC27BackgroundReplacementHelper10MainWindow *self, SEL a2)
{
  __int64 v2; // x1
  __int64 v3; // x19
  void *v4; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  sub_1000512E8(self, a2);
  v3 = v2;
  v4 = (void *)sub_1000700A0(0xD00000000000001BLL);
  swift_bridgeObjectRelease(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (NSString *)objc_autoreleaseReturnValue(v4);
}