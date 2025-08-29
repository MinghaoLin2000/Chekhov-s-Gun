-[DeviceSetupViewController setSessionState:]
void __cdecl -[DeviceSetupViewController setSessionState:](DeviceSetupViewController *self, SEL a2, unsigned int a3)
{
  AMPDevice *v5; // x21
  void *v6; // x22
  const char *v7; // x3
  AMPDevice *v8; // x0
  AMPDevice *v9; // x21
  void *v10; // x22
  NSError *v11; // x21
  DeviceActivationFailedViewController *v12; // x21
  NSError *v13; // x22
  WKWebView *v14; // x22
  NSView *v15; // x22
  void *v16; // x22
  NSError *v17; // x23
  const char *v18; // x3
  NSError *v19; // x21
  unsigned int v20; // w21
  _BOOL4 v21; // w0
  AMPDevice *v22; // x21
  void *v23; // x22
  AMPDevice *v24; // x21
  void *v25; // x22
  NSError *v26; // x23
  unsigned int v27; // w21
  AMPDevice *v28; // x22
  void *v29; // x23
  NSError *v30; // x24
  int v31; // [xsp+0h] [xbp-60h] BYREF
  _BYTE v32[24]; // [xsp+4h] [xbp-5Ch]

  switch ( a3 )
  {
    case 2u:
      if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
      {
        v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
        v6 = objc_retainAutoreleasedReturnValue(-[AMPDevice deviceName](v5, "deviceName"));
        v31 = 138412290;
        *(_QWORD *)v32 = v6;
        v7 = "activation: retrieving device activation info for '%@'";
        goto LABEL_8;
      }
      goto LABEL_32;
    case 3u:
      if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
      {
        v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
        v6 = objc_retainAutoreleasedReturnValue(-[AMPDevice deviceName](v5, "deviceName"));
        v31 = 138412290;
        *(_QWORD *)v32 = v6;
        v7 = "activation: device activation info retrieved for '%@'";
        goto LABEL_8;
      }
      goto LABEL_32;
    case 4u:
      if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
      {
        v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
        v6 = objc_retainAutoreleasedReturnValue(-[AMPDevice deviceName](v5, "deviceName"));
        v31 = 138412290;
        *(_QWORD *)v32 = v6;
        v7 = "activation: completing device activation for '%@'";
LABEL_8:
        _os_log_impl(
          (void *)&_mh_execute_header,
          (os_log_t)&_os_log_default,
          OS_LOG_TYPE_INFO,
          v7,
          (uint8_t *)&v31,
          0xCu);
        goto LABEL_9;
      }
      goto LABEL_32;
    case 5u:
      if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
      {
        v9 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
        v10 = objc_retainAutoreleasedReturnValue(-[AMPDevice deviceName](v9, "deviceName"));
        v31 = 138412290;
        *(_QWORD *)v32 = v10;
        _os_log_impl(
          (void *)&_mh_execute_header,
          (os_log_t)&_os_log_default,
          OS_LOG_TYPE_INFO,
          "activation: completed device activation for '%@'",
          (uint8_t *)&v31,
          0xCu);
        objc_release(v10);
        objc_release(v9);
      }
      -[DeviceSetupViewController startSetupAssistant](self, "startSetupAssistant");
      goto LABEL_32;
    case 6u:
      v11 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController sessionError](self, "sessionError"));
      objc_release(v11);
      if ( v11 )
      {
        v12 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController activationFailedViewController](self, "activationFailedViewController"));
        v13 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController sessionError](self, "sessionError"));
        -[DeviceActivationFailedViewController setActivationError:](v12, "setActivationError:", v13);
        objc_release(v13);
        v14 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController activationWebView](self, "activationWebView"));
        -[WKWebView setHidden:](v14, "setHidden:", 1LL);
        objc_release(v14);
        v15 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController setupAssistantView](self, "setupAssistantView"));
        -[NSView setHidden:](v15, "setHidden:", 1LL);
        objc_release(v15);
        v16 = objc_retainAutoreleasedReturnValue(-[DeviceActivationFailedViewController view](v12, "view"));
        -[DeviceSetupViewController setContentView:](self, "setContentView:", v16);
        objc_release(v16);
        objc_release(v12);
      }
      if ( -[DeviceSetupViewController sessionState](self, "sessionState") == 1
        && os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
      {
        v24 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
        v25 = objc_retainAutoreleasedReturnValue(-[AMPDevice deviceName](v24, "deviceName"));
        v26 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController sessionError](self, "sessionError"));
        v31 = 138412546;
        *(_QWORD *)v32 = v25;
        *(_WORD *)&v32[8] = 2112;
        *(_QWORD *)&v32[10] = v26;
        _os_log_error_impl(
          (void *)&_mh_execute_header,
          (os_log_t)&_os_log_default,
          OS_LOG_TYPE_ERROR,
          "activation: error retrieving device prefs for '%@': %@",
          (uint8_t *)&v31,
          0x16u);
        objc_release(v26);
        objc_release(v25);
        objc_release(v24);
      }
      if ( -[DeviceSetupViewController sessionState](self, "sessionState") == 2 )
      {
        if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
        {
          v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
          v6 = objc_retainAutoreleasedReturnValue(-[AMPDevice deviceName](v5, "deviceName"));
          v17 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController sessionError](self, "sessionError"));
          v31 = 138412546;
          *(_QWORD *)v32 = v6;
          *(_WORD *)&v32[8] = 2112;
          *(_QWORD *)&v32[10] = v17;
          v18 = "activation: error retrieving device activation info for '%@': %@";
