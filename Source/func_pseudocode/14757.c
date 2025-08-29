-[UINSSystemPreferencesServiceViewController numberOfRowsInTableView:]
signed __int64 __cdecl -[UINSSystemPreferencesServiceViewController numberOfRowsInTableView:](
        UINSSystemPreferencesServiceViewController *self,
        SEL a2,
        id a3)
{
  return -[NSArray count](self->_settings, "count", a3);
}