-[UARPUpdaterDisplayControllerDelegate deviceConnectionChanged:event:]
void __cdecl -[UARPUpdaterDisplayControllerDelegate deviceConnectionChanged:event:](
        UARPUpdaterDisplayControllerDelegate *self,
        SEL a2,
        __AMRestorableDevice *a3,
        int a4)
{
  __int64 ECID; // x0
  __int64 v7; // x23
  NSNumber *v8; // x19
  void *v9; // x20
  int State; // w24
  OS_os_log *log; // x25
  void *v12; // x0
  void *v13; // x22
  dispatch_semaphore_s *v14; // x0
  void *v15; // x0
  dispatch_semaphore_s *v16; // x21
  int v17; // [xsp+0h] [xbp-70h] BYREF
  const char *v18; // [xsp+4h] [xbp-6Ch]
  __int16 v19; // [xsp+Ch] [xbp-64h]
  __int64 v20; // [xsp+Eh] [xbp-62h]
  __int16 v21; // [xsp+16h] [xbp-5Ah]
  int v22; // [xsp+18h] [xbp-58h]

  if ( a3 )
  {
    if ( !a4 )
    {
      ECID = AMRestorableDeviceGetECID(a3, a2);
      if ( ECID )
      {
        v7 = ECID;
        v8 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithUnsignedLongLong:](&OBJC_CLASS___NSNumber, "numberWithUnsignedLongLong:", ECID));
        v9 = (void *)AMRestorableDeviceCopyProductString(a3);
        if ( (unsigned int)objc_msgSend(v9, "isEqualToString:", CFSTR("AppleDisplay2,1")) )
        {
          State = AMRestorableDeviceGetState(a3);
          log = self->_log;
          if ( os_log_type_enabled(log, OS_LOG_TYPE_DEFAULT) )
          {
            v17 = 136315650;
            v18 = "-[UARPUpdaterDisplayControllerDelegate deviceConnectionChanged:event:]";
            v19 = 2048;
            v20 = v7;
            v21 = 1024;
            v22 = State;
            _os_log_impl(
              (void *)&_mh_execute_header,
              log,
              OS_LOG_TYPE_DEFAULT,
              "%s: Found device with ecid 0x%llx in state %d",
              (uint8_t *)&v17,
              0x1Cu);
          }
          if ( State == 4 )
          {
            v12 = objc_retainAutoreleasedReturnValue(
                    -[NSMutableDictionary objectForKeyedSubscript:](
                      self->_preflightInfo,
                      "objectForKeyedSubscript:",
                      v8));
            v13 = v12;
            if ( !v12 || objc_msgSend(v12, "preflightDevice") )
              goto LABEL_16;
            objc_msgSend(v13, "setPreflightDevice:", a3);
            CFRetain(objc_msgSend(v13, "preflightDevice"));
            v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v13, "preflightDeviceMutex"));
LABEL_15:
            v16 = v14;
            dispatch_semaphore_signal(v14);
            objc_release(v16);
LABEL_16:
            objc_release(v13);
            goto LABEL_17;
          }
          if ( (unsigned int)(State - 1) <= 1 )
          {
            v15 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self->_restoreInfo, "objectForKeyedSubscript:", v8));
            v13 = v15;
            if ( !v15 || objc_msgSend(v15, "restoreDevice") )
              goto LABEL_16;
            objc_msgSend(v13, "setRestoreDevice:", a3);
            CFRetain(objc_msgSend(v13, "restoreDevice"));
            v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v13, "deviceMutex"));
            goto LABEL_15;
          }
        }
LABEL_17:
        objc_release(v9);
        objc_release(v8);
      }
    }
  }
}