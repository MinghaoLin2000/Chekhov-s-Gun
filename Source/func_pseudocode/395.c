+[DeviceUIServiceViewController askUserWithParameters:window:deviceImage:withReply:]
void __cdecl +[DeviceUIServiceViewController askUserWithParameters:window:deviceImage:withReply:](
        id a1,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6)
{
  id v9; // x19
  id v10; // x23
  id v11; // x25
  void *v12; // x20
  void *v13; // x24
  void *v14; // x26
  void *v15; // x27
  void *v16; // x28
  void *v17; // x20
  void *v18; // x22
  void *v19; // x20
  unsigned __int8 v20; // w21
  void *v21; // x21
  void *v22; // x20
  AskUserAlert *v23; // x21
  void *v24; // x20
  void *v25; // x20
  void *v26; // x20
  void *v27; // x20
  id v28; // x0
  void *v29; // x20
  id v30; // x23
  double v31; // d8
  NSTimer *v32; // x20
  void *v33; // x20
  void *v34; // x24
  bool v35; // w8
  NSTimer *v36; // x20
  id v37; // [xsp+0h] [xbp-160h]
  id v38; // [xsp+8h] [xbp-158h]
  void *context; // [xsp+10h] [xbp-150h]
  void *contexta; // [xsp+10h] [xbp-150h]
  id v41; // [xsp+18h] [xbp-148h]
  unsigned __int8 v42; // [xsp+24h] [xbp-13Ch]
  id v43; // [xsp+28h] [xbp-138h]
  id v44; // [xsp+30h] [xbp-130h]
  id v45; // [xsp+38h] [xbp-128h]
  id v46; // [xsp+40h] [xbp-120h]
  _QWORD v47[4]; // [xsp+48h] [xbp-118h] BYREF
  id v48; // [xsp+68h] [xbp-F8h]
  id v49; // [xsp+70h] [xbp-F0h]
  id v50; // [xsp+78h] [xbp-E8h]
  id v51; // [xsp+80h] [xbp-E0h]
  id v52; // [xsp+88h] [xbp-D8h]
  __int64 *v53; // [xsp+90h] [xbp-D0h]
  unsigned __int8 v54; // [xsp+98h] [xbp-C8h]
  _QWORD v55[4]; // [xsp+A0h] [xbp-C0h] BYREF
  id v56; // [xsp+C0h] [xbp-A0h]
  id v57; // [xsp+C8h] [xbp-98h] BYREF
  id location; // [xsp+D0h] [xbp-90h] BYREF
  __int64 v59; // [xsp+D8h] [xbp-88h] BYREF
  __int64 *v60; // [xsp+E0h] [xbp-80h]
  __int64 v61; // [xsp+E8h] [xbp-78h]
  unsigned __int8 v62; // [xsp+F0h] [xbp-70h]

  v9 = objc_retain(a3);
  v10 = objc_retain(a4);
  v11 = objc_retain(a5);
  v44 = objc_retain(a6);
  v12 = objc_autoreleasePoolPush();
  v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "objectForKeyedSubscript:", AMPDeviceAskUserMessageKey));
  v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "objectForKeyedSubscript:", AMPDeviceAskUserExplanationKey));
  v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "objectForKeyedSubscript:", AMPDeviceAskUserOKButtonTitleKey));
  v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "objectForKeyedSubscript:", AMPDeviceAskUserCancelButtonTitleKey));
  v46 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "objectForKeyedSubscript:", AMPDeviceAskUserOtherButtonTitleKey));
  v43 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "objectForKeyedSubscript:", AMPDeviceAskUserOtherButtonURLKey));
  context = v12;
  if ( v43 )
  {
    v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "objectForKeyedSubscript:", AMPDeviceAskUserOtherButtonShouldDismissKey));
    v42 = (unsigned __int8)objc_msgSend(v17, "boolValue");
    objc_release(v17);
  }
  else
  {
    v42 = 1;
  }
  v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "objectForKeyedSubscript:", AMPDeviceAskUserCheckboxTitleKey));
  v59 = 0LL;
  v60 = &v59;
  v61 = 0x2020000000LL;
  v62 = 0;
  v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "objectForKeyedSubscript:", AMPDeviceAskUserCheckboxValueKey));
  v20 = (unsigned __int8)objc_msgSend(v19, "boolValue");
  objc_release(v19);
  v62 = v20;
  v45 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "objectForKeyedSubscript:", AMPDeviceAskUserTimeoutSecondsKey));
  v41 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "objectForKeyedSubscript:", AMPDeviceAskUserTimeoutDismissButtonKey));
  v21 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "objectForKeyedSubscript:", AMPDeviceAskUserAlertStyleKey));
  v22 = objc_msgSend(v21, "unsignedIntegerValue");
  objc_release(v21);
  v23 = objc_alloc_init(&OBJC_CLASS___AskUserAlert);
  -[AskUserAlert setAlertStyle:](v23, "setAlertStyle:", v22);
  -[AskUserAlert setIcon:](v23, "setIcon:", v11);
  if ( objc_msgSend(v13, "length") )
    -[AskUserAlert setMessageText:](v23, "setMessageText:", v13);
  if ( objc_msgSend(v14, "length") )
    -[AskUserAlert setInformativeText:](v23, "setInformativeText:", v14);
  if ( objc_msgSend(v15, "length") )
  {
    v24 = objc_retainAutoreleasedReturnValue(-[AskUserAlert addButtonWithTitle:](v23, "addButtonWithTitle:", v15));
    objc_msgSend(v24, "setTag:", 1000LL);
    objc_release(v24);
  }
  if ( objc_msgSend(v16, "length") )
  {
    v25 = objc_retainAutoreleasedReturnValue(-[AskUserAlert addButtonWithTitle:](v23, "addButtonWithTitle:", v16));
    objc_msgSend(v25, "setTag:", 1001LL);
    objc_release(v25);
  }
  if ( objc_msgSend(v46, "length") )
  {
    v26 = objc_retainAutoreleasedReturnValue(-[AskUserAlert addButtonWithTitle:](v23, "addButtonWithTitle:", v46));
    objc_msgSend(v26, "setTag:", 1002LL);
    objc_release(v26);
  }
  if ( objc_msgSend(v18, "length") )
  {
    v27 = objc_msgSend(
            objc_alloc((Class)&OBJC_CLASS___NSButton),
            "initWithFrame:",
            NSZeroRect.origin.x,
            NSZeroRect.origin.y,
            NSZeroRect.size.width,
            NSZeroRect.size.height);
    objc_msgSend(v27, "setButtonType:", 3LL);
    objc_msgSend(v27, "setTitle:", v18);
    objc_msgSend(v27, "setState:", *((unsigned __int8 *)v60 + 24));
    objc_msgSend(v27, "sizeToFit");
    -[AskUserAlert setAccessoryView:](v23, "setAccessoryView:", v27);
    objc_release(v27);
  }
  if ( (v42 & 1) == 0 )
  {
    v28 = objc_retainAutoreleasedReturnValue(-[AskUserAlert buttonWithTitle:](v23, "buttonWithTitle:", v46));
    v29 = v28;
    if ( v28 )
    {
      objc_msgSend(v28, "setTarget:", v23);
      objc_msgSend(v29, "setAction:", "handleAskUserOtherButton:");
      -[AskUserAlert setOtherURLString:](v23, "setOtherURLString:", v43);
    }
    objc_release(v29);
  }
  v30 = objc_retain(v10);
  if ( v30 )
  {
    if ( (int)objc_msgSend(v45, "intValue", v14, v13, context) < 1 )
    {
      v32 = 0LL;
    }
    else
    {
      objc_initWeak(&location, v23);
      v31 = (double)(int)objc_msgSend(v45, "intValue");
      v55[0] = _NSConcreteStackBlock;
      v55[1] = 3254779904LL;
      v55[2] = sub_100003ECC;
      v55[3] = &unk_1000B8A58;
      objc_copyWeak(&v57, &location);
      v56 = objc_retain(v41);
      v32 = objc_retainAutoreleasedReturnValue(
              +[NSTimer scheduledTimerWithTimeInterval:repeats:block:](
                &OBJC_CLASS___NSTimer,
                "scheduledTimerWithTimeInterval:repeats:block:",
                0LL,
                v55,
                v31));
      objc_release(v56);
      objc_destroyWeak(&v57);
      objc_destroyWeak(&location);
    }
    v47[0] = _NSConcreteStackBlock;
    v47[1] = 3254779904LL;
    v47[2] = sub_100003FA0;
    v47[3] = &unk_1000B8A88;
    v36 = objc_retain(v32);
    v48 = v36;
    v49 = objc_retain(v18);
    v50 = objc_retain(v23);
    v53 = &v59;
    v54 = v42;
    v51 = objc_retain(v43);
    v52 = objc_retain(v44);
    objc_msgSend(v50, "beginSheetModalForWindow:completionHandler:", v30, v47);
    objc_release(v52);
    objc_release(v51);
    objc_release(v50);
    objc_release(v49);
    objc_release(v48);
    objc_release(v36);
  }
  else
  {
    v33 = -[AskUserAlert runModal](v23, "runModal", v14, v13, context);
    if ( objc_msgSend(v18, "length") )
    {
      v34 = objc_retainAutoreleasedReturnValue(-[AskUserAlert accessoryView](v23, "accessoryView"));
      v35 = objc_msgSend(v34, "state") == (void *)1;
      *((_BYTE *)v60 + 24) = v35;
      objc_release(v34);
    }
    (*((void (__fastcall **)(id, void *, _QWORD))v44 + 2))(v44, v33, *((unsigned __int8 *)v60 + 24));
  }
  objc_release(v30);
  objc_release(v23);
  objc_release(v41);
  objc_release(v45);
  _Block_object_dispose(&v59, 8);
  objc_release(v18);
  objc_release(v43);
  objc_release(v46);
  objc_release(v16);
  objc_release(v15);
  objc_release(v37);
  objc_release(v38);
  objc_autoreleasePoolPop(contexta);
  objc_release(v44);
  objc_release(v11);
  objc_release(v30);
  objc_release(v9);
}