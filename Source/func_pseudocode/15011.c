-[ATXHeuristicJSEnv _registerDataSources]
void __cdecl -[ATXHeuristicJSEnv _registerDataSources](ATXHeuristicJSEnv *self, SEL a2)
{
  _QWORD *v3; // x19
  _QWORD *v4; // x19
  _QWORD *v5; // x19
  _QWORD *v6; // x19
  _QWORD *v7; // x19
  _QWORD *v8; // x19
  _QWORD *v9; // x19
  _QWORD *v10; // x19
  _QWORD *v11; // x19
  _QWORD *v12; // x19
  _QWORD *v13; // x19
  _QWORD *v14; // x19
  _QWORD *v15; // x19
  _QWORD *v16; // x19
  _QWORD *v17; // x19
  _QWORD *v18; // x19
  _QWORD *v19; // x19
  _QWORD *v20; // x19
  _QWORD *v21; // x20
  _QWORD *v22; // x21
  _QWORD *v23; // x22
  _QWORD *v24; // x23
  _QWORD *v25; // x24
  _QWORD *v26; // x25
  _QWORD v27[4]; // [xsp+80h] [xbp-430h] BYREF
  id v28; // [xsp+A0h] [xbp-410h] BYREF
  _QWORD v29[4]; // [xsp+A8h] [xbp-408h] BYREF
  id v30; // [xsp+C8h] [xbp-3E8h] BYREF
  _QWORD v31[4]; // [xsp+D0h] [xbp-3E0h] BYREF
  id v32; // [xsp+F0h] [xbp-3C0h] BYREF
  _QWORD v33[4]; // [xsp+F8h] [xbp-3B8h] BYREF
  id v34; // [xsp+118h] [xbp-398h] BYREF
  _QWORD v35[4]; // [xsp+120h] [xbp-390h] BYREF
  id v36; // [xsp+140h] [xbp-370h] BYREF
  _QWORD v37[4]; // [xsp+148h] [xbp-368h] BYREF
  id v38; // [xsp+168h] [xbp-348h] BYREF
  _QWORD v39[4]; // [xsp+170h] [xbp-340h] BYREF
  id v40; // [xsp+190h] [xbp-320h] BYREF
  _QWORD v41[4]; // [xsp+198h] [xbp-318h] BYREF
  id v42; // [xsp+1B8h] [xbp-2F8h] BYREF
  _QWORD v43[4]; // [xsp+1C0h] [xbp-2F0h] BYREF
  id v44; // [xsp+1E0h] [xbp-2D0h] BYREF
  _QWORD v45[4]; // [xsp+1E8h] [xbp-2C8h] BYREF
  id v46; // [xsp+208h] [xbp-2A8h] BYREF
  _QWORD v47[4]; // [xsp+210h] [xbp-2A0h] BYREF
  id v48; // [xsp+230h] [xbp-280h] BYREF
  _QWORD v49[4]; // [xsp+238h] [xbp-278h] BYREF
  id v50; // [xsp+258h] [xbp-258h] BYREF
  _QWORD v51[4]; // [xsp+260h] [xbp-250h] BYREF
  id v52; // [xsp+280h] [xbp-230h] BYREF
  _QWORD v53[4]; // [xsp+288h] [xbp-228h] BYREF
  id v54; // [xsp+2A8h] [xbp-208h] BYREF
  _QWORD v55[4]; // [xsp+2B0h] [xbp-200h] BYREF
  id v56; // [xsp+2D0h] [xbp-1E0h] BYREF
  _QWORD v57[4]; // [xsp+2D8h] [xbp-1D8h] BYREF
  id v58; // [xsp+2F8h] [xbp-1B8h] BYREF
  _QWORD v59[4]; // [xsp+300h] [xbp-1B0h] BYREF
  id v60; // [xsp+320h] [xbp-190h] BYREF
  _QWORD v61[4]; // [xsp+328h] [xbp-188h] BYREF
  id v62; // [xsp+348h] [xbp-168h] BYREF
  _QWORD v63[4]; // [xsp+350h] [xbp-160h] BYREF
  id v64; // [xsp+370h] [xbp-140h] BYREF
  _QWORD v65[4]; // [xsp+378h] [xbp-138h] BYREF
  id v66; // [xsp+398h] [xbp-118h] BYREF
  _QWORD v67[4]; // [xsp+3A0h] [xbp-110h] BYREF
  id v68; // [xsp+3C0h] [xbp-F0h] BYREF
  _QWORD v69[4]; // [xsp+3C8h] [xbp-E8h] BYREF
  id v70; // [xsp+3E8h] [xbp-C8h] BYREF
  _QWORD v71[4]; // [xsp+3F0h] [xbp-C0h] BYREF
  id v72; // [xsp+410h] [xbp-A0h] BYREF
  _QWORD v73[4]; // [xsp+418h] [xbp-98h] BYREF
  id v74; // [xsp+438h] [xbp-78h] BYREF
  id location[2]; // [xsp+440h] [xbp-70h] BYREF

  objc_initWeak(location, self);
  v73[0] = _NSConcreteStackBlock;
  v73[1] = 3254779904LL;
  v73[2] = sub_100014080;
  v73[3] = &unk_100028F20;
  objc_copyWeak(&v74, location);
  v3 = objc_retainBlock(v73);
  -[JSContext setObject:forKeyedSubscript:](self->_jsContext, "setObject:forKeyedSubscript:", v3, CFSTR("getClipboard"));
  objc_release(v3);
  v71[0] = _NSConcreteStackBlock;
  v71[1] = 3254779904LL;
  v71[2] = sub_1000140D4;
  v71[3] = &unk_1000296F0;
  objc_copyWeak(&v72, location);
  v4 = objc_retainBlock(v71);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v4,
    CFSTR("isFocusModeActive"));
  objc_release(v4);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    &stru_100029740,
    CFSTR("getMemoryUse"));
  v69[0] = _NSConcreteStackBlock;
  v69[1] = 3254779904LL;
  v69[2] = sub_100014114;
  v69[3] = &unk_100028E90;
  objc_copyWeak(&v70, location);
  v5 = objc_retainBlock(v69);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v5,
    CFSTR("getVisibleCalendars"));
  objc_release(v5);
  v67[0] = _NSConcreteStackBlock;
  v67[1] = 3254779904LL;
  v67[2] = sub_100014168;
  v67[3] = &unk_100028EF0;
  objc_copyWeak(&v68, location);
  v6 = objc_retainBlock(v67);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v6,
    CFSTR("getCalendarEvents"));
  objc_release(v6);
  v65[0] = _NSConcreteStackBlock;
  v65[1] = 3254779904LL;
  v65[2] = sub_10001421C;
  v65[3] = &unk_100029760;
  objc_copyWeak(&v66, location);
  v7 = objc_retainBlock(v65);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v7,
    CFSTR("getEventPasses"));
  objc_release(v7);
  v63[0] = _NSConcreteStackBlock;
  v63[1] = 3254779904LL;
  v63[2] = sub_1000142A8;
  v63[3] = &unk_100029790;
  objc_copyWeak(&v64, location);
  v8 = objc_retainBlock(v63);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v8,
    CFSTR("getEventTravelTime"));
  objc_release(v8);
  v61[0] = _NSConcreteStackBlock;
  v61[1] = 3254779904LL;
  v61[2] = sub_1000143BC;
  v61[3] = &unk_100028E90;
  objc_copyWeak(&v62, location);
  v9 = objc_retainBlock(v61);
  -[JSContext setObject:forKeyedSubscript:](self->_jsContext, "setObject:forKeyedSubscript:", v9, CFSTR("getVIPs"));
  objc_release(v9);
  v59[0] = _NSConcreteStackBlock;
  v59[1] = 3254779904LL;
  v59[2] = sub_100014410;
  v59[3] = &unk_100029760;
  objc_copyWeak(&v60, location);
  v10 = objc_retainBlock(v59);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v10,
    CFSTR("getExtraordinaryEvents"));
  objc_release(v10);
  v57[0] = _NSConcreteStackBlock;
  v57[1] = 3254779904LL;
  v57[2] = sub_1000144A8;
  v57[3] = &unk_100028EF0;
  objc_copyWeak(&v58, location);
  v11 = objc_retainBlock(v57);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v11,
    CFSTR("getHolidayEvents"));
  objc_release(v11);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    &stru_1000297E0,
    CFSTR("getDistanceBetween"));
  v55[0] = _NSConcreteStackBlock;
  v55[1] = 3254779904LL;
  v55[2] = sub_100014778;
  v55[3] = &unk_100029800;
  objc_copyWeak(&v56, location);
  v12 = objc_retainBlock(v55);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v12,
    CFSTR("getBestContactHandle"));
  objc_release(v12);
  v53[0] = _NSConcreteStackBlock;
  v53[1] = 3254779904LL;
  v53[2] = sub_100014824;
  v53[3] = &unk_100029830;
  objc_copyWeak(&v54, location);
  v13 = objc_retainBlock(v53);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v13,
    CFSTR("allHandlesForContact"));
  objc_release(v13);
  v51[0] = _NSConcreteStackBlock;
  v51[1] = 3254779904LL;
  v51[2] = sub_10001489C;
  v51[3] = &unk_100029860;
  objc_copyWeak(&v52, location);
  v14 = objc_retainBlock(v51);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v14,
    CFSTR("getFavoriteContacts"));
  objc_release(v14);
  v49[0] = _NSConcreteStackBlock;
  v49[1] = 3254779904LL;
  v49[2] = sub_100014914;
  v49[3] = &unk_100028E90;
  objc_copyWeak(&v50, location);
  v15 = objc_retainBlock(v49);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v15,
    CFSTR("getBirthdayEvents"));
  objc_release(v15);
  v47[0] = _NSConcreteStackBlock;
  v47[1] = 3254779904LL;
  v47[2] = sub_100014968;
  v47[3] = &unk_100029890;
  objc_copyWeak(&v48, location);
  v16 = objc_retainBlock(v47);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v16,
    CFSTR("getCallHistory"));
  objc_release(v16);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    &stru_1000298E0,
    CFSTR("makeRequestRideActionForEvent"));
  v45[0] = _NSConcreteStackBlock;
  v45[1] = 3254779904LL;
  v45[2] = sub_100014BDC;
  v45[3] = &unk_100029900;
  objc_copyWeak(&v46, location);
  v17 = objc_retainBlock(v45);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v17,
    CFSTR("getUserAppPreference"));
  objc_release(v17);
  v43[0] = _NSConcreteStackBlock;
  v43[1] = 3254779904LL;
  v43[2] = sub_100014C88;
  v43[3] = &unk_100029930;
  objc_copyWeak(&v44, location);
  v18 = objc_retainBlock(v43);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v18,
    CFSTR("getDuetInteractionCount"));
  objc_release(v18);
  v41[0] = _NSConcreteStackBlock;
  v41[1] = 3254779904LL;
  v41[2] = sub_100014D54;
  v41[3] = &unk_100029860;
  objc_copyWeak(&v42, location);
  v19 = objc_retainBlock(v41);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v19,
    CFSTR("getPeopleSuggestions"));
  objc_release(v19);
  v39[0] = _NSConcreteStackBlock;
  v39[1] = 3254779904LL;
  v39[2] = sub_100014DA8;
  v39[3] = &unk_100029960;
  objc_copyWeak(&v40, location);
  v20 = objc_retainBlock(v39);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v20,
    CFSTR("getBestTimeToInteractWithContact"));
  objc_release(v20);
  v37[0] = _NSConcreteStackBlock;
  v37[1] = 3254779904LL;
  v37[2] = sub_100014F5C;
  v37[3] = &unk_100028FF0;
  objc_copyWeak(&v38, location);
  v21 = objc_retainBlock(v37);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v21,
    CFSTR("getTimeIntervalSinceUserWakeup"));
  objc_release(v21);
  v35[0] = _NSConcreteStackBlock;
  v35[1] = 3254779904LL;
  v35[2] = sub_100014FB0;
  v35[3] = &unk_100029990;
  objc_copyWeak(&v36, location);
  v22 = objc_retainBlock(v35);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v22,
    CFSTR("fetchWidgetMetadataForAppBundleIds"));
  objc_release(v22);
  v33[0] = _NSConcreteStackBlock;
  v33[1] = 3254779904LL;
  v33[2] = sub_100015028;
  v33[3] = &unk_1000299C0;
  objc_copyWeak(&v34, location);
  v23 = objc_retainBlock(v33);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v23,
    CFSTR("getLocationForMostRelevantTripInRange"));
  objc_release(v23);
  v31[0] = _NSConcreteStackBlock;
  v31[1] = 3254779904LL;
  v31[2] = sub_1000150DC;
  v31[3] = &unk_100028F20;
  objc_copyWeak(&v32, location);
  v24 = objc_retainBlock(v31);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v24,
    CFSTR("getModeCorrelatedAppsInCurrentMode"));
  objc_release(v24);
  v29[0] = _NSConcreteStackBlock;
  v29[1] = 3254779904LL;
  v29[2] = sub_100015130;
  v29[3] = &unk_100028FF0;
  objc_copyWeak(&v30, location);
  v25 = objc_retainBlock(v29);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v25,
    CFSTR("getPredictedBedTime"));
  objc_release(v25);
  v27[0] = _NSConcreteStackBlock;
  v27[1] = 3254779904LL;
  v27[2] = sub_100015184;
  v27[3] = &unk_100028FF0;
  objc_copyWeak(&v28, location);
  v26 = objc_retainBlock(v27);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v26,
    CFSTR("getScheduledBedTime"));
  objc_release(v26);
  objc_destroyWeak(&v28);
  objc_destroyWeak(&v30);
  objc_destroyWeak(&v32);
  objc_destroyWeak(&v34);
  objc_destroyWeak(&v36);
  objc_destroyWeak(&v38);
  objc_destroyWeak(&v40);
  objc_destroyWeak(&v42);
  objc_destroyWeak(&v44);
  objc_destroyWeak(&v46);
  objc_destroyWeak(&v48);
  objc_destroyWeak(&v50);
  objc_destroyWeak(&v52);
  objc_destroyWeak(&v54);
  objc_destroyWeak(&v56);
  objc_destroyWeak(&v58);
  objc_destroyWeak(&v60);
  objc_destroyWeak(&v62);
  objc_destroyWeak(&v64);
  objc_destroyWeak(&v66);
  objc_destroyWeak(&v68);
  objc_destroyWeak(&v70);
  objc_destroyWeak(&v72);
  objc_destroyWeak(&v74);
  objc_destroyWeak(location);
}