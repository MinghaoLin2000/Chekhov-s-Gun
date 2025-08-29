-[DeviceSettingsMoviesViewController rentalNodeForItem:]
id __cdecl -[DeviceSettingsMoviesViewController rentalNodeForItem:](
        DeviceSettingsMoviesViewController *self,
        SEL a2,
        id a3)
{
  id v3; // x20
  void *v4; // x21
  DeviceSettingsNode *v5; // x19
  void *v6; // x21
  NSNumber *v7; // x21
  void *v8; // x21
  void *v9; // x22
  NSNumber *v10; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retain(a3);
  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "title"));
  v5 = objc_retainAutoreleasedReturnValue(+[DeviceSettingsNode nodeWithName:](&OBJC_CLASS___DeviceSettingsNode, "nodeWithName:", v4));
  objc_release(v4);
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "persistentID"));
  -[DeviceSettingsNode setPersistentID:](v5, "setPersistentID:", v6);
  objc_release(v6);
  v7 = objc_retainAutoreleasedReturnValue(
         +[NSNumber numberWithUnsignedLongLong:](
           &OBJC_CLASS___NSNumber,
           "numberWithUnsignedLongLong:",
           objc_msgSend(v3, "fileSize")));
  -[DeviceSettingsNode setFileSize:](v5, "setFileSize:", v7);
  objc_release(v7);
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "expirationDate"));
  -[DeviceSettingsNode setExpirationDate:](v5, "setExpirationDate:", v8);
  objc_release(v8);
  v9 = objc_msgSend(v3, "totalTime");
  objc_release(v3);
  v10 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithUnsignedLongLong:](&OBJC_CLASS___NSNumber, "numberWithUnsignedLongLong:", v9));
  -[DeviceSettingsNode setTotalTime:](v5, "setTotalTime:", v10);
  objc_release(v10);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}