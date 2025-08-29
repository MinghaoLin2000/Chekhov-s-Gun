-[DeviceSettingsTabContentViewController outlineView:shouldShowOutlineCellForItem:]
bool __cdecl -[DeviceSettingsTabContentViewController outlineView:shouldShowOutlineCellForItem:](
        DeviceSettingsTabContentViewController *self,
        SEL a2,
        id a3,
        id a4)
{
  id v4; // x19
  unsigned __int8 v5; // w20

  v4 = objc_retain(a4);
  if ( ((unsigned int)objc_msgSend(v4, "hasChildren") & 1) != 0 )
    v5 = 1;
  else
    v5 = (unsigned __int8)objc_msgSend(v4, "isFolder");
  objc_release(v4);
  return v5;
}