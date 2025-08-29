-[DeviceFileSharingViewController keyDown:]
void __cdecl -[DeviceFileSharingViewController keyDown:](DeviceFileSharingViewController *self, SEL a2, id a3)
{
  id v4; // x19
  unsigned int v5; // w21
  unsigned int v6; // w0
  objc_super v7; // [xsp+0h] [xbp-30h] BYREF

  v4 = objc_retain(a3);
  v5 = (unsigned int)objc_msgSend(v4, "modifierFlags");
  v6 = (unsigned int)objc_msgSend(v4, "keyCode");
  if ( (v5 & 0x100000) != 0 && v6 == 51 )
    -[DeviceFileSharingViewController deleteSelectedItems](self, "deleteSelectedItems");
  v7.receiver = self;
  v7.super_class = (Class)&OBJC_CLASS___DeviceFileSharingViewController;
  -[DeviceFileSharingViewController keyDown:](&v7, "keyDown:", v4);
  objc_release(v4);
}