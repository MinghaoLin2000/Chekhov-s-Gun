-[TSULogHelper incrementThrottleCountAndCheckThottleMax:]
bool __cdecl -[TSULogHelper incrementThrottleCountAndCheckThottleMax:](TSULogHelper *self, SEL a2, unsigned __int64 a3)
{
  unsigned __int64 v5; // x22
  NSDate *v6; // x19
  os_log_s *v7; // x23
  double v8; // d0
  double v9; // d8
  double v10; // d0
  os_log_s *v11; // x21
  bool v12; // w20
  NSDate *v13; // x21
  uint8_t v15[16]; // [xsp+0h] [xbp-60h] BYREF
  uint8_t buf[16]; // [xsp+10h] [xbp-50h] BYREF

  v5 = -[TSULogHelper throttleCount](self, "throttleCount");
  -[TSULogHelper setThrottleCount:](
    self,
    "setThrottleCount:",
    (char *)-[TSULogHelper throttleCount](self, "throttleCount") + 1);
  v6 = objc_retainAutoreleasedReturnValue(-[TSULogHelper lastThrottleCheck](self, "lastThrottleCheck"));
  if ( v5 == a3 )
  {
    if ( TSUPerformanceCat_init_token != -1 )
      dispatch_once(&TSUPerformanceCat_init_token, &stru_1001DE358);
    v7 = (os_log_s *)TSUPerformanceCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUPerformanceCat_log_t, OS_LOG_TYPE_DEFAULT) )
    {
      *(_WORD *)buf = 0;
      _os_log_impl((void *)&_mh_execute_header, v7, OS_LOG_TYPE_DEFAULT, "Start throttling logging", buf, 2u);
    }
  }
  if ( v5 < a3 || !v6 )
    goto LABEL_16;
  -[NSDate timeIntervalSinceNow](v6, "timeIntervalSinceNow");
  v9 = v8;
  -[NSDate timeIntervalSinceNow](v6, "timeIntervalSinceNow");
  if ( v10 < -300.0 )
  {
    if ( TSUPerformanceCat_init_token != -1 )
      dispatch_once(&TSUPerformanceCat_init_token, &stru_1001DE378);
    v11 = (os_log_s *)TSUPerformanceCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUPerformanceCat_log_t, OS_LOG_TYPE_DEFAULT) )
    {
      *(_WORD *)v15 = 0;
      _os_log_impl((void *)&_mh_execute_header, v11, OS_LOG_TYPE_DEFAULT, "End throttling logging", v15, 2u);
    }
    -[TSULogHelper setThrottleCount:](self, "setThrottleCount:", 0LL);
  }
  if ( v9 >= -60.0 )
  {
    v12 = 1;
  }
  else
  {
LABEL_16:
    v13 = objc_retainAutoreleasedReturnValue(+[NSDate date](&OBJC_CLASS___NSDate, "date"));
    -[TSULogHelper setLastThrottleCheck:](self, "setLastThrottleCheck:", v13);
    objc_release(v13);
    v12 = 0;
  }
  objc_release(v6);
  return v12;
}