-[DeviceFinderTabContainerViewController queue]
OS_dispatch_queue *__cdecl -[DeviceFinderTabContainerViewController queue](
        DeviceFinderTabContainerViewController *self,
        SEL a2)
{
  OS_dispatch_queue *queue; // x0
  OS_dispatch_queue *v4; // x0
  OS_dispatch_queue *v5; // x8
  __int64 vars8; // [xsp+18h] [xbp+8h]

  queue = self->_queue;
  if ( !queue )
  {
    v4 = (OS_dispatch_queue *)dispatch_queue_create("com.apple.AMPDevices.settingsSerialQueue", 0LL);
    v5 = self->_queue;
    self->_queue = v4;
    objc_release(v5);
    queue = self->_queue;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(queue);
}