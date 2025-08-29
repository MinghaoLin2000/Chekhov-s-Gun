-[_TtC27BackgroundReplacementHelper10MainWindow .cxx_destruct]
void __cdecl -[MainWindow .cxx_destruct](_TtC27BackgroundReplacementHelper10MainWindow *self, SEL a2)
{
  __int64 v3; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  swift_release(*(Class *)((char *)&self->super.super.super.super.isa
                         + OBJC_IVAR____TtC27BackgroundReplacementHelper10MainWindow_controller));
  sub_10000B2C0(
    *(Class *)((char *)&self->super.super.super.super.isa
             + OBJC_IVAR____TtC27BackgroundReplacementHelper10MainWindow_representedBundleID),
    *(_QWORD *)&self->controller[OBJC_IVAR____TtC27BackgroundReplacementHelper10MainWindow_representedBundleID]);
  v3 = *(_QWORD *)&self->controller[OBJC_IVAR____TtC27BackgroundReplacementHelper10MainWindow_representedAppName];
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  swift_bridgeObjectRelease(v3);
}