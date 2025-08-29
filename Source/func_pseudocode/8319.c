-[_TtC39com_apple_AppStoreDaemon_StoreUIService19DummyViewController initWithNibName:bundle:]
_TtC39com_apple_AppStoreDaemon_StoreUIService19DummyViewController *__cdecl -[DummyViewController initWithNibName:bundle:](
        _TtC39com_apple_AppStoreDaemon_StoreUIService19DummyViewController *self,
        SEL a2,
        id a3,
        id a4)
{
  __int64 v6; // x21
  __int64 v7; // x1
  __int64 v8; // x22
  id v9; // x0
  void *v10; // x21
  id v11; // x0
  _TtC39com_apple_AppStoreDaemon_StoreUIService19DummyViewController *v12; // x20
  objc_super v14; // [xsp+0h] [xbp-30h] BYREF

  if ( a3 )
  {
    v6 = sub_10000C420(a3, a2);
    v8 = v7;
    v9 = objc_retain(a4);
    v10 = (void *)sub_10000C410(v6, v8);
    swift_bridgeObjectRelease(v8);
  }
  else
  {
    v11 = objc_retain(a4);
    v10 = 0LL;
  }
  v14.receiver = self;
  v14.super_class = (Class)type metadata accessor for DummyViewController();
  v12 = -[DummyViewController initWithNibName:bundle:](&v14, "initWithNibName:bundle:", v10, a4);
  objc_release(v10);
  objc_release(a4);
  return v12;
}