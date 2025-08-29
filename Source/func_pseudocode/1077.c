-[DeviceSettingsPhotosViewController setupSourceExplanationStringWithOptionalOptimizeStorageExplanation:]
void __cdecl -[DeviceSettingsPhotosViewController setupSourceExplanationStringWithOptionalOptimizeStorageExplanation:](
        DeviceSettingsPhotosViewController *self,
        SEL a2,
        bool a3)
{
  _BOOL4 v3; // w22
  NSTextField *v5; // x20
  NSBundle *v6; // x21
  NSString *v7; // x23
  NSString *v8; // x28
  id v9; // x23
  NSString *v10; // x21
  _UNKNOWN **v11; // x26
  _UNKNOWN **v12; // x23
  NSBundle *v13; // x22
  NSString *v14; // x23
  NSString *v15; // x22
  id v16; // x24
  NSString *v17; // x23
  id v18; // x24
  NSString *v19; // x20
  NSString *v20; // x26
  NSString *v21; // x25
  void *v22; // x20
  NSLocale *v23; // x21
  __int64 v24; // x1
  void *v25; // x20
  NSLocale *v26; // x21
  __int64 v27; // x1
  NSCursor *v28; // x20
  NSColor *v29; // x21
  NSTextField *v30; // x24
  void *v31; // x26
  void *v32; // x0
  NSString *v33; // x0
  void *v34; // x20
  NSLocale *v35; // x22
  void *v36; // x0
  __int64 v37; // x1
  void *v38; // x20
  NSColor *v39; // x22
  NSTextField *v40; // x24
  _UNKNOWN **v41; // x25
  void *v42; // x26
  NSBundle *v43; // x20
  NSString *v44; // x22
  NSURL *v45; // x20
  NSColor *v46; // x24
  NSColor *v47; // x26
  _UNKNOWN **v48; // x21
  _UNKNOWN **v49; // x22
  void *v50; // x23
  NSTextField *v51; // x25
  void *v52; // x27
  NSURL *v53; // x24
  NSColor *v54; // x26
  NSColor *v55; // x23
  void *v56; // x25
  NSTextField *v57; // x27
  void *v58; // x28
  void *v59; // x20
  void *v60; // x24
  NSTextField *v61; // x23
  NSTextField *v62; // x23
  NSTextField *v63; // x23
  NSTextField *v64; // x19
  void *v65; // [xsp+10h] [xbp-1E0h]
  void *v66; // [xsp+18h] [xbp-1D8h]
  void *v67; // [xsp+20h] [xbp-1D0h]
  NSString *v68; // [xsp+28h] [xbp-1C8h]
  void *v69; // [xsp+30h] [xbp-1C0h]
  __int64 v70; // [xsp+38h] [xbp-1B8h]
  void *v71; // [xsp+40h] [xbp-1B0h]
  NSString *v72; // [xsp+48h] [xbp-1A8h]
  __int64 v73; // [xsp+50h] [xbp-1A0h]
  __int64 v74; // [xsp+58h] [xbp-198h]
  NSDictionary *v75; // [xsp+60h] [xbp-190h]
  NSString *v76; // [xsp+68h] [xbp-188h]
  _QWORD v77[6]; // [xsp+70h] [xbp-180h] BYREF
  _QWORD v78[6]; // [xsp+A0h] [xbp-150h] BYREF
  _QWORD v79[6]; // [xsp+D0h] [xbp-120h] BYREF
  _QWORD v80[6]; // [xsp+100h] [xbp-F0h] BYREF
  _QWORD v81[3]; // [xsp+130h] [xbp-C0h] BYREF
  _QWORD v82[3]; // [xsp+148h] [xbp-A8h] BYREF
  _QWORD v83[3]; // [xsp+160h] [xbp-90h] BYREF
  _QWORD v84[3]; // [xsp+178h] [xbp-78h] BYREF

  v3 = a3;
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController photoSourceExplanationTextField](self, "photoSourceExplanationTextField"));
  objc_release(v5);
  if ( v5 )
  {
    v6 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
    v7 = objc_retainAutoreleasedReturnValue(
           -[NSBundle localizedStringForKey:value:table:](
             v6,
             "localizedStringForKey:value:table:",
             CFSTR("Learn More…"),
             &stru_1000BA220,
             0LL));
    objc_release(v6);
    v8 = objc_retainAutoreleasedReturnValue(
           -[NSString stringByReplacingOccurrencesOfString:withString:](
             v7,
             "stringByReplacingOccurrencesOfString:withString:",
             CFSTR(" "),
             CFSTR(" ")));
    objc_release(v7);
    v9 = objc_retainAutoreleasedReturnValue(
           -[DeviceViewController deviceStringForStringParameterizedKey:](
             self,
             "deviceStringForStringParameterizedKey:",
             CFSTR("PhotoSource Explanation %@")));
    v10 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", v9, v8));
    objc_release(v9);
    v11 = &AMDCopyErrorText_ptr;
    v12 = &AMDCopyErrorText_ptr;
    if ( v3 )
    {
      v13 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
      v14 = objc_retainAutoreleasedReturnValue(
              -[NSBundle localizedStringForKey:value:table:](
                v13,
                "localizedStringForKey:value:table:",
                CFSTR("Update preferences…"),
                &stru_1000BA220,
                0LL));
      objc_release(v13);
      v15 = objc_retainAutoreleasedReturnValue(
              -[NSString stringByReplacingOccurrencesOfString:withString:](
                v14,
                "stringByReplacingOccurrencesOfString:withString:",
                CFSTR(" "),
                CFSTR(" ")));
      objc_release(v14);
      v16 = objc_retainAutoreleasedReturnValue(
              -[DeviceSettingsPhotosViewController optimizeStorageExplanationFormatString](
                self,
                "optimizeStorageExplanationFormatString"));
      v17 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", v16, &stru_1000BA220));
      objc_release(v16);
      v18 = objc_retainAutoreleasedReturnValue(
              -[DeviceSettingsPhotosViewController optimizeStorageExplanationFormatString](
                self,
                "optimizeStorageExplanationFormatString"));
      v19 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", v18, v15));
      v20 = objc_retainAutoreleasedReturnValue(-[NSString stringByAppendingString:](v19, "stringByAppendingString:", CFSTR("\n\n")));
      v21 = objc_retainAutoreleasedReturnValue(-[NSString stringByAppendingString:](v20, "stringByAppendingString:", v10));
      objc_release(v10);
      objc_release(v20);
      objc_release(v19);
      objc_release(v18);
      v22 = -[NSString length](v21, "length");
      v23 = objc_retainAutoreleasedReturnValue(+[NSLocale currentLocale](&OBJC_CLASS___NSLocale, "currentLocale"));
      v66 = -[NSString rangeOfString:options:range:locale:](
              v21,
              "rangeOfString:options:range:locale:",
              v17,
              0LL,
              0LL,
              v22,
              v23);
      v74 = v24;
      objc_release(v23);
      v25 = -[NSString length](v21, "length");
      v26 = objc_retainAutoreleasedReturnValue(+[NSLocale currentLocale](&OBJC_CLASS___NSLocale, "currentLocale"));
      v65 = -[NSString rangeOfString:options:range:locale:](
              v21,
              "rangeOfString:options:range:locale:",
              v15,
              0LL,
              0LL,
              v25,
              v26);
      v73 = v27;
      objc_release(v26);
      v83[0] = NSCursorAttributeName;
      v28 = objc_retainAutoreleasedReturnValue(+[NSCursor arrowCursor](&OBJC_CLASS___NSCursor, "arrowCursor"));
      v84[0] = v28;
      v83[1] = NSForegroundColorAttributeName;
      v29 = objc_retainAutoreleasedReturnValue(+[NSColor systemRedColor](&OBJC_CLASS___NSColor, "systemRedColor"));
      v84[1] = v29;
      v83[2] = NSFontAttributeName;
      v30 = objc_retainAutoreleasedReturnValue(
              -[DeviceSettingsPhotosViewController photoSourceExplanationTextField](
                self,
                "photoSourceExplanationTextField"));
      v31 = objc_retainAutoreleasedReturnValue(-[NSTextField font](v30, "font"));
      v84[2] = v31;
      v75 = objc_retainAutoreleasedReturnValue(
              +[NSDictionary dictionaryWithObjects:forKeys:count:](
                &OBJC_CLASS___NSDictionary,
                "dictionaryWithObjects:forKeys:count:",
                v84,
                v83,
                3LL));
      v32 = v31;
      v11 = &AMDCopyErrorText_ptr;
      objc_release(v32);
      objc_release(v30);
      objc_release(v29);
      objc_release(v28);
      v33 = v17;
      v12 = &AMDCopyErrorText_ptr;
      objc_release(v33);
      objc_release(v15);
      v10 = v21;
    }
    else
    {
      v74 = 0LL;
      v75 = 0LL;
      v65 = 0LL;
      v66 = 0LL;
      v73 = 0LL;
    }
    v68 = v10;
    v34 = -[NSString length](v10, "length");
    v35 = objc_retainAutoreleasedReturnValue(+[NSLocale currentLocale](&OBJC_CLASS___NSLocale, "currentLocale"));
    v76 = v8;
    v36 = -[NSString rangeOfString:options:range:locale:](
            v10,
            "rangeOfString:options:range:locale:",
            v8,
            0LL,
            0LL,
            v34,
            v35);
    v70 = v37;
    v71 = v36;
    objc_release(v35);
    v81[0] = NSCursorAttributeName;
    v38 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11[227], "arrowCursor"));
    v82[0] = v38;
    v81[1] = NSForegroundColorAttributeName;
    v39 = objc_retainAutoreleasedReturnValue(+[NSColor labelColor](&OBJC_CLASS___NSColor, "labelColor"));
    v82[1] = v39;
    v81[2] = NSFontAttributeName;
    v40 = objc_retainAutoreleasedReturnValue(
            -[DeviceSettingsPhotosViewController photoSourceExplanationTextField](
              self,
              "photoSourceExplanationTextField"));
    v41 = v11;
    v42 = objc_retainAutoreleasedReturnValue(-[NSTextField font](v40, "font"));
    v82[2] = v42;
    v69 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12[231], "dictionaryWithObjects:forKeys:count:", v82, v81, 3LL));
    objc_release(v42);
    objc_release(v40);
    objc_release(v39);
    objc_release(v38);
    v43 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
    v44 = objc_retainAutoreleasedReturnValue(
            -[NSBundle localizedStringForKey:value:table:](
              v43,
              "localizedStringForKey:value:table:",
              CFSTR("ImportCameraRollHelpKBLinkID"),
              &stru_1000BA220,
              0LL));
    objc_release(v43);
    v79[0] = NSLinkAttributeName;
    v72 = v44;
    v45 = objc_retainAutoreleasedReturnValue(+[NSURL URLWithString:](&OBJC_CLASS___NSURL, "URLWithString:", v44));
    v80[0] = v45;
    v79[1] = NSForegroundColorAttributeName;
    v46 = objc_retainAutoreleasedReturnValue(+[NSColor linkColor](&OBJC_CLASS___NSColor, "linkColor"));
    v80[1] = v46;
    v80[2] = &off_1000BEFE8;
    v79[2] = NSUnderlineStyleAttributeName;
    v79[3] = NSUnderlineColorAttributeName;
    v47 = objc_retainAutoreleasedReturnValue(+[NSColor clearColor](&OBJC_CLASS___NSColor, "clearColor"));
    v80[3] = v47;
    v79[4] = NSCursorAttributeName;
    v48 = v41;
    v49 = v12;
    v50 = objc_retainAutoreleasedReturnValue(objc_msgSend(v41[227], "pointingHandCursor"));
    v80[4] = v50;
    v79[5] = NSFontAttributeName;
    v51 = objc_retainAutoreleasedReturnValue(
            -[DeviceSettingsPhotosViewController photoSourceExplanationTextField](
              self,
              "photoSourceExplanationTextField"));
    v52 = objc_retainAutoreleasedReturnValue(-[NSTextField font](v51, "font"));
    v80[5] = v52;
    v67 = objc_retainAutoreleasedReturnValue(objc_msgSend(v49[231], "dictionaryWithObjects:forKeys:count:", v80, v79, 6LL));
    objc_release(v52);
    objc_release(v51);
    objc_release(v50);
    objc_release(v47);
    objc_release(v46);
    objc_release(v45);
    v77[0] = NSLinkAttributeName;
    v53 = objc_retainAutoreleasedReturnValue(+[NSURL URLWithString:](&OBJC_CLASS___NSURL, "URLWithString:", CFSTR("photos://preferences/icloud")));
    v78[0] = v53;
    v77[1] = NSForegroundColorAttributeName;
    v54 = objc_retainAutoreleasedReturnValue(+[NSColor linkColor](&OBJC_CLASS___NSColor, "linkColor"));
    v78[1] = v54;
    v78[2] = &off_1000BEFE8;
    v77[2] = NSUnderlineStyleAttributeName;
    v77[3] = NSUnderlineColorAttributeName;
    v55 = objc_retainAutoreleasedReturnValue(+[NSColor clearColor](&OBJC_CLASS___NSColor, "clearColor"));
    v78[3] = v55;
    v77[4] = NSCursorAttributeName;
    v56 = objc_retainAutoreleasedReturnValue(objc_msgSend(v48[227], "pointingHandCursor"));
    v78[4] = v56;
    v77[5] = NSFontAttributeName;
    v57 = objc_retainAutoreleasedReturnValue(
            -[DeviceSettingsPhotosViewController photoSourceExplanationTextField](
              self,
              "photoSourceExplanationTextField"));
    v58 = objc_retainAutoreleasedReturnValue(-[NSTextField font](v57, "font"));
    v78[5] = v58;
    v59 = objc_retainAutoreleasedReturnValue(objc_msgSend(v49[231], "dictionaryWithObjects:forKeys:count:", v78, v77, 6LL));
    objc_release(v58);
    objc_release(v57);
    objc_release(v56);
    objc_release(v55);
    objc_release(v54);
    objc_release(v53);
    v60 = objc_msgSend(
            objc_alloc((Class)&OBJC_CLASS___NSMutableAttributedString),
            "initWithString:attributes:",
            v68,
            v69);
    objc_msgSend(v60, "addAttributes:range:", v67, v71, v70);
    if ( v74 )
      objc_msgSend(v60, "addAttributes:range:", v75, v66);
    if ( v73 )
      objc_msgSend(v60, "addAttributes:range:", v59, v65);
    v61 = objc_retainAutoreleasedReturnValue(
            -[DeviceSettingsPhotosViewController photoSourceExplanationTextField](
              self,
              "photoSourceExplanationTextField"));
    -[NSTextField setSelectable:](v61, "setSelectable:", 1LL);
    objc_release(v61);
    v62 = objc_retainAutoreleasedReturnValue(
            -[DeviceSettingsPhotosViewController photoSourceExplanationTextField](
              self,
              "photoSourceExplanationTextField"));
    -[NSTextField setAllowsEditingTextAttributes:](v62, "setAllowsEditingTextAttributes:", 1LL);
    objc_release(v62);
    v63 = objc_retainAutoreleasedReturnValue(
            -[DeviceSettingsPhotosViewController photoSourceExplanationTextField](
              self,
              "photoSourceExplanationTextField"));
    -[NSTextField setAttributedStringValue:](v63, "setAttributedStringValue:", v60);
    objc_release(v63);
    v64 = objc_retainAutoreleasedReturnValue(
            -[DeviceSettingsPhotosViewController photoSourceExplanationTextField](
              self,
              "photoSourceExplanationTextField"));
    -[NSTextField setEnabled:](v64, "setEnabled:", 1LL);
    objc_release(v64);
    objc_release(v60);
    objc_release(v59);
    objc_release(v67);
    objc_release(v72);
    objc_release(v69);
    objc_release(v75);
    objc_release(v68);
    objc_release(v76);
  }
}