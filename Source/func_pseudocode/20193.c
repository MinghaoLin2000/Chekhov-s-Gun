-[Browse_NAN start]
void __cdecl -[Browse_NAN start](Browse_NAN *self, SEL a2)
{
  os_log_s *v3; // x20
  PKNANSubscriber *v4; // x0
  PKNANSubscriber *subscriber; // x8
  _QWORD v6[4]; // [xsp+8h] [xbp-58h] BYREF
  id v7; // [xsp+28h] [xbp-38h] BYREF
  id buf[2]; // [xsp+30h] [xbp-30h] BYREF

  v3 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryDiscovery[0]));
  if ( os_log_type_enabled(v3, OS_LOG_TYPE_DEFAULT) )
  {
    LOWORD(buf[0]) = 0;
    _os_log_impl((void *)&_mh_execute_header, v3, OS_LOG_TYPE_DEFAULT, "Browse_NAN: Started", (uint8_t *)buf, 2u);
  }
  objc_release(v3);
  v4 = objc_opt_new(&OBJC_CLASS___PKNANSubscriber);
  subscriber = self->_subscriber;
  self->_subscriber = v4;
  objc_release(subscriber);
  -[PKNANSubscriber setChangeFlags:](self->_subscriber, "setChangeFlags:", 0LL);
  -[PKNANSubscriber setControlFlags:](self->_subscriber, "setControlFlags:", 1LL);
  -[PKNANSubscriber setDispatchQueue:](self->_subscriber, "setDispatchQueue:", self->_queue);
  -[PKNANSubscriber setLabel:](self->_subscriber, "setLabel:", CFSTR("com.apple.printing"));
  -[PKNANSubscriber setServiceType:](self->_subscriber, "setServiceType:", CFSTR("_ipp._tcp"));
  objc_initWeak(buf, self);
  v6[0] = _NSConcreteStackBlock;
  v6[1] = 3254779904LL;
  v6[2] = sub_1000387D0;
  v6[3] = &unk_10009E698;
  objc_copyWeak(&v7, buf);
  -[PKNANSubscriber setEndpointFoundHandler:](self->_subscriber, "setEndpointFoundHandler:", v6);
  -[PKNANSubscriber setEndpointLostHandler:](self->_subscriber, "setEndpointLostHandler:", &stru_10009E6E8);
  -[PKNANSubscriber setEndpointChangedHandler:](self->_subscriber, "setEndpointChangedHandler:", &stru_10009E728);
  -[PKNANSubscriber setReceiveHandler:](self->_subscriber, "setReceiveHandler:", &stru_10009E768);
  -[PKNANSubscriber activateWithCompletion:](self->_subscriber, "activateWithCompletion:", &stru_10009E788);
  objc_destroyWeak(&v7);
  objc_destroyWeak(buf);
}