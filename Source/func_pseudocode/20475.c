-[Browse_CUPS cancel]
void __cdecl -[Browse_CUPS cancel](Browse_CUPS *self, SEL a2)
{
  os_log_s *v3; // x20
  OS_nw_listener *v4; // x20
  OS_nw_listener *listener; // x0
  uint8_t v6[16]; // [xsp+0h] [xbp-30h] BYREF

  v3 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryNetwork[0]));
  if ( os_log_type_enabled(v3, OS_LOG_TYPE_DEFAULT) )
  {
    *(_WORD *)v6 = 0;
    _os_log_impl((void *)&_mh_execute_header, v3, OS_LOG_TYPE_DEFAULT, "Browse_CUPS: Canceling", v6, 2u);
  }
  objc_release(v3);
  v4 = objc_retain(self->_listener);
  listener = self->_listener;
  self->_listener = 0LL;
  objc_release(listener);
  if ( v4 )
    nw_listener_cancel(v4);
  objc_release(v4);
}