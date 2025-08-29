-[XPCSignpostReader processSignpostMetricsWithStartDate:withEndDate:processMXSignpost:]
id __cdecl -[XPCSignpostReader processSignpostMetricsWithStartDate:withEndDate:processMXSignpost:](
        XPCSignpostReader *self,
        SEL a2,
        id a3,
        id a4,
        bool a5)
{
  _BOOL4 v5; // w24
  id v8; // x22
  id v9; // x23
  id v10; // x20
  id v11; // x21
  unsigned __int8 v12; // w24
  id v13; // x22
  os_log_s *v14; // x23
  void *v15; // x23
  id v16; // x24
  id v18; // [xsp+0h] [xbp-D0h] BYREF
  _QWORD v19[5]; // [xsp+8h] [xbp-C8h] BYREF
  _QWORD v20[5]; // [xsp+30h] [xbp-A0h] BYREF
  _QWORD v21[5]; // [xsp+58h] [xbp-78h] BYREF
  __int64 vars8; // [xsp+D8h] [xbp+8h]

  v5 = a5;
  v8 = objc_retain(a4);
  v9 = objc_retain(a3);
  -[XPCSignpostReader initializeMetrics](self, "initializeMetrics");
  v10 = objc_alloc_init((Class)&OBJC_CLASS___SignpostSupportObjectExtractor);
  v11 = objc_alloc_init((Class)&OBJC_CLASS___SignpostSupportSubsystemCategoryAllowlist);
  objc_msgSend(v11, "addSubsystem:category:", CFSTR("com.apple.FrontBoard"), CFSTR("AppLaunch"));
  objc_msgSend(v11, "addSubsystem:category:", CFSTR("com.apple.UIKit"), CFSTR("AppLifecycle"));
  objc_msgSend(v11, "addSubsystem:category:", CFSTR("com.apple.hangtracer"), CFSTR("always_on_hang"));
  objc_msgSend(v11, "addSubsystem:category:", CFSTR("com.apple.UIKit"), CFSTR("ScrollView"));
  objc_msgSend(v11, "addSubsystem:category:", CFSTR("com.apple.runningboard"), CFSTR("sp_telemetry"));
  objc_msgSend(v11, "addSubsystem:category:", CFSTR("com.apple.app_launch_measurement"), CFSTR("ApplicationLaunch"));
  if ( v5 )
    objc_msgSend(v11, "addSubsystem:category:", CFSTR("com.apple.metrickit.log"), 0LL);
  objc_msgSend(v10, "setSubsystemCategoryFilter:", v11);
  v21[0] = _NSConcreteStackBlock;
  v21[1] = 3254779904LL;
  v21[2] = sub_10000827C;
  v21[3] = &unk_100014378;
  v21[4] = self;
  objc_msgSend(v10, "setEmitEventProcessingBlock:", v21);
  v20[0] = _NSConcreteStackBlock;
  v20[1] = 3254779904LL;
  v20[2] = sub_1000082A0;
  v20[3] = &unk_1000143A8;
  v20[4] = self;
  objc_msgSend(v10, "setIntervalCompletionProcessingBlock:", v20);
  v19[0] = _NSConcreteStackBlock;
  v19[1] = 3254779904LL;
  v19[2] = sub_1000082C4;
  v19[3] = &unk_1000143D8;
  v19[4] = self;
  objc_msgSend(v10, "setAnimationIntervalCompletionProcessingBlock:", v19);
  v18 = 0LL;
  v12 = (unsigned __int8)objc_msgSend(v10, "processLogArchiveWithPath:startDate:endDate:errorOut:", 0LL, v9, v8, &v18);
  objc_release(v8);
  objc_release(v9);
  v13 = objc_retain(v18);
  if ( (v12 & 1) == 0 )
  {
    v14 = (os_log_s *)objc_retainAutoreleasedReturnValue(PLLogSignpostReader());
    if ( os_log_type_enabled(v14, OS_LOG_TYPE_ERROR) )
      sub_10000E204(v13, v14);
    objc_release(v14);
  }
  v15 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
  objc_msgSend(v15, "setObject:forKey:", self->_processExits, CFSTR("processExits"));
  objc_msgSend(v15, "setObject:forKey:", self->_launches, CFSTR("launchDurations"));
  objc_msgSend(v15, "setObject:forKey:", self->_extendedLaunches, CFSTR("extendedLaunchDurations"));
  objc_msgSend(v15, "setObject:forKey:", self->_resumes, CFSTR("resumeDurations"));
  objc_msgSend(v15, "setObject:forKey:", self->_glitches, CFSTR("scrollGlitches"));
  objc_msgSend(v15, "setObject:forKey:", self->_activations, CFSTR("activationDurations"));
  objc_msgSend(v15, "setObject:forKey:", self->_summarizedSignpostEvents, CFSTR("signpostEvents"));
  v16 = objc_retainAutoreleasedReturnValue(-[XPCSignpostReader packageMXSignpostData](self, "packageMXSignpostData"));
  objc_msgSend(v15, "setObject:forKey:", v16, CFSTR("signpostIntervals"));
  objc_release(v16);
  objc_msgSend(v15, "setValue:forKey:", &off_100015870, CFSTR("hangtracer_enabled"));
  objc_msgSend(v15, "setValue:forKey:", self->_hangs, CFSTR("hangDurations"));
  objc_msgSend(v15, "setValue:forKey:", self->_launchTimeSeries, CFSTR("launchesTimeSeries"));
  -[XPCSignpostReader logAggdTelemetry](self, "logAggdTelemetry");
  objc_release(v13);
  objc_release(v11);
  objc_release(v10);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v15);
}