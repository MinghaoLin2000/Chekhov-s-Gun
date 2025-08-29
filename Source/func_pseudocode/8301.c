-[_TtC39com_apple_AppStoreDaemon_StoreUIService21AlertPresentationTask initWithRequest:]
_TtC39com_apple_AppStoreDaemon_StoreUIService21AlertPresentationTask *__cdecl -[AlertPresentationTask initWithRequest:](
        _TtC39com_apple_AppStoreDaemon_StoreUIService21AlertPresentationTask *self,
        SEL a2,
        id a3)
{
  objc_class *ObjectType; // x0
  id v6; // x0
  objc_super v8; // [xsp+0h] [xbp-20h] BYREF

  ObjectType = (objc_class *)swift_getObjectType(self, a2);
  *(Class *)((char *)&self->super.isa
           + OBJC_IVAR____TtC39com_apple_AppStoreDaemon_StoreUIService21AlertPresentationTask_window) = 0LL;
  *(Class *)((char *)&self->super.isa
           + OBJC_IVAR____TtC39com_apple_AppStoreDaemon_StoreUIService21AlertPresentationTask_request) = (Class)a3;
  v8.receiver = self;
  v8.super_class = ObjectType;
  v6 = objc_retain(a3);
  return -[AlertPresentationTask init](&v8, "init");
}