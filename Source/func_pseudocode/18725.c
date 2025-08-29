-[_TtC27BackgroundReplacementHelper10MainWindow keyDown:]
void __cdecl -[MainWindow keyDown:](_TtC27BackgroundReplacementHelper10MainWindow *self, SEL a2, id a3)
{
  id v4; // x21
  _TtC27BackgroundReplacementHelper10MainWindow *v5; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retain(self);
  sub_100051304(v4);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}