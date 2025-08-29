-[INHService initWithServingConnection:]
INHService *__cdecl -[INHService initWithServingConnection:](INHService *self, SEL a2, id a3)
{
  id v4; // x19
  INHService *v5; // x0
  INHService *v6; // x20
  INImageFilePersistence *v7; // x0
  INImageFilePersistence *filePersistence; // x8
  objc_super v10; // [xsp+0h] [xbp-20h] BYREF

  v4 = objc_retain(a3);
  v10.receiver = self;
  v10.super_class = (Class)&OBJC_CLASS___INHService;
  v5 = -[INHService init](&v10, "init");
  v6 = v5;
  if ( v5 )
  {
    objc_storeWeak((id *)&v5->_servingConnection, v4);
    v7 = (INImageFilePersistence *)objc_alloc_init((Class)&OBJC_CLASS___INImageFilePersistence);
    filePersistence = v6->_filePersistence;
    v6->_filePersistence = v7;
    objc_release(filePersistence);
  }
  objc_release(v4);
  return v6;
}