-[UINSSystemPreferencesServiceViewController _selectedSetting]
id __cdecl -[UINSSystemPreferencesServiceViewController _selectedSetting](
        UINSSystemPreferencesServiceViewController *self,
        SEL a2)
{
  NSTableView *v3; // x21
  void *v4; // x20
  NSTableView *v5; // x22
  unsigned __int64 v6; // x21
  id v7; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[UINSSystemPreferencesServiceViewController tableView](self, "tableView"));
  v4 = -[NSTableView selectedRow](v3, "selectedRow");
  objc_release(v3);
  v5 = objc_retainAutoreleasedReturnValue(-[UINSSystemPreferencesServiceViewController tableView](self, "tableView"));
  v6 = -[NSTableView selectedRow](v5, "selectedRow");
  objc_release(v5);
  if ( (v6 & 0x8000000000000000LL) != 0 || v6 >= -[NSArray count](self->_settings, "count") )
    v7 = 0LL;
  else
    v7 = objc_retainAutoreleasedReturnValue(-[NSArray objectAtIndexedSubscript:](self->_settings, "objectAtIndexedSubscript:", v4));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}