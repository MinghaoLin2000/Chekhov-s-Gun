-[UINSSystemPreferencesServiceViewController tableView:viewForTableColumn:row:]
id __cdecl -[UINSSystemPreferencesServiceViewController tableView:viewForTableColumn:row:](
        UINSSystemPreferencesServiceViewController *self,
        SEL a2,
        id a3,
        id a4,
        signed __int64 a5)
{
  NSArray *settings; // x21
  id v8; // x22
  id v9; // x19
  void *v10; // x20
  void *v11; // x21
  void *v12; // x22
  void *v13; // x21
  void *v14; // x22
  __int64 vars8; // [xsp+28h] [xbp+8h]

  settings = self->_settings;
  v8 = objc_retain(a3);
  v9 = objc_retainAutoreleasedReturnValue(-[NSArray objectAtIndexedSubscript:](settings, "objectAtIndexedSubscript:", a5));
  v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "makeViewWithIdentifier:owner:", CFSTR("SettingCell"), self));
  objc_release(v8);
  v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "title"));
  v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "textField"));
  objc_msgSend(v12, "setStringValue:", v11);
  objc_release(v12);
  objc_release(v11);
  v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "icon"));
  v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "imageView"));
  objc_msgSend(v14, "setImage:", v13);
  objc_release(v14);
  objc_release(v13);
  objc_release(v9);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v10);
}