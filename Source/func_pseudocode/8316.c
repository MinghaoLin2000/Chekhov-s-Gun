-[_TtC39com_apple_AppStoreDaemon_StoreUIService20ViewPresentationTask .cxx_destruct]
void __cdecl -[ViewPresentationTask .cxx_destruct](
        _TtC39com_apple_AppStoreDaemon_StoreUIService20ViewPresentationTask *self,
        SEL a2)
{
  void *v3; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_release(*(id *)((char *)&self->super.isa
                     + OBJC_IVAR____TtC39com_apple_AppStoreDaemon_StoreUIService20ViewPresentationTask_request));
  v3 = *(Class *)((char *)&self->super.isa
                + OBJC_IVAR____TtC39com_apple_AppStoreDaemon_StoreUIService20ViewPresentationTask_window);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v3);
}