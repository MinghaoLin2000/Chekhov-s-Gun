-[DeviceFileSharingViewController outlineView:isItemExpandable:]
bool __cdecl -[DeviceFileSharingViewController outlineView:isItemExpandable:](
        DeviceFileSharingViewController *self,
        SEL a2,
        id a3,
        id a4)
{
  return (unsigned __int8)objc_msgSend(a4, "isApp", a3);
}