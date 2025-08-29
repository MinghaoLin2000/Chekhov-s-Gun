-[_TtC39com_apple_AppStoreDaemon_StoreUIService19DummyViewController loadView]
void __cdecl -[DummyViewController loadView](
        _TtC39com_apple_AppStoreDaemon_StoreUIService19DummyViewController *self,
        SEL a2)
{
  id v3; // x20
  _TtC39com_apple_AppStoreDaemon_StoreUIService19DummyViewController *v4; // x19
  id v5; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = objc_allocWithZone((Class)&OBJC_CLASS___NSView);
  v4 = objc_retain(self);
  v5 = objc_msgSend(v3, "initWithFrame:", 0.0, 0.0, 0.0, 0.0);
  -[DummyViewController setView:](v4, "setView:", v5);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}