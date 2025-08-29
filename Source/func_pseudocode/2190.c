-[TrackListViewController setDevicesClient:]
void __cdecl -[TrackListViewController setDevicesClient:](TrackListViewController *self, SEL a2, id a3)
{
  id v5; // x19
  DeviceDragHandler *v6; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_devicesClient, a3);
  v5 = objc_retain(a3);
  v6 = objc_retainAutoreleasedReturnValue(-[TrackListViewController deviceDragHandler](self, "deviceDragHandler"));
  -[DeviceDragHandler setDevicesClient:](v6, "setDevicesClient:", v5);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}