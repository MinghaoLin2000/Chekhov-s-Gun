-[ATXHeuristicJSEnv _setUpInterpreter]
void __cdecl -[ATXHeuristicJSEnv _setUpInterpreter](ATXHeuristicJSEnv *self, SEL a2)
{
  void *v3; // x20
  JSVirtualMachine *v4; // x0
  JSVirtualMachine *virtualMachine; // x8
  JSContext *v6; // x0
  JSContext *jsContext; // x8
  NSString *v8; // x20
  _QWORD *v9; // x20
  _QWORD *v10; // x20
  _QWORD *v11; // x20
  _QWORD *v12; // x20
  _QWORD *v13; // x20
  _QWORD *v14; // x20
  _QWORD *v15; // x20
  _QWORD *v16; // x20
  _QWORD *v17; // x20
  _QWORD *v18; // x20
  _QWORD *v19; // x20
  _QWORD *v20; // x20
  _QWORD *v21; // x20
  _QWORD *v22; // x20
  _QWORD *v23; // x20
  _QWORD *v24; // x20
  _QWORD *v25; // x20
  _QWORD *v26; // x20
  _QWORD *v27; // x20
  _QWORD *v28; // x20
  _QWORD *v29; // x20
  _QWORD *v30; // x20
  _QWORD *v31; // x20
  _QWORD *v32; // x20
  _QWORD *v33; // x20
  _QWORD *v34; // x20
  _QWORD *v35; // x20
  _QWORD *v36; // x20
  _QWORD *v37; // x20
  _QWORD *v38; // x20
  _QWORD *v39; // x20
  _QWORD *v40; // x20
  _QWORD *v41; // x20
  _QWORD *v42; // x20
  _QWORD *v43; // x20
  _QWORD *v44; // x20
  _QWORD *v45; // x20
  _QWORD *v46; // x20
  _QWORD *v47; // x20
  _QWORD *v48; // x20
  _QWORD *v49; // x20
  _QWORD *v50; // x20
  _QWORD *v51; // x20
  _QWORD *v52; // x20
  _QWORD *v53; // x20
  _QWORD *v54; // x20
  _QWORD *v55; // x20
  _QWORD *v56; // x20
  _QWORD *v57; // x20
  _QWORD *v58; // x20
  __int64 v59; // x23
  _QWORD *v60; // x27
  JSContext *v61; // x20
  id v62; // x28
  _QWORD v63[4]; // [xsp+180h] [xbp-8B0h] BYREF
  id v64; // [xsp+1A0h] [xbp-890h] BYREF
  int v65; // [xsp+1A8h] [xbp-888h]
  _QWORD v66[4]; // [xsp+1B0h] [xbp-880h] BYREF
  id v67; // [xsp+1D0h] [xbp-860h] BYREF
  _QWORD v68[4]; // [xsp+1D8h] [xbp-858h] BYREF
  id v69; // [xsp+1F8h] [xbp-838h] BYREF
  _QWORD v70[4]; // [xsp+200h] [xbp-830h] BYREF
  id v71; // [xsp+220h] [xbp-810h] BYREF
  _QWORD v72[4]; // [xsp+228h] [xbp-808h] BYREF
  id v73; // [xsp+248h] [xbp-7E8h] BYREF
  _QWORD v74[4]; // [xsp+250h] [xbp-7E0h] BYREF
  id v75; // [xsp+270h] [xbp-7C0h] BYREF
  _QWORD v76[4]; // [xsp+278h] [xbp-7B8h] BYREF
  id v77; // [xsp+298h] [xbp-798h] BYREF
  _QWORD v78[4]; // [xsp+2A0h] [xbp-790h] BYREF
  id v79; // [xsp+2C0h] [xbp-770h] BYREF
  _QWORD v80[4]; // [xsp+2C8h] [xbp-768h] BYREF
  id v81; // [xsp+2E8h] [xbp-748h] BYREF
  _QWORD v82[4]; // [xsp+2F0h] [xbp-740h] BYREF
  id v83; // [xsp+310h] [xbp-720h] BYREF
  _QWORD v84[4]; // [xsp+318h] [xbp-718h] BYREF
  id v85; // [xsp+338h] [xbp-6F8h] BYREF
  _QWORD v86[4]; // [xsp+340h] [xbp-6F0h] BYREF
  id v87; // [xsp+360h] [xbp-6D0h] BYREF
  _QWORD v88[4]; // [xsp+368h] [xbp-6C8h] BYREF
  id v89; // [xsp+388h] [xbp-6A8h] BYREF
  _QWORD v90[4]; // [xsp+390h] [xbp-6A0h] BYREF
  id v91; // [xsp+3B0h] [xbp-680h] BYREF
  _QWORD v92[4]; // [xsp+3B8h] [xbp-678h] BYREF
  id v93; // [xsp+3D8h] [xbp-658h] BYREF
  _QWORD v94[4]; // [xsp+3E0h] [xbp-650h] BYREF
  id v95; // [xsp+400h] [xbp-630h] BYREF
  _QWORD v96[4]; // [xsp+408h] [xbp-628h] BYREF
  id v97; // [xsp+428h] [xbp-608h] BYREF
  _QWORD v98[4]; // [xsp+430h] [xbp-600h] BYREF
  id v99; // [xsp+450h] [xbp-5E0h] BYREF
  _QWORD v100[4]; // [xsp+458h] [xbp-5D8h] BYREF
  id v101; // [xsp+478h] [xbp-5B8h] BYREF
  _QWORD v102[4]; // [xsp+480h] [xbp-5B0h] BYREF
  id v103; // [xsp+4A0h] [xbp-590h] BYREF
  _QWORD v104[4]; // [xsp+4A8h] [xbp-588h] BYREF
  id v105; // [xsp+4C8h] [xbp-568h] BYREF
  _QWORD v106[4]; // [xsp+4D0h] [xbp-560h] BYREF
  id v107; // [xsp+4F0h] [xbp-540h] BYREF
  _QWORD v108[4]; // [xsp+4F8h] [xbp-538h] BYREF
  id v109; // [xsp+518h] [xbp-518h] BYREF
  _QWORD v110[4]; // [xsp+520h] [xbp-510h] BYREF
  id v111; // [xsp+540h] [xbp-4F0h] BYREF
  _QWORD v112[4]; // [xsp+548h] [xbp-4E8h] BYREF
  id v113; // [xsp+568h] [xbp-4C8h] BYREF
  _QWORD v114[4]; // [xsp+570h] [xbp-4C0h] BYREF
  id v115; // [xsp+590h] [xbp-4A0h] BYREF
  _QWORD v116[4]; // [xsp+598h] [xbp-498h] BYREF
  id v117; // [xsp+5B8h] [xbp-478h] BYREF
  _QWORD v118[4]; // [xsp+5C0h] [xbp-470h] BYREF
  id v119; // [xsp+5E0h] [xbp-450h] BYREF
  _QWORD v120[4]; // [xsp+5E8h] [xbp-448h] BYREF
  id v121; // [xsp+608h] [xbp-428h] BYREF
  _QWORD v122[4]; // [xsp+610h] [xbp-420h] BYREF
  id v123; // [xsp+630h] [xbp-400h] BYREF
  _QWORD v124[4]; // [xsp+638h] [xbp-3F8h] BYREF
  id v125; // [xsp+658h] [xbp-3D8h] BYREF
  _QWORD v126[4]; // [xsp+660h] [xbp-3D0h] BYREF
  id v127; // [xsp+680h] [xbp-3B0h] BYREF
  _QWORD v128[4]; // [xsp+688h] [xbp-3A8h] BYREF
  id v129; // [xsp+6A8h] [xbp-388h] BYREF
  _QWORD v130[4]; // [xsp+6B0h] [xbp-380h] BYREF
  id v131; // [xsp+6D0h] [xbp-360h] BYREF
  _QWORD v132[4]; // [xsp+6D8h] [xbp-358h] BYREF
  id v133; // [xsp+6F8h] [xbp-338h] BYREF
  _QWORD v134[4]; // [xsp+700h] [xbp-330h] BYREF
  id v135; // [xsp+720h] [xbp-310h] BYREF
  _QWORD v136[4]; // [xsp+728h] [xbp-308h] BYREF
  id v137; // [xsp+748h] [xbp-2E8h] BYREF
  _QWORD v138[4]; // [xsp+750h] [xbp-2E0h] BYREF
  id v139; // [xsp+770h] [xbp-2C0h] BYREF
  _QWORD v140[4]; // [xsp+778h] [xbp-2B8h] BYREF
  id v141; // [xsp+798h] [xbp-298h] BYREF
  _QWORD v142[5]; // [xsp+7A0h] [xbp-290h] BYREF
  _QWORD v143[5]; // [xsp+7C8h] [xbp-268h] BYREF
  id v144; // [xsp+7F0h] [xbp-240h] BYREF
  _QWORD v145[5]; // [xsp+7F8h] [xbp-238h] BYREF
  id v146; // [xsp+820h] [xbp-210h] BYREF
  _QWORD v147[5]; // [xsp+828h] [xbp-208h] BYREF
  id v148; // [xsp+850h] [xbp-1E0h]
  _QWORD v149[4]; // [xsp+858h] [xbp-1D8h] BYREF
  id v150; // [xsp+878h] [xbp-1B8h] BYREF
  _QWORD v151[4]; // [xsp+880h] [xbp-1B0h] BYREF
  id v152; // [xsp+8A0h] [xbp-190h] BYREF
  _QWORD v153[4]; // [xsp+8A8h] [xbp-188h] BYREF
  id v154; // [xsp+8C8h] [xbp-168h] BYREF
  _QWORD v155[4]; // [xsp+8D0h] [xbp-160h] BYREF
  id v156; // [xsp+8F0h] [xbp-140h] BYREF
  _QWORD v157[4]; // [xsp+8F8h] [xbp-138h] BYREF
  id v158; // [xsp+918h] [xbp-118h] BYREF
  _QWORD v159[4]; // [xsp+920h] [xbp-110h] BYREF
  id v160; // [xsp+940h] [xbp-F0h] BYREF
  _QWORD v161[4]; // [xsp+948h] [xbp-E8h] BYREF
  id v162; // [xsp+968h] [xbp-C8h] BYREF
  _QWORD v163[4]; // [xsp+970h] [xbp-C0h] BYREF
  id v164; // [xsp+990h] [xbp-A0h] BYREF
  _QWORD v165[4]; // [xsp+998h] [xbp-98h] BYREF
  id v166; // [xsp+9B8h] [xbp-78h] BYREF
  id location[2]; // [xsp+9C0h] [xbp-70h] BYREF

  v3 = (void *)objc_opt_new(&OBJC_CLASS___NSDate, a2);
  -[ATXHeuristicJSEnv setNow:](self, "setNow:", v3);
  objc_release(v3);
  v4 = (JSVirtualMachine *)objc_alloc_init((Class)&OBJC_CLASS___JSVirtualMachine);
  virtualMachine = self->_virtualMachine;
  self->_virtualMachine = v4;
  objc_release(virtualMachine);
  v6 = (JSContext *)objc_msgSend(
                      objc_alloc((Class)&OBJC_CLASS___JSContext),
                      "initWithVirtualMachine:",
                      self->_virtualMachine);
  jsContext = self->_jsContext;
  self->_jsContext = v6;
  objc_release(jsContext);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    &off_10002C0B8,
    CFSTR("ATXSuggestionLayoutOption1Row1Column"));
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    &off_10002C0D0,
    CFSTR("ATXSuggestionLayoutOption1Row2Columns"));
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    &off_10002C0E8,
    CFSTR("ATXSuggestionLayoutOption2Rows2Columns"));
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    &off_10002C100,
    CFSTR("ATXSuggestionLayoutOption2Rows4Columns"));
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    &off_10002C118,
    CFSTR("ATXSuggestionLayoutOption1Row4Columns"));
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    &off_10002C130,
    CFSTR("ATXSuggestionLayoutOption4Rows4Columns"));
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    &off_10002C148,
    CFSTR("ATXSuggestionLayoutOption4Rows8Columns"));
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    ATXHomeScreenPageConfigUpdateDarwinNotificationName,
    CFSTR("ATXHomeScreenPageConfigUpdateDarwinNotificationName"));
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    ATXTodayPageConfigUpdateDarwinNotificationName,
    CFSTR("ATXTodayPageConfigUpdateDarwinNotificationName"));
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    CFSTR("SignificantTimeChangeNotification"),
    CFSTR("SignificantTimeChangeNotification"));
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    &off_10002C160,
    CFSTR("PPEventRankerProminentFeatureUnusualStartTime"));
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    NSUserActivityTypeBrowsingWeb,
    CFSTR("NSUserActivityTypeBrowsingWeb"));
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    ATXLocalPasteboardDidChangeNotification,
    CFSTR("ATXLocalPasteboardDidChangeNotification"));
  v8 = objc_retainAutoreleasedReturnValue(
         +[NSString stringWithUTF8String:](
           &OBJC_CLASS___NSString,
           "stringWithUTF8String:",
           _UABestAppSuggestionChangedNotification));
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v8,
    CFSTR("UABestAppSuggestionChangedNotification"));
  objc_release(v8);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    CFSTR("com.apple.CallHistoryPluginHelper.launchnotification"),
    CFSTR("CallHistoryChangedNotification"));
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    MTAlarmManagerAlarmsChanged,
    CFSTR("MTAlarmManagerAlarmsChanged"));
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    EKEventStoreChangedNotification,
    CFSTR("EKEventStoreChangedNotification"));
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    CFSTR("ATXTravelTimeUpdated"),
    CFSTR("ATXEventTravelTimeUpdated"));
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    ATXDNDStateChanged,
    CFSTR("ATXDNDStateChanged"));
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    ATXPassLibraryChanged,
    CFSTR("ATXPassLibraryChanged"));
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    CFSTR("com.apple.LaunchServices.applicationUnregistered"),
    CFSTR("LSApplicationUnregistered"));
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    CFSTR("com.apple.system.accpowersources.timeremaining"),
    CFSTR("kIOPSAccNotifyTimeRemaining"));
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    CFSTR("com.apple.system.accpowersources.attach"),
    CFSTR("kIOPSAccNotifyAttach"));
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    CFSTR("com.apple.system.accpowersources.source"),
    CFSTR("kIOPSAccNotifyPowerSource"));
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    &off_10002C178,
    CFSTR("RUNNING_TESTS"));
  objc_initWeak(location, self);
  v165[0] = _NSConcreteStackBlock;
  v165[1] = 3254779904LL;
  v165[2] = sub_10000D08C;
  v165[3] = &unk_100028BC0;
  objc_copyWeak(&v166, location);
  v9 = objc_retainBlock(v165);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v9,
    CFSTR("expireAfterTime"));
  objc_release(v9);
  v163[0] = _NSConcreteStackBlock;
  v163[1] = 3254779904LL;
  v163[2] = sub_10000D0F0;
  v163[3] = &unk_100028BC0;
  objc_copyWeak(&v164, location);
  v10 = objc_retainBlock(v163);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v10,
    CFSTR("expireAtTime"));
  objc_release(v10);
  v161[0] = _NSConcreteStackBlock;
  v161[1] = 3254779904LL;
  v161[2] = sub_10000D140;
  v161[3] = &unk_100028BF0;
  objc_copyWeak(&v162, location);
  v11 = objc_retainBlock(v161);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v11,
    CFSTR("expireAfterLocalNotification"));
  objc_release(v11);
  v159[0] = _NSConcreteStackBlock;
  v159[1] = 3254779904LL;
  v159[2] = sub_10000D280;
  v159[3] = &unk_100028BF0;
  objc_copyWeak(&v160, location);
  v12 = objc_retainBlock(v159);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v12,
    CFSTR("expireAfterDarwinNotification"));
  objc_release(v12);
  v157[0] = _NSConcreteStackBlock;
  v157[1] = 3254779904LL;
  v157[2] = sub_10000D2F0;
  v157[3] = &unk_100028C20;
  objc_copyWeak(&v158, location);
  v13 = objc_retainBlock(v157);
  -[JSContext setObject:forKeyedSubscript:](self->_jsContext, "setObject:forKeyedSubscript:", v13, CFSTR("recordError"));
  objc_release(v13);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    &stru_100028C70,
    CFSTR("appNameFromBundleID"));
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    &stru_100028CB0,
    CFSTR("dataDetectors"));
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    &stru_100028CF0,
    CFSTR("localizedTimeForAlarm"));
  v155[0] = _NSConcreteStackBlock;
  v155[1] = 3254779904LL;
  v155[2] = sub_10000D4AC;
  v155[3] = &unk_100028D10;
  objc_copyWeak(&v156, location);
  v14 = objc_retainBlock(v155);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v14,
    CFSTR("localizedFormat"));
  objc_release(v14);
  v153[0] = _NSConcreteStackBlock;
  v153[1] = 3254779904LL;
  v153[2] = sub_10000D538;
  v153[3] = &unk_100028D40;
  objc_copyWeak(&v154, location);
  v15 = objc_retainBlock(v153);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v15,
    CFSTR("makeLocalizedTime"));
  objc_release(v15);
  v151[0] = _NSConcreteStackBlock;
  v151[1] = 3254779904LL;
  v151[2] = sub_10000D5E8;
  v151[3] = &unk_100028D70;
  objc_copyWeak(&v152, location);
  v16 = objc_retainBlock(v151);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v16,
    CFSTR("isEventAtOne"));
  objc_release(v16);
  v149[0] = _NSConcreteStackBlock;
  v149[1] = 3254779904LL;
  v149[2] = sub_10000D660;
  v149[3] = &unk_100028D40;
  objc_copyWeak(&v150, location);
  v17 = objc_retainBlock(v149);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v17,
    CFSTR("makeLocalizedDateTime"));
  objc_release(v17);
  v147[0] = 0LL;
  v147[1] = v147;
  v147[2] = 0x3032000000LL;
  v147[3] = sub_10000D710;
  v147[4] = sub_10000D720;
  v148 = 0LL;
  v145[0] = _NSConcreteStackBlock;
  v145[1] = 3254779904LL;
  v145[2] = sub_10000D728;
  v145[3] = &unk_100028DA0;
  v145[4] = v147;
  objc_copyWeak(&v146, location);
  v18 = objc_retainBlock(v145);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v18,
    CFSTR("getBestAppSuggestionDictionary"));
  objc_release(v18);
  v143[0] = _NSConcreteStackBlock;
  v143[1] = 3254779904LL;
  v143[2] = sub_10000DB1C;
  v143[3] = &unk_100028DD0;
  objc_copyWeak(&v144, location);
  v143[4] = v147;
  v19 = objc_retainBlock(v143);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v19,
    CFSTR("makeBestAppAction"));
  objc_release(v19);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    &stru_100028E00,
    CFSTR("extractHostFromURL"));
  v142[0] = _NSConcreteStackBlock;
  v142[1] = 3254779904LL;
  v142[2] = sub_10000DDA8;
  v142[3] = &unk_100028E20;
  v142[4] = v147;
  v20 = objc_retainBlock(v142);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v20,
    CFSTR("mockBestAppSuggestionFromDataSource"));
  objc_release(v20);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    &stru_100028E70,
    CFSTR("allowBestAppNotifications"));
  v140[0] = _NSConcreteStackBlock;
  v140[1] = 3254779904LL;
  v140[2] = sub_10000DECC;
  v140[3] = &unk_100028E90;
  objc_copyWeak(&v141, location);
  v21 = objc_retainBlock(v140);
  -[JSContext setObject:forKeyedSubscript:](self->_jsContext, "setObject:forKeyedSubscript:", v21, CFSTR("getNLEvents"));
  objc_release(v21);
  v138[0] = _NSConcreteStackBlock;
  v138[1] = 3254779904LL;
  v138[2] = sub_10000DF20;
  v138[3] = &unk_100028EC0;
  objc_copyWeak(&v139, location);
  v22 = objc_retainBlock(v138);
  -[JSContext setObject:forKeyedSubscript:](self->_jsContext, "setObject:forKeyedSubscript:", v22, CFSTR("getContacts"));
  objc_release(v22);
  v136[0] = _NSConcreteStackBlock;
  v136[1] = 3254779904LL;
  v136[2] = sub_10000E010;
  v136[3] = &unk_100028EF0;
  objc_copyWeak(&v137, location);
  v23 = objc_retainBlock(v136);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v23,
    CFSTR("getEnabledAlarms"));
  objc_release(v23);
  v134[0] = _NSConcreteStackBlock;
  v134[1] = 3254779904LL;
  v134[2] = sub_10000E07C;
  v134[3] = &unk_100028F20;
  objc_copyWeak(&v135, location);
  v24 = objc_retainBlock(v134);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v24,
    CFSTR("getCurrentLocation"));
  objc_release(v24);
  v132[0] = _NSConcreteStackBlock;
  v132[1] = 3254779904LL;
  v132[2] = sub_10000E0D0;
  v132[3] = &unk_100028F50;
  objc_copyWeak(&v133, location);
  v25 = objc_retainBlock(v132);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v25,
    CFSTR("getUnreadMessages"));
  objc_release(v25);
  v130[0] = _NSConcreteStackBlock;
  v130[1] = 3254779904LL;
  v130[2] = sub_10000E12C;
  v130[3] = &unk_100028E90;
  objc_copyWeak(&v131, location);
  v26 = objc_retainBlock(v130);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v26,
    CFSTR("getBatteryInformation"));
  objc_release(v26);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    &stru_100028FA0,
    CFSTR("willAlarmFireInDateRange"));
  v128[0] = _NSConcreteStackBlock;
  v128[1] = 3254779904LL;
  v128[2] = sub_10000E230;
  v128[3] = &unk_100028D10;
  objc_copyWeak(&v129, location);
  v27 = objc_retainBlock(v128);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v27,
    CFSTR("getCityNameFromAirportCode"));
  objc_release(v27);
  v126[0] = _NSConcreteStackBlock;
  v126[1] = 3254779904LL;
  v126[2] = sub_10000E2BC;
  v126[3] = &unk_100028FC0;
  objc_copyWeak(&v127, location);
  v28 = objc_retainBlock(v126);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v28,
    CFSTR("getLatestFlightStatus"));
  objc_release(v28);
  v124[0] = _NSConcreteStackBlock;
  v124[1] = 3254779904LL;
  v124[2] = sub_10000E334;
  v124[3] = &unk_100028FF0;
  objc_copyWeak(&v125, location);
  v29 = objc_retainBlock(v124);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v29,
    CFSTR("getSetAlarmTimeOfDay"));
  objc_release(v29);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    &stru_100029040,
    CFSTR("timestampWithHourMinuteAtDayOfTimestamp"));
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    &stru_100029080,
    CFSTR("timestampByOffsettingDays"));
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    &stru_1000290A0,
    CFSTR("phoneNumberFromTelUrl"));
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    CFSTR("com.apple.Safari"),
    CFSTR("safariBundleIdentifier"));
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    CFSTR("com.apple.iCal"),
    CFSTR("calendarBundleIdentifier"));
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    CFSTR("com.apple.iCal.CalendarWidgetExtension"),
    CFSTR("calendarWidgetBundleIdentifier"));
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    CFSTR("com.apple.clock"),
    CFSTR("clockBundleIdentifier"));
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    CFSTR("com.apple.FaceTime"),
    CFSTR("faceTimeBundleIdentifier"));
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    CFSTR("com.apple.Music"),
    CFSTR("musicBundleIdentifier"));
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    CFSTR("com.apple.podcasts"),
    CFSTR("podcastsBundleIdentifier"));
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    CFSTR("com.apple.stocks"),
    CFSTR("stocksBundleIdentifier"));
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    CFSTR("com.apple.TV"),
    CFSTR("tvBundleIdentifier"));
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    CFSTR("com.apple.weather"),
    CFSTR("weatherBundleIdentifier"));
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    CFSTR("com.apple.MobileSMS"),
    CFSTR("messagesBundleIdentifier"));
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    &stru_1000290C0,
    CFSTR("isMac"));
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    &stru_1000290E0,
    CFSTR("isiPad"));
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    &stru_100029120,
    CFSTR("isAppInstalled"));
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    &stru_100029160,
    CFSTR("makeLocalizedTimeInterval"));
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    &stru_1000291A0,
    CFSTR("makeCriteria"));
  v122[0] = _NSConcreteStackBlock;
  v122[1] = 3254779904LL;
  v122[2] = sub_10000E69C;
  v122[3] = &unk_1000291C0;
  objc_copyWeak(&v123, location);
  v30 = objc_retainBlock(v122);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v30,
    CFSTR("makeDNDForEventAction"));
  objc_release(v30);
  v120[0] = _NSConcreteStackBlock;
  v120[1] = 3254779904LL;
  v120[2] = sub_10000E824;
  v120[3] = &unk_1000291F0;
  objc_copyWeak(&v121, location);
  v31 = objc_retainBlock(v120);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v31,
    CFSTR("makeSendMsgIntentAction"));
  objc_release(v31);
  v118[0] = _NSConcreteStackBlock;
  v118[1] = 3254779904LL;
  v118[2] = sub_10000EAC4;
  v118[3] = &unk_100029220;
  objc_copyWeak(&v119, location);
  v32 = objc_retainBlock(v118);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v32,
    CFSTR("makeSetAlarmIntent"));
  objc_release(v32);
  v116[0] = _NSConcreteStackBlock;
  v116[1] = 3254779904LL;
  v116[2] = sub_10000EC4C;
  v116[3] = &unk_100029250;
  objc_copyWeak(&v117, location);
  v33 = objc_retainBlock(v116);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v33,
    CFSTR("makeUpdateAlarmIntent"));
  objc_release(v33);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    &stru_1000292A0,
    CFSTR("makeEnableAirplaneModeAction"));
  v114[0] = _NSConcreteStackBlock;
  v114[1] = 3254779904LL;
  v114[2] = sub_10000EE40;
  v114[3] = &unk_1000292C0;
  objc_copyWeak(&v115, location);
  v34 = objc_retainBlock(v114);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v34,
    CFSTR("makeStartCallIntentAction"));
  objc_release(v34);
  v112[0] = _NSConcreteStackBlock;
  v112[1] = 3254779904LL;
  v112[2] = sub_10000F0A8;
  v112[3] = &unk_1000292F0;
  objc_copyWeak(&v113, location);
  v35 = objc_retainBlock(v112);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v35,
    CFSTR("makeStartAudioCallIntentAction"));
  objc_release(v35);
  v110[0] = _NSConcreteStackBlock;
  v110[1] = 3254779904LL;
  v110[2] = sub_10000F2F4;
  v110[3] = &unk_1000292F0;
  objc_copyWeak(&v111, location);
  v36 = objc_retainBlock(v110);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v36,
    CFSTR("makeStartVideoCallIntentAction"));
  objc_release(v36);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    &stru_100029340,
    CFSTR("makeCreateCalendarEventAction"));
  v108[0] = _NSConcreteStackBlock;
  v108[1] = 3254779904LL;
  v108[2] = sub_10000F640;
  v108[3] = &unk_100029360;
  objc_copyWeak(&v109, location);
  v37 = objc_retainBlock(v108);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v37,
    CFSTR("makeDNDForCurrentLocationAction"));
  objc_release(v37);
  v106[0] = _NSConcreteStackBlock;
  v106[1] = 3254779904LL;
  v106[2] = sub_10000F71C;
  v106[3] = &unk_1000291C0;
  objc_copyWeak(&v107, location);
  v38 = objc_retainBlock(v106);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v38,
    CFSTR("makeCheckInForEventAction"));
  objc_release(v38);
  v104[0] = _NSConcreteStackBlock;
  v104[1] = 3254779904LL;
  v104[2] = sub_10000F964;
  v104[3] = &unk_100029390;
  objc_copyWeak(&v105, location);
  v39 = objc_retainBlock(v104);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v39,
    CFSTR("addInfoSuggestion"));
  objc_release(v39);
  v102[0] = _NSConcreteStackBlock;
  v102[1] = 3254779904LL;
  v102[2] = sub_10000FC14;
  v102[3] = &unk_100028BC0;
  objc_copyWeak(&v103, location);
  v40 = objc_retainBlock(v102);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v40,
    CFSTR("scheduleRefreshAfterTimeInterval"));
  objc_release(v40);
  v100[0] = _NSConcreteStackBlock;
  v100[1] = 3254779904LL;
  v100[2] = sub_10000FCE8;
  v100[3] = &unk_100028BC0;
  objc_copyWeak(&v101, location);
  v41 = objc_retainBlock(v100);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v41,
    CFSTR("scheduleRefreshAtTimestamp"));
  objc_release(v41);
  v98[0] = _NSConcreteStackBlock;
  v98[1] = 3254779904LL;
  v98[2] = sub_10000FDBC;
  v98[3] = &unk_100028BF0;
  objc_copyWeak(&v99, location);
  v42 = objc_retainBlock(v98);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v42,
    CFSTR("scheduleRefreshAfterLocalNotification"));
  objc_release(v42);
  v96[0] = _NSConcreteStackBlock;
  v96[1] = 3254779904LL;
  v96[2] = sub_10000FEB4;
  v96[3] = &unk_1000293C0;
  objc_copyWeak(&v97, location);
  v43 = objc_retainBlock(v96);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v43,
    CFSTR("scheduleRefreshAfterDarwinNotification"));
  objc_release(v43);
  v94[0] = _NSConcreteStackBlock;
  v94[1] = 3254779904LL;
  v94[2] = sub_10000FFC8;
  v94[3] = &unk_100028C20;
  objc_copyWeak(&v95, location);
  v44 = objc_retainBlock(v94);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v44,
    CFSTR("scheduleRefreshAfterUserWakeUp"));
  objc_release(v44);
  v92[0] = _NSConcreteStackBlock;
  v92[1] = 3254779904LL;
  v92[2] = sub_100010054;
  v92[3] = &unk_100028C20;
  objc_copyWeak(&v93, location);
  v45 = objc_retainBlock(v92);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v45,
    CFSTR("scheduleRefreshOnAirplaneModeToggle"));
  objc_release(v45);
  v90[0] = _NSConcreteStackBlock;
  v90[1] = 3254779904LL;
  v90[2] = sub_1000100E0;
  v90[3] = &unk_100028C20;
  objc_copyWeak(&v91, location);
  v46 = objc_retainBlock(v90);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v46,
    CFSTR("scheduleRefreshWithUserFocusComputedModeStream"));
  objc_release(v46);
  v88[0] = _NSConcreteStackBlock;
  v88[1] = 3254779904LL;
  v88[2] = sub_10001016C;
  v88[3] = &unk_100028C20;
  objc_copyWeak(&v89, location);
  v47 = objc_retainBlock(v88);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v47,
    CFSTR("scheduleRefreshWithInferredModeStream"));
  objc_release(v47);
  v86[0] = _NSConcreteStackBlock;
  v86[1] = 3254779904LL;
  v86[2] = sub_1000101F8;
  v86[3] = &unk_1000293F0;
  objc_copyWeak(&v87, location);
  v48 = objc_retainBlock(v86);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v48,
    CFSTR("makeCalendarIntent"));
  objc_release(v48);
  v84[0] = _NSConcreteStackBlock;
  v84[1] = 3254779904LL;
  v84[2] = sub_10001025C;
  v84[3] = &unk_1000293F0;
  objc_copyWeak(&v85, location);
  v49 = objc_retainBlock(v84);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v49,
    CFSTR("makeWeatherIntent"));
  objc_release(v49);
  v82[0] = _NSConcreteStackBlock;
  v82[1] = 3254779904LL;
  v82[2] = sub_10001033C;
  v82[3] = &unk_100029420;
  objc_copyWeak(&v83, location);
  v50 = objc_retainBlock(v82);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v50,
    CFSTR("makeTravelWeatherIntent"));
  objc_release(v50);
  v80[0] = _NSConcreteStackBlock;
  v80[1] = 3254779904LL;
  v80[2] = sub_100010654;
  v80[3] = &unk_100029450;
  objc_copyWeak(&v81, location);
  v51 = objc_retainBlock(v80);
  -[JSContext setObject:forKeyedSubscript:](self->_jsContext, "setObject:forKeyedSubscript:", v51, CFSTR("makeNSUA"));
  objc_release(v51);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    &stru_1000294A0,
    CFSTR("getPerDeviceRandomTimeOffset"));
  v78[0] = _NSConcreteStackBlock;
  v78[1] = 3254779904LL;
  v78[2] = sub_100010938;
  v78[3] = &unk_1000294C0;
  objc_copyWeak(&v79, location);
  v52 = objc_retainBlock(v78);
  -[JSContext setObject:forKeyedSubscript:](self->_jsContext, "setObject:forKeyedSubscript:", v52, CFSTR("addAction"));
  objc_release(v52);
  v76[0] = _NSConcreteStackBlock;
  v76[1] = 3254779904LL;
  v76[2] = sub_1000109B8;
  v76[3] = &unk_100028FF0;
  objc_copyWeak(&v77, location);
  v53 = objc_retainBlock(v76);
  -[JSContext setObject:forKeyedSubscript:](self->_jsContext, "setObject:forKeyedSubscript:", v53, CFSTR("now"));
  objc_release(v53);
  v74[0] = _NSConcreteStackBlock;
  v74[1] = 3254779904LL;
  v74[2] = sub_100010A2C;
  v74[3] = &unk_1000294F0;
  objc_copyWeak(&v75, location);
  v54 = objc_retainBlock(v74);
  -[JSContext setObject:forKeyedSubscript:](self->_jsContext, "setObject:forKeyedSubscript:", v54, CFSTR("getDate"));
  objc_release(v54);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    &stru_100029540,
    CFSTR("getTS"));
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    &stru_100029580,
    CFSTR("isTimestampToday"));
  v72[0] = _NSConcreteStackBlock;
  v72[1] = 3254779904LL;
  v72[2] = sub_100010C00;
  v72[3] = &unk_1000295A0;
  objc_copyWeak(&v73, location);
  v55 = objc_retainBlock(v72);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v55,
    CFSTR("timestampByOffsettingStartOfTodayByNumberOfDays"));
  objc_release(v55);
  v70[0] = _NSConcreteStackBlock;
  v70[1] = 3254779904LL;
  v70[2] = sub_100010D2C;
  v70[3] = &unk_100028BF0;
  objc_copyWeak(&v71, location);
  v56 = objc_retainBlock(v70);
  -[JSContext setObject:forKeyedSubscript:](self->_jsContext, "setObject:forKeyedSubscript:", v56, CFSTR("consoleLog"));
  objc_release(v56);
  v68[0] = _NSConcreteStackBlock;
  v68[1] = 3254779904LL;
  v68[2] = sub_100010E2C;
  v68[3] = &unk_1000295D0;
  objc_copyWeak(&v69, location);
  v57 = objc_retainBlock(v68);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v57,
    CFSTR("consoleLogPrivate"));
  objc_release(v57);
  v66[0] = _NSConcreteStackBlock;
  v66[1] = 3254779904LL;
  v66[2] = sub_100010F58;
  v66[3] = &unk_1000295D0;
  objc_copyWeak(&v67, location);
  v58 = objc_retainBlock(v66);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v58,
    CFSTR("consoleLogSensitive"));
  objc_release(v58);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    &stru_100029600,
    CFSTR("localizedAppName"));
  -[JSContext setExceptionHandler:](self->_jsContext, "setExceptionHandler:", &stru_100029640);
  v59 = 0LL;
  do
  {
    v63[0] = _NSConcreteStackBlock;
    v63[1] = 3254779904LL;
    v63[2] = sub_10001122C;
    v63[3] = &unk_100029660;
    objc_copyWeak(&v64, location);
    v65 = v59;
    v60 = objc_retainBlock(v63);
    v61 = self->_jsContext;
    v62 = objc_retainAutoreleasedReturnValue(-[ATXHeuristicJSEnv _functionNameForMGQuery:](self, "_functionNameForMGQuery:", v59));
    -[JSContext setObject:forKeyedSubscript:](v61, "setObject:forKeyedSubscript:", v60, v62);
    objc_release(v62);
    objc_release(v60);
    objc_destroyWeak(&v64);
    v59 = (unsigned int)(v59 + 1);
  }
  while ( (_DWORD)v59 != 6 );
  -[ATXHeuristicJSEnv _registerDataSources](self, "_registerDataSources");
  -[ATXHeuristicJSEnv _injectScript](self, "_injectScript");
  objc_destroyWeak(&v67);
  objc_destroyWeak(&v69);
  objc_destroyWeak(&v71);
  objc_destroyWeak(&v73);
  objc_destroyWeak(&v75);
  objc_destroyWeak(&v77);
  objc_destroyWeak(&v79);
  objc_destroyWeak(&v81);
  objc_destroyWeak(&v83);
  objc_destroyWeak(&v85);
  objc_destroyWeak(&v87);
  objc_destroyWeak(&v89);
  objc_destroyWeak(&v91);
  objc_destroyWeak(&v93);
  objc_destroyWeak(&v95);
  objc_destroyWeak(&v97);
  objc_destroyWeak(&v99);
  objc_destroyWeak(&v101);
  objc_destroyWeak(&v103);
  objc_destroyWeak(&v105);
  objc_destroyWeak(&v107);
  objc_destroyWeak(&v109);
  objc_destroyWeak(&v111);
  objc_destroyWeak(&v113);
  objc_destroyWeak(&v115);
  objc_destroyWeak(&v117);
  objc_destroyWeak(&v119);
  objc_destroyWeak(&v121);
  objc_destroyWeak(&v123);
  objc_destroyWeak(&v125);
  objc_destroyWeak(&v127);
  objc_destroyWeak(&v129);
  objc_destroyWeak(&v131);
  objc_destroyWeak(&v133);
  objc_destroyWeak(&v135);
  objc_destroyWeak(&v137);
  objc_destroyWeak(&v139);
  objc_destroyWeak(&v141);
  objc_destroyWeak(&v144);
  objc_destroyWeak(&v146);
  _Block_object_dispose(v147, 8);
  objc_release(v148);
  objc_destroyWeak(&v150);
  objc_destroyWeak(&v152);
  objc_destroyWeak(&v154);
  objc_destroyWeak(&v156);
  objc_destroyWeak(&v158);
  objc_destroyWeak(&v160);
  objc_destroyWeak(&v162);
  objc_destroyWeak(&v164);
  objc_destroyWeak(&v166);
  objc_destroyWeak(location);
}