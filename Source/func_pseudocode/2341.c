-[DeviceModeFinderViewController deviceFinderTabDidChange:]
void __cdecl -[DeviceModeFinderViewController deviceFinderTabDidChange:](
        DeviceModeFinderViewController *self,
        SEL a2,
        id a3)
{
  void *v4; // x20
  void *v5; // x21
  void *v6; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(a3, "userInfo"));
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectForKeyedSubscript:", CFSTR("Identifier")));
  objc_release(v4);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController view](self, "view"));
  objc_msgSend(v6, "setDragDisabled:", objc_msgSend(v5, "isEqualToString:", CFSTR("Files")));
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}