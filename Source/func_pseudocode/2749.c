-[DeviceSettingsNode setPersistentID:]
void __cdecl -[DeviceSettingsNode setPersistentID:](DeviceSettingsNode *self, SEL a2, id a3)
{
  NSNumber *v4; // x0
  NSNumber *persistentID; // x8
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(
         +[NSNumber numberWithUnsignedLongLong:](
           &OBJC_CLASS___NSNumber,
           "numberWithUnsignedLongLong:",
           objc_msgSend(a3, "unsignedLongLongValue")));
  persistentID = self->_persistentID;
  self->_persistentID = v4;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(persistentID);
}