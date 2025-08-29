-[DeviceModeFinderViewController deviceDragHandler]
DeviceDragHandler *__cdecl -[DeviceModeFinderViewController deviceDragHandler](
        DeviceModeFinderViewController *self,
        SEL a2)
{
  DeviceDragHandler *v3; // x0
  DeviceDragHandler *deviceDragHandler; // x8
  AMPDevice *v5; // x20
  id v6; // x20
  DeviceDragHandler *v7; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( !self->_deviceDragHandler )
  {
    v3 = objc_alloc_init(&OBJC_CLASS___DeviceDragHandler);
    deviceDragHandler = self->_deviceDragHandler;
    self->_deviceDragHandler = v3;
    objc_release(deviceDragHandler);
  }
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  -[DeviceDragHandler setDevice:](self->_deviceDragHandler, "setDevice:", v5);
  objc_release(v5);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController devicesClient](self, "devicesClient"));
  -[DeviceDragHandler setDevicesClient:](self->_deviceDragHandler, "setDevicesClient:", v6);
  objc_release(v6);
  v7 = self->_deviceDragHandler;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(v7);
}