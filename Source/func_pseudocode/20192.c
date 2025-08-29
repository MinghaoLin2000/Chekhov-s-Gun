-[Browse_NAN startDataSession:]
void __cdecl -[Browse_NAN startDataSession:](Browse_NAN *self, SEL a2, id a3)
{
  id v4; // x19
  PKNANDataSession *v5; // x20
  NSString *v6; // x22
  os_log_s *v7; // x22
  PKNANDataSession *v8; // x21
  id v9; // x22
  _QWORD v10[4]; // [xsp+8h] [xbp-88h] BYREF
  id v11; // [xsp+28h] [xbp-68h]
  id v12; // [xsp+30h] [xbp-60h]
  id v13; // [xsp+38h] [xbp-58h] BYREF
  uint8_t buf[4]; // [xsp+40h] [xbp-50h] BYREF
  PKNANDataSession *v15; // [xsp+44h] [xbp-4Ch]

  v4 = objc_retain(a3);
  v5 = objc_opt_new(&OBJC_CLASS___PKNANDataSession);
  -[PKNANDataSession setDispatchQueue:](v5, "setDispatchQueue:", self->_queue);
  v6 = objc_retainAutoreleasedReturnValue(
         +[NSString stringWithFormat:](
           &OBJC_CLASS___NSString,
           "stringWithFormat:",
           CFSTR("com.apple.printing.nan<%p>"),
           v4));
  -[PKNANDataSession setLabel:](v5, "setLabel:", v6);
  objc_release(v6);
  -[PKNANDataSession setPeerEndpoint:](v5, "setPeerEndpoint:", v4);
  -[PKNANDataSession setTerminationHandler:](v5, "setTerminationHandler:", &stru_10009E648);
  -[PKNANDataSession setTrafficFlags:](v5, "setTrafficFlags:", 0LL);
  v7 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryDiscovery[0]));
  if ( os_log_type_enabled(v7, OS_LOG_TYPE_DEFAULT) )
  {
    *(_DWORD *)buf = 138412290;
    v15 = v5;
    _os_log_impl((void *)&_mh_execute_header, v7, OS_LOG_TYPE_DEFAULT, "Browse_NAN: Data session %@", buf, 0xCu);
  }
  objc_release(v7);
  objc_initWeak((id *)buf, self);
  v10[0] = _NSConcreteStackBlock;
  v10[1] = 3254779904LL;
  v10[2] = sub_100038480;
  v10[3] = &unk_10009E668;
  v8 = objc_retain(v5);
  v11 = v8;
  objc_copyWeak(&v13, (id *)buf);
  v9 = objc_retain(v4);
  v12 = v9;
  -[PKNANDataSession activateWithCompletion:](v8, "activateWithCompletion:", v10);
  objc_release(v12);
  objc_destroyWeak(&v13);
  objc_release(v11);
  objc_destroyWeak((id *)buf);
  objc_release(v8);
  objc_release(v9);
}