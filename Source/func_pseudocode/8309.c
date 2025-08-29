_$s025com_apple_AppStoreDaemon_D9UIService20ViewPresentationTaskC7requestACSo07ASDViewH7RequestC_tcfc
id __fastcall ViewPresentationTask.init(request:)(__int64 a1, __int64 a2)
{
  char *v2; // x20
  objc_class *ObjectType; // x0
  objc_super v6; // [xsp+0h] [xbp-20h] BYREF

  ObjectType = (objc_class *)swift_getObjectType(v2, a2);
  *(_QWORD *)&v2[OBJC_IVAR____TtC39com_apple_AppStoreDaemon_StoreUIService20ViewPresentationTask_window] = 0LL;
  *(_QWORD *)&v2[OBJC_IVAR____TtC39com_apple_AppStoreDaemon_StoreUIService20ViewPresentationTask_request] = a1;
  v6.receiver = v2;
  v6.super_class = ObjectType;
  return objc_msgSendSuper2(&v6, "init");
}