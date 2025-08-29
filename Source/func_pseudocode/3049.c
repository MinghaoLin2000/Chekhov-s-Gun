-[DeviceSetupViewController sendActivationRequestWithURLString:]
void __cdecl -[DeviceSetupViewController sendActivationRequestWithURLString:](
        DeviceSetupViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  NSDictionary *v5; // x21
  NSDictionary *v6; // x21
  __CFString *v7; // x22
  __CFString *v8; // x21
  NSDictionary *v9; // x23
  id v10; // x24
  id v11; // x25
  NSDictionary *v12; // x27
  id v13; // x28
  NSNumber *v14; // x26
  NSDictionary *v15; // x22
  NSUUID *v16; // x24
  NSString *v17; // x23
  NSString *v18; // x24
  NSURL *v19; // x26
  NSMutableURLRequest *v20; // x25
  id v21; // x26
  WKWebView *v22; // x26
  NSURL *v23; // x26
  NSString *v24; // x27
  void *v25; // x28
  WKWebView *v26; // x20
  id v27; // x0
  NSError *v28; // x21
  _QWORD v29[2]; // [xsp+8h] [xbp-78h] BYREF
  _QWORD v30[2]; // [xsp+18h] [xbp-68h] BYREF

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController activationInfo](self, "activationInfo"));
  objc_release(v5);
  if ( v5 )
  {
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController activationInfo](self, "activationInfo"));
    v7 = (__CFString *)objc_retainAutoreleasedReturnValue(
                         -[NSDictionary objectForKeyedSubscript:](
                           v6,
                           "objectForKeyedSubscript:",
                           CFSTR("activation-useragent")));
    objc_release(v6);
    if ( v7 )
      v8 = v7;
    else
      v8 = CFSTR("iTunes/12.9 (Macintosh; OS X 10.14.3) AppleWebKit/606.4.5 (dt:1)");
    v29[0] = CFSTR("activation-info");
    v9 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController activationInfo](self, "activationInfo"));
    v10 = objc_retainAutoreleasedReturnValue(-[NSDictionary objectForKeyedSubscript:](v9, "objectForKeyedSubscript:", CFSTR("activation-info")));
    v11 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController xmlStringForDict:](self, "xmlStringForDict:", v10));
    v29[1] = CFSTR("InStoreActivation");
    v30[0] = v11;
    v12 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController activationInfo](self, "activationInfo"));
    v13 = objc_retainAutoreleasedReturnValue(-[NSDictionary objectForKeyedSubscript:](v12, "objectForKeyedSubscript:", CFSTR("InStoreActivation")));
    v14 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithBool:](&OBJC_CLASS___NSNumber, "numberWithBool:", objc_msgSend(v13, "boolValue")));
    v30[1] = v14;
    v15 = objc_retainAutoreleasedReturnValue(
            +[NSDictionary dictionaryWithObjects:forKeys:count:](
              &OBJC_CLASS___NSDictionary,
              "dictionaryWithObjects:forKeys:count:",
              v30,
              v29,
              2LL));
    objc_release(v14);
    objc_release(v13);
    objc_release(v12);
    objc_release(v11);
    objc_release(v10);
    objc_release(v9);
    v16 = objc_retainAutoreleasedReturnValue(+[NSUUID UUID](&OBJC_CLASS___NSUUID, "UUID"));
    v17 = objc_retainAutoreleasedReturnValue(-[NSUUID UUIDString](v16, "UUIDString"));
    objc_release(v16);
    v18 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithFormat:](
              &OBJC_CLASS___NSString,
              "stringWithFormat:",
              CFSTR("multipart/form-data; boundary=%@"),
              v17));
    v19 = objc_retainAutoreleasedReturnValue(+[NSURL URLWithString:](&OBJC_CLASS___NSURL, "URLWithString:", v4));
    v20 = objc_retainAutoreleasedReturnValue(+[NSMutableURLRequest requestWithURL:](&OBJC_CLASS___NSMutableURLRequest, "requestWithURL:", v19));
    objc_release(v19);
    -[NSMutableURLRequest setHTTPMethod:](v20, "setHTTPMethod:", CFSTR("POST"));
    v21 = objc_retainAutoreleasedReturnValue(
            -[DeviceSetupViewController bodyDataWithBoundary:parameters:](
              self,
              "bodyDataWithBoundary:parameters:",
              v17,
              v15));
    -[NSMutableURLRequest setHTTPBody:](v20, "setHTTPBody:", v21);
    objc_release(v21);
    -[NSMutableURLRequest setValue:forHTTPHeaderField:](v20, "setValue:forHTTPHeaderField:", v18, CFSTR("Content-Type"));
    -[NSMutableURLRequest setValue:forHTTPHeaderField:](v20, "setValue:forHTTPHeaderField:", v8, CFSTR("User-Agent"));
    v22 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController activationWebView](self, "activationWebView"));
    -[WKWebView setCustomUserAgent:](v22, "setCustomUserAgent:", v8);
    objc_release(v22);
    v23 = objc_retainAutoreleasedReturnValue(-[NSMutableURLRequest URL](v20, "URL"));
    v24 = objc_retainAutoreleasedReturnValue(-[NSURL absoluteString](v23, "absoluteString"));
    v25 = -[NSString copy](v24, "copy");
    -[DeviceSetupViewController setCurrentURLString:](self, "setCurrentURLString:", v25);
    objc_release(v25);
    objc_release(v24);
    objc_release(v23);
    v26 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController activationWebView](self, "activationWebView"));
    v27 = objc_unsafeClaimAutoreleasedReturnValue(-[WKWebView loadRequest:](v26, "loadRequest:", v20));
    objc_release(v26);
    objc_release(v20);
    objc_release(v18);
    objc_release(v17);
    objc_release(v15);
    objc_release(v8);
  }
  else
  {
    v28 = objc_retainAutoreleasedReturnValue(
            +[NSError errorWithDomain:code:userInfo:](
              &OBJC_CLASS___NSError,
              "errorWithDomain:code:userInfo:",
              NSOSStatusErrorDomain,
              -50LL,
              0LL));
    -[DeviceSetupViewController setSessionError:](self, "setSessionError:", v28);
    objc_release(v28);
    -[DeviceSetupViewController setSessionState:](self, "setSessionState:", 6LL);
  }
  objc_release(v4);
}