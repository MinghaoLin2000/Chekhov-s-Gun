-[StoreUIService presentViewRequest:withResultHandler:]
void __cdecl -[StoreUIService presentViewRequest:withResultHandler:](StoreUIService *self, SEL a2, id a3, id a4)
{
  id v5; // x20
  id v6; // x19
  _TtC39com_apple_AppStoreDaemon_StoreUIService20ViewPresentationTask *v7; // x21
  id v8; // x19
  _TtC39com_apple_AppStoreDaemon_StoreUIService20ViewPresentationTask *v9; // x20
  _QWORD v10[4]; // [xsp+0h] [xbp-50h] BYREF
  id v11; // [xsp+20h] [xbp-30h]
  id v12; // [xsp+28h] [xbp-28h]

  v5 = objc_retain(a4);
  v6 = objc_retain(a3);
  v7 = -[ViewPresentationTask initWithRequest:](
         objc_alloc(&OBJC_CLASS____TtC39com_apple_AppStoreDaemon_StoreUIService20ViewPresentationTask),
         "initWithRequest:",
         v6);
  objc_release(v6);
  v10[0] = _NSConcreteStackBlock;
  v10[1] = 3254779904LL;
  v10[2] = sub_10000B758;
  v10[3] = &unk_100010958;
  v11 = v7;
  v12 = v5;
  v8 = objc_retain(v5);
  v9 = objc_retain(v7);
  dispatch_async(&_dispatch_main_q, v10);
  objc_release(v12);
  objc_release(v11);
  objc_release(v8);
  objc_release(v9);
}