-[DeviceSettingsDetailsTabContentViewController detailsNodeForSourceNode:]
id __cdecl -[DeviceSettingsDetailsTabContentViewController detailsNodeForSourceNode:](
        DeviceSettingsDetailsTabContentViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x20
  void *v5; // x0
  void *v6; // x21
  NSMutableDictionary *v7; // x19
  void *v8; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  if ( -[DeviceSettingsDetailsTabContentViewController usePersistentIDForDetailsModelKey](
         self,
         "usePersistentIDForDetailsModelKey") )
  {
    v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "persistentID"));
  }
  else
  {
    v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "name"));
  }
  v6 = v5;
  objc_release(v4);
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsDetailsTabContentViewController detailsModelDict](self, "detailsModelDict"));
  v8 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v7, "objectForKeyedSubscript:", v6));
  objc_release(v7);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v8);
}