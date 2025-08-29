-[DeviceFileSharingViewController outlineViewItemDidCollapse:]
void __cdecl -[DeviceFileSharingViewController outlineViewItemDidCollapse:](
        DeviceFileSharingViewController *self,
        SEL a2,
        id a3)
{
  void *v3; // x20
  void *v4; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(objc_msgSend(a3, "userInfo"));
  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "objectForKeyedSubscript:", CFSTR("NSObject")));
  objc_release(v3);
  if ( (unsigned int)objc_msgSend(v4, "isApp") )
  {
    objc_msgSend(v4, "savePlaceholders");
    objc_msgSend(v4, "removeAllChildren");
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}