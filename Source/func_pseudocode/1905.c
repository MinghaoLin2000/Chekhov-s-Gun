-[DeviceDragHandler processDroppedObjects:]
void __cdecl -[DeviceDragHandler processDroppedObjects:](DeviceDragHandler *self, SEL a2, id a3)
{
  id v4; // x20
  AMPDevicesClient *v5; // x21
  AMPDevice *v6; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceDragHandler devicesClient](self, "devicesClient"));
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceDragHandler device](self, "device"));
  -[AMPDevicesClient copyObjects:toDevice:withReply:](v5, "copyObjects:toDevice:withReply:", v4, v6, &stru_1000B9678);
  objc_release(v4);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}