LABEL_23:
          _os_log_error_impl(
            (void *)&_mh_execute_header,
            (os_log_t)&_os_log_default,
            OS_LOG_TYPE_ERROR,
            v18,
            (uint8_t *)&v31,
            0x16u);
          objc_release(v17);
LABEL_9:
          objc_release(v6);
LABEL_10:
          v8 = v5;
LABEL_11:
          objc_release(v8);
        }
      }
      else if ( -[DeviceSetupViewController sessionState](self, "sessionState") == 3 )
      {
        v19 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController sessionError](self, "sessionError"));
        objc_release(v19);
        if ( !v19 )
        {
          if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
          {
            v22 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
            v23 = objc_retainAutoreleasedReturnValue(-[AMPDevice deviceName](v22, "deviceName"));
            v31 = 138412290;
            *(_QWORD *)v32 = v23;
            _os_log_impl(
              (void *)&_mh_execute_header,
              (os_log_t)&_os_log_default,
              OS_LOG_TYPE_INFO,
              "activation: revealing web view for '%@'",
              (uint8_t *)&v31,
              0xCu);
            objc_release(v23);
            objc_release(v22);
          }
          v5 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController activationWebView](self, "activationWebView"));
          -[DeviceSetupViewController setContentView:](self, "setContentView:", v5);
          goto LABEL_10;
        }
        if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
        {
          v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
          v6 = objc_retainAutoreleasedReturnValue(-[AMPDevice deviceName](v5, "deviceName"));
          v31 = 138412290;
          *(_QWORD *)v32 = v6;
          _os_log_error_impl(
            (void *)&_mh_execute_header,
            (os_log_t)&_os_log_default,
            OS_LOG_TYPE_ERROR,
            "activation: error processing device activation info for '%@'",
            (uint8_t *)&v31,
            0xCu);
          goto LABEL_9;
        }
      }
      else
      {
        v20 = -[DeviceSetupViewController sessionState](self, "sessionState");
        v21 = os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR);
        if ( v20 == 4 )
        {
          if ( v21 )
          {
            v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
            v6 = objc_retainAutoreleasedReturnValue(-[AMPDevice deviceName](v5, "deviceName"));
            v17 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController sessionError](self, "sessionError"));
            v31 = 138412546;
            *(_QWORD *)v32 = v6;
            *(_WORD *)&v32[8] = 2112;
            *(_QWORD *)&v32[10] = v17;
            v18 = "activation: error completing device activation for '%@': %@";
            goto LABEL_23;
          }
        }
        else if ( v21 )
        {
          v27 = -[DeviceSetupViewController sessionState](self, "sessionState");
          v28 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
          v29 = objc_retainAutoreleasedReturnValue(-[AMPDevice deviceName](v28, "deviceName"));
          v30 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController sessionError](self, "sessionError"));
          v31 = 67109634;
          *(_DWORD *)v32 = v27;
          *(_WORD *)&v32[4] = 2112;
          *(_QWORD *)&v32[6] = v29;
          *(_WORD *)&v32[14] = 2112;
          *(_QWORD *)&v32[16] = v30;
          _os_log_error_impl(
            (void *)&_mh_execute_header,
            (os_log_t)&_os_log_default,
            OS_LOG_TYPE_ERROR,
            "activation: device activation error (unknown transition from %u) for '%@': %@",
            (uint8_t *)&v31,
            0x1Cu);
          objc_release(v30);
          objc_release(v29);
          v8 = v28;
          goto LABEL_11;
        }
      }
LABEL_32:
      self->_sessionState = a3;
      return;
    default:
      goto LABEL_32;
  }
}