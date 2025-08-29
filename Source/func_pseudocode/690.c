-[DeviceFileSharingViewController outlineView:shouldSelectItem:]
bool __cdecl -[DeviceFileSharingViewController outlineView:shouldSelectItem:](
        DeviceFileSharingViewController *self,
        SEL a2,
        id a3,
        id a4)
{
  id v4; // x19
  unsigned int v5; // w20

  v4 = objc_retain(a4);
  if ( ((unsigned int)objc_msgSend(v4, "isApp") & 1) != 0 )
    LOBYTE(v5) = 0;
  else
    v5 = (unsigned int)objc_msgSend(v4, "isPlaceholder") ^ 1;
  objc_release(v4);
  return v5;
}