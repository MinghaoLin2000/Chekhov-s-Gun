-[DisplayUSBDrives initWithLog:usbContainerID:]
DisplayUSBDrives *__cdecl -[DisplayUSBDrives initWithLog:usbContainerID:](DisplayUSBDrives *self, SEL a2, id a3, id a4)
{
  id v7; // x19
  id v8; // x20
  DisplayUSBDrives *v9; // x0
  id *p_isa; // x22
  DisplayUSBDrives *v11; // x21
  objc_super v13; // [xsp+0h] [xbp-40h] BYREF

  v7 = objc_retain(a3);
  v8 = objc_retain(a4);
  if ( v8 )
  {
    v13.receiver = self;
    v13.super_class = (Class)&OBJC_CLASS___DisplayUSBDrives;
    v9 = -[DisplayUSBDrives init](&v13, "init");
    p_isa = (id *)&v9->super.isa;
    if ( v9 )
    {
      objc_storeStrong((id *)&v9->_log, a3);
      objc_storeStrong(p_isa + 2, a4);
    }
    self = objc_retain(p_isa);
    v11 = self;
  }
  else
  {
    v11 = 0LL;
  }
  objc_release(v8);
  objc_release(v7);
  objc_release(self);
  return v11;
}