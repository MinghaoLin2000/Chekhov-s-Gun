_$s025com_apple_AppStoreDaemon_D9UIService20ViewPresentationTaskC7requestACSo07ASDViewH7RequestC_tcfC
id __fastcall ViewPresentationTask.__allocating_init(request:)(__int64 a1)
{
  objc_class *v1; // x20
  char *v3; // x0
  objc_super v5; // [xsp+0h] [xbp-20h] BYREF

  v3 = (char *)objc_allocWithZone(v1);
  *(_QWORD *)&v3[OBJC_IVAR____TtC39com_apple_AppStoreDaemon_StoreUIService20ViewPresentationTask_window] = 0LL;
  *(_QWORD *)&v3[OBJC_IVAR____TtC39com_apple_AppStoreDaemon_StoreUIService20ViewPresentationTask_request] = a1;
  v5.receiver = v3;
  v5.super_class = v1;
  return objc_msgSendSuper2(&v5, "init");
}