-[XPCSignpostReader processSignpostInterval:]
void __cdecl -[XPCSignpostReader processSignpostInterval:](XPCSignpostReader *self, SEL a2, id a3)
{
  id v4; // x19
  id v5; // x20
  void *v6; // x22
  unsigned int v7; // w23
  void *v8; // x22
  unsigned int v9; // w23
  void *v10; // x22
  void *v11; // x0
  void *v12; // x23
  void *v13; // x24
  void *v14; // x25
  void *v15; // x26
  void *v16; // x27
  unsigned int v17; // w28
  void *v18; // x22
  void *v19; // x23
  unsigned int v20; // w24
  void *v21; // x22
  unsigned int v22; // w23
  void *v23; // x22
  void *v24; // x23
  unsigned int v25; // w24
  void *v26; // x22
  unsigned int v27; // w23
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[XPCSignpostReader getBundleIDFromInterval:](self, "getBundleIDFromInterval:", v4));
  if ( !v5 )
    goto LABEL_20;
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "name"));
  v7 = (unsigned int)objc_msgSend(v6, "isEqualToString:", CFSTR("ApplicationFirstFramePresentation"));
  objc_release(v6);
  if ( v7 )
    -[XPCSignpostReader updateLaunchesForProcess:withInterval:](self, "updateLaunchesForProcess:withInterval:", v5, v4);
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "name"));
  v9 = (unsigned int)objc_msgSend(v8, "isEqualToString:", CFSTR("ApplicationLaunchExtendedResponsive"));
  objc_release(v8);
  if ( v9 )
    -[XPCSignpostReader updateTimeSeriesLaunches:withBundleID:](self, "updateTimeSeriesLaunches:withBundleID:", v4, v5);
  v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "beginEvent"));
  v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "string2Value"));
  if ( v11 )
  {
    v12 = v11;
    v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "endEvent"));
    v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v13, "number1Value"));
    if ( (unsigned int)objc_msgSend(v14, "intValue") == 1 )
    {
      v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "beginEvent"));
      v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15, "name"));
      v17 = (unsigned int)objc_msgSend(v16, "isEqualToString:", CFSTR("AppLaunch"));
      objc_release(v16);
      objc_release(v15);
      objc_release(v14);
      objc_release(v13);
      objc_release(v12);
      objc_release(v10);
      if ( v17 )
      {
        -[XPCSignpostReader updateExtendedLaunchesForProcess:withInterval:](
          self,
          "updateExtendedLaunchesForProcess:withInterval:",
          v5,
          v4);
        goto LABEL_20;
      }
      goto LABEL_12;
    }
    objc_release(v14);
    objc_release(v13);
    objc_release(v12);
  }
  objc_release(v10);
LABEL_12:
  v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "beginEvent"));
  v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v18, "name"));
  v20 = (unsigned int)objc_msgSend(v19, "isEqualToString:", CFSTR("AppResume"));
  objc_release(v19);
  objc_release(v18);
  if ( v20 )
  {
    -[XPCSignpostReader updateResumesForProcess:withInterval:](self, "updateResumesForProcess:withInterval:", v5, v4);
  }
  else
  {
    v21 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "name"));
    v22 = (unsigned int)objc_msgSend(v21, "isEqualToString:", CFSTR("ApplicationActivationFirstFramePresentation"));
    objc_release(v21);
    if ( v22 )
    {
      -[XPCSignpostReader updateActivationsForProcess:withInterval:](
        self,
        "updateActivationsForProcess:withInterval:",
        v5,
        v4);
    }
    else
    {
      v23 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "beginEvent"));
      v24 = objc_retainAutoreleasedReturnValue(objc_msgSend(v23, "name"));
      v25 = (unsigned int)objc_msgSend(v24, "isEqualToString:", CFSTR("HangInterval"));
      objc_release(v24);
      objc_release(v23);
      if ( v25 )
      {
        -[XPCSignpostReader updateHangsForProcess:withInterval:](self, "updateHangsForProcess:withInterval:", v5, v4);
      }
      else
      {
        v26 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "subsystem"));
        v27 = (unsigned int)objc_msgSend(v26, "isEqualToString:", CFSTR("com.apple.metrickit.log"));
        objc_release(v26);
        if ( v27 )
          -[XPCSignpostReader updateMXSignpostsForProcess:withInterval:](
            self,
            "updateMXSignpostsForProcess:withInterval:",
            v5,
            v4);
      }
    }
  }
LABEL_20:
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}