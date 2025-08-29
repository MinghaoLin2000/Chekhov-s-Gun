-[Browse_NAN cancel]
void __cdecl -[Browse_NAN cancel](Browse_NAN *self, SEL a2)
{
  os_log_s *v3; // x20
  PKNANSubscriber *subscriber; // x0
  uint8_t v5[16]; // [xsp+0h] [xbp-20h] BYREF

  v3 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryDiscovery[0]));
  if ( os_log_type_enabled(v3, OS_LOG_TYPE_DEFAULT) )
  {
    *(_WORD *)v5 = 0;
    _os_log_impl((void *)&_mh_execute_header, v3, OS_LOG_TYPE_DEFAULT, "Browse_NAN: Canceling", v5, 2u);
  }
  objc_release(v3);
  -[PKNANSubscriber invalidate](self->_subscriber, "invalidate");
  subscriber = self->_subscriber;
  self->_subscriber = 0LL;
  objc_release(subscriber);
}