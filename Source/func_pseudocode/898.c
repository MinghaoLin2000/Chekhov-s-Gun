-[AMPCapacityBarView drawRect:]
void __cdecl -[AMPCapacityBarView drawRect:](AMPCapacityBarView *self, SEL a2, CGRect a3)
{
  void *v4; // x20
  void *v5; // x21
  void *v6; // x28
  id v7; // x21
  void *v8; // x0
  void *v9; // x20
  unsigned __int64 v10; // x19
  __int64 v11; // x22
  void *i; // x23
  unsigned __int64 capacity; // x24
  double width; // d8
  NSBezierPath *v15; // x20
  NSFont *v16; // x20
  void **v17; // x25
  NSColor *v18; // x23
  NSDictionary *v19; // x19
  double v20; // d1
  NSColor *v21; // x19
  NSColor *v22; // x0
  NSColor *v23; // x26
  double v24; // d10
  double v25; // d15
  double v26; // d8
  double v27; // d12
  double v28; // d9
  void *j; // x24
  void *v30; // x21
  NSColor *v31; // x20
  double v32; // d0
  double v33; // d11
  double v35; // d13
  double v36; // d10
  double v37; // d14
  NSBezierPath *v38; // x23
  NSColor *v39; // x19
  void *v40; // x0
  void *v41; // x23
  double v42; // d0
  void **v43; // x19
  NSColor *v44; // x0
  NSColor *v45; // x27
  void *v46; // x25
  void *v47; // x23
  NSColor *v48; // x22
  double v49; // d0
  double v50; // d9
  NSColor *v51; // x20
  char v52; // w8
  double v53; // d9
  double v54; // d0
  void *v55; // x20
  double v56; // d0
  double v57; // d9
  double v58; // d1
  double v59; // d15
  void *v60; // x0
  double v61; // d8
  double v62; // d10
  void *v63; // x20
  double v64; // d1
  void *v65; // x0
  id v66; // x20
  void *v67; // x20
  id v68; // x21
  id v69; // x23
  double v70; // d2
  double v71; // d8
  double v72; // d0
  double v73; // d1
  double v74; // d9
  double v75; // d12
  NSMutableDictionary *v76; // x21
  id v77; // x20
  id v78; // x23
  id v79; // x23
  void *v80; // x23
  void *v81; // x23
  id v82; // x24
  __int64 v83; // [xsp+0h] [xbp-350h]
  double height; // [xsp+8h] [xbp-348h]
  double y; // [xsp+10h] [xbp-340h]
  double v86; // [xsp+40h] [xbp-310h]
  double x; // [xsp+48h] [xbp-308h]
  NSMutableArray *v88; // [xsp+50h] [xbp-300h]
  AMPCapacityBarView *v89; // [xsp+58h] [xbp-2F8h]
  id v90; // [xsp+60h] [xbp-2F0h]
  NSDictionary *v91; // [xsp+68h] [xbp-2E8h]
  id obj; // [xsp+70h] [xbp-2E0h]
  double v93; // [xsp+78h] [xbp-2D8h]
  double v94; // [xsp+80h] [xbp-2D0h]
  double v95; // [xsp+88h] [xbp-2C8h]
  NSBezierPath *v96; // [xsp+90h] [xbp-2C0h]
  unsigned int v97; // [xsp+9Ch] [xbp-2B4h]
  __int64 v98; // [xsp+A0h] [xbp-2B0h]
  void *v99; // [xsp+A8h] [xbp-2A8h]
  unsigned __int64 v100; // [xsp+B0h] [xbp-2A0h]
  NSColor *v101; // [xsp+C0h] [xbp-290h]
  _QWORD block[5]; // [xsp+C8h] [xbp-288h] BYREF
  id v103; // [xsp+F0h] [xbp-260h]
  id v104; // [xsp+F8h] [xbp-258h]
  __int128 v105; // [xsp+100h] [xbp-250h] BYREF
  __int128 v106; // [xsp+110h] [xbp-240h]
  __int128 v107; // [xsp+120h] [xbp-230h]
  __int128 v108; // [xsp+130h] [xbp-220h]
  __int128 v109; // [xsp+140h] [xbp-210h] BYREF
  __int128 v110; // [xsp+150h] [xbp-200h]
  __int128 v111; // [xsp+160h] [xbp-1F0h]
  __int128 v112; // [xsp+170h] [xbp-1E0h]
  _BYTE v113[128]; // [xsp+188h] [xbp-1C8h] BYREF
  _QWORD v114[2]; // [xsp+208h] [xbp-148h] BYREF
  _QWORD v115[2]; // [xsp+218h] [xbp-138h] BYREF
  _BYTE v116[128]; // [xsp+228h] [xbp-128h] BYREF
  NSRect v117; // 0:d0.8,8:d1.8,16:d2.8,24:d3.8
  NSRect v118; // 0:d0.8,8:d1.8,16:d2.8,24:d3.8
  NSRect v119; // 0:d0.8,8:d1.8,16:d2.8,24:d3.8
  NSRect v120; // 0:d0.8,8:d1.8,16:d2.8,24:d3.8
  NSRect v121; // 0:d0.8,8:d1.8,16:d2.8,24:d3.8
  NSRect v122; // 0:d0.8,8:d1.8,16:d2.8,24:d3.8
  NSRect v123; // 0:d0.8,8:d1.8,16:d2.8,24:d3.8
  NSRect v124; // 0:d0.8,8:d1.8,16:d2.8,24:d3.8
  NSRect v125; // 0:d0.8,8:d1.8,16:d2.8,24:d3.8
  NSRect v126; // 0:d0.8,8:d1.8,16:d2.8,24:d3.8

  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(NSApp, "effectiveAppearance", a3.origin.x, a3.origin.y, a3.size.width, a3.size.height));
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "name"));
  v97 = (unsigned int)objc_msgSend(v5, "isEqualToString:", NSAppearanceNameAqua);
  objc_release(v5);
  objc_release(v4);
  v6 = objc_msgSend(NSApp, "userInterfaceLayoutDirection");
  v7 = objc_retainAutoreleasedReturnValue(-[AMPCapacityBarView coalescedCategories](self, "coalescedCategories"));
  v109 = 0u;
  v110 = 0u;
  v111 = 0u;
  v112 = 0u;
  v8 = objc_msgSend(v7, "countByEnumeratingWithState:objects:count:", &v109, v116, 16LL);
  if ( v8 )
  {
    v9 = v8;
    v10 = 0LL;
    v11 = *(_QWORD *)v110;
    do
    {
      for ( i = 0LL; i != v9; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v110 != v11 )
          objc_enumerationMutation(v7);
        v10 += (unsigned __int64)objc_msgSend(*(id *)(*((_QWORD *)&v109 + 1) + 8LL * (_QWORD)i), "value");
      }
      v9 = objc_msgSend(v7, "countByEnumeratingWithState:objects:count:", &v109, v116, 16LL);
    }
    while ( v9 );
  }
  else
  {
    v10 = 0LL;
  }
  if ( self->_capacity <= v10 )
    capacity = v10;
  else
    capacity = self->_capacity;
  +[NSGraphicsContext saveGraphicsState](&OBJC_CLASS___NSGraphicsContext, "saveGraphicsState", 200LL);
  -[AMPCapacityBarView bounds](self, "bounds");
  v118 = NSInsetRect(v117, 0.5, 0.5);
  width = v118.size.width;
  x = v118.origin.x;
  height = v118.size.height;
  y = v118.origin.y;
  v96 = objc_retainAutoreleasedReturnValue(
          +[NSBezierPath bezierPathWithRoundedRect:xRadius:yRadius:](
            &OBJC_CLASS___NSBezierPath,
            "bezierPathWithRoundedRect:xRadius:yRadius:"));
  -[NSBezierPath setLineWidth:](v96, "setLineWidth:", 0.5);
  -[AMPCapacityBarView bounds](self, "bounds");
  v15 = objc_retainAutoreleasedReturnValue(
          +[NSBezierPath bezierPathWithRoundedRect:xRadius:yRadius:](
            &OBJC_CLASS___NSBezierPath,
            "bezierPathWithRoundedRect:xRadius:yRadius:"));
  -[NSBezierPath addClip](v15, "addClip");
  objc_release(v15);
  v114[0] = NSFontAttributeName;
  +[NSFont smallSystemFontSize](&OBJC_CLASS___NSFont, "smallSystemFontSize");
  v16 = objc_retainAutoreleasedReturnValue(+[NSFont systemFontOfSize:](&OBJC_CLASS___NSFont, "systemFontOfSize:"));
  v115[0] = v16;
  v114[1] = NSForegroundColorAttributeName;
  v17 = (void **)&AMDCopyErrorText_ptr;
  v18 = objc_retainAutoreleasedReturnValue(+[NSColor whiteColor](&OBJC_CLASS___NSColor, "whiteColor"));
  v115[1] = v18;
  v19 = objc_retainAutoreleasedReturnValue(
          +[NSDictionary dictionaryWithObjects:forKeys:count:](
            &OBJC_CLASS___NSDictionary,
            "dictionaryWithObjects:forKeys:count:",
            v115,
            v114,
            2LL));
  objc_release(v18);
  objc_release(v16);
  v91 = v19;
  objc_msgSend(CFSTR("Yy"), "sizeWithAttributes:", v19);
  v86 = v20;
  v88 = objc_retainAutoreleasedReturnValue(
          +[NSMutableArray arrayWithCapacity:](
            &OBJC_CLASS___NSMutableArray,
            "arrayWithCapacity:",
            (char *)objc_msgSend(v7, "count") + 1));
  v90 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  if ( (v97 & 1) != 0 )
  {
    v21 = objc_retainAutoreleasedReturnValue(
            +[NSColor colorWithCalibratedWhite:alpha:](
              &OBJC_CLASS___NSColor,
              "colorWithCalibratedWhite:alpha:",
              0.6,
              1.0));
    v22 = objc_retainAutoreleasedReturnValue(+[NSColor whiteColor](&OBJC_CLASS___NSColor, "whiteColor"));
  }
  else
  {
    v21 = objc_retainAutoreleasedReturnValue(+[NSColor grayColor](&OBJC_CLASS___NSColor, "grayColor"));
    v22 = objc_retainAutoreleasedReturnValue(+[NSColor colorWithWhite:alpha:](&OBJC_CLASS___NSColor, "colorWithWhite:alpha:", 1.0, 0.1));
  }
  v23 = v22;
  v24 = width + -1.0;
  -[NSColor setFill](v22, "setFill");
  -[NSColor setStroke](v21, "setStroke");
  -[NSBezierPath fill](v96, "fill");
  -[NSBezierPath stroke](v96, "stroke");
  v25 = 1.0;
  -[NSBezierPath setLineWidth:](v96, "setLineWidth:", 1.0);
  v107 = 0u;
  v108 = 0u;
  v105 = 0u;
  v106 = 0u;
  obj = objc_retain(v7);
  v99 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v105, v113, 16LL);
  if ( v99 )
  {
    v100 = 0LL;
    v98 = *(_QWORD *)v106;
    v93 = x + width;
    v94 = (double)capacity;
    v26 = x;
    v27 = y + -0.5;
    v28 = 0.0;
    v95 = v24;
    v89 = self;
    do
    {
      for ( j = 0LL; j != v99; j = (char *)j + 1 )
      {
        if ( *(_QWORD *)v106 != v98 )
          objc_enumerationMutation(obj);
        v30 = *(void **)(*((_QWORD *)&v105 + 1) + 8LL * (_QWORD)j);
        if ( objc_msgSend(v30, "value") )
        {
          v31 = objc_retain(v21);
          v100 += (unsigned __int64)objc_msgSend(v30, "value");
          v32 = floor(v24 * ((double)v100 / v94));
          if ( v32 - v28 == 0.0 )
            v33 = v25;
          else
            v33 = v32 - v28;
          if ( v32 - v28 != 0.0 || v32 <= 0.0 )
            v35 = v32;
          else
            v35 = v32 + -1.0;
          v36 = v26 + v28;
          if ( v6 == (void *)1 )
            v37 = v93 - v28 - v33;
          else
            v37 = v26 + v28;
          +[NSGraphicsContext saveGraphicsState](&OBJC_CLASS___NSGraphicsContext, "saveGraphicsState");
          v119.origin.x = v37;
          v119.origin.y = y + -0.5;
          v119.size.width = v33;
          v119.size.height = height + 1.0;
          v120 = NSInsetRect(v119, -0.5, -0.5);
          v38 = objc_retainAutoreleasedReturnValue(
                  +[NSBezierPath bezierPathWithRect:](
                    &OBJC_CLASS___NSBezierPath,
                    "bezierPathWithRect:",
                    v120.origin.x,
                    v120.origin.y,
                    v120.size.width,
                    v120.size.height));
          -[NSBezierPath addClip](v38, "addClip");
          objc_release(v38);
          v101 = v31;
          if ( (unsigned int)objc_msgSend(v30, "isCrosshatched") )
          {
            v39 = v23;
            v40 = v17[226];
            if ( v97 )
            {
              v23 = objc_retainAutoreleasedReturnValue(objc_msgSend(v40, "colorWithCalibratedWhite:alpha:", 0.85, 1.0));
              objc_release(v39);
              v41 = objc_retainAutoreleasedReturnValue(objc_msgSend(v17[226], "blackColor"));
              v42 = 0.25;
            }
            else
            {
              v23 = objc_retainAutoreleasedReturnValue(objc_msgSend(v40, "grayColor"));
              objc_release(v39);
              v41 = objc_retainAutoreleasedReturnValue(objc_msgSend(v17[226], "whiteColor"));
              v42 = 0.1;
            }
            v21 = objc_retainAutoreleasedReturnValue(-[NSColor blendedColorWithFraction:ofColor:](v23, "blendedColorWithFraction:ofColor:", v41, v42));
            objc_release(v31);
            objc_release(v41);
            v121.origin.x = v37;
            v121.origin.y = y + -0.5;
            v121.size.width = v33;
            v121.size.height = height + 1.0;
            v122 = NSInsetRect(v121, 0.0, 0.5);
            -[AMPCapacityBarView crosshatchRect:withColor:](
              self,
              "crosshatchRect:withColor:",
              v23,
              v122.origin.x,
              v122.origin.y,
              v122.size.width,
              v122.size.height);
            -[NSColor setStroke](v21, "setStroke");
            -[NSBezierPath stroke](v96, "stroke");
            +[NSGraphicsContext restoreGraphicsState](&OBJC_CLASS___NSGraphicsContext, "restoreGraphicsState");
            if ( v28 > 0.0 )
            {
              v49 = -0.0;
              if ( v6 == (void *)1 )
                v49 = v33;
              v50 = v49 + v37;
              -[NSColor setStroke](v31, "setStroke");
              +[NSBezierPath strokeLineFromPoint:toPoint:](
                &OBJC_CLASS___NSBezierPath,
                "strokeLineFromPoint:toPoint:",
                v50,
                v27,
                v50,
                y + height + 0.5);
            }
          }
          else
          {
            v43 = v17;
            v44 = objc_retainAutoreleasedReturnValue(objc_msgSend(v30, "color"));
            v45 = v44;
            if ( v97 )
            {
              objc_release(v23);
              v46 = objc_retainAutoreleasedReturnValue(objc_msgSend(v30, "color"));
              v47 = objc_retainAutoreleasedReturnValue(objc_msgSend(v43[226], "blackColor"));
              v48 = objc_retainAutoreleasedReturnValue(objc_msgSend(v46, "blendedColorWithFraction:ofColor:", v47, 0.25));
              v23 = v45;
            }
            else
            {
              v51 = objc_retainAutoreleasedReturnValue(-[NSColor colorWithAlphaComponent:](v44, "colorWithAlphaComponent:", 0.5));
              objc_release(v23);
              objc_release(v45);
              v46 = objc_retainAutoreleasedReturnValue(objc_msgSend(v30, "color"));
              v47 = objc_retainAutoreleasedReturnValue(objc_msgSend(v43[226], "whiteColor"));
              v48 = objc_retainAutoreleasedReturnValue(objc_msgSend(v46, "blendedColorWithFraction:ofColor:", v47, 0.1));
              v23 = v51;
              v31 = v101;
            }
            objc_release(v31);
            objc_release(v47);
            objc_release(v46);
            -[NSColor setFill](v23, "setFill");
            -[NSBezierPath fill](v96, "fill");
            -[NSColor setStroke](v48, "setStroke");
            -[NSBezierPath stroke](v96, "stroke");
            if ( v28 <= 0.0 )
              v52 = 1;
            else
              v52 = v97;
            self = v89;
            if ( (v52 & 1) == 0 )
            {
              if ( v6 == (void *)1 )
                v53 = v33 + v37 + -0.5;
              else
                v53 = v36 + 0.5;
              -[NSColor setStroke](v48, "setStroke");
              +[NSBezierPath strokeLineFromPoint:toPoint:](
                &OBJC_CLASS___NSBezierPath,
                "strokeLineFromPoint:toPoint:",
                v53,
                y + 0.5,
                v53,
                y + height + -0.5);
            }
            +[NSGraphicsContext restoreGraphicsState](&OBJC_CLASS___NSGraphicsContext, "restoreGraphicsState");
            v17 = v43;
            v21 = v48;
            v31 = v101;
          }
          if ( ((unsigned int)objc_msgSend(v30, "hideLabel") & 1) == 0 )
          {
            v55 = objc_retainAutoreleasedReturnValue(objc_msgSend(v30, "name"));
            objc_msgSend(v55, "sizeWithAttributes:", v91);
            v57 = v56;
            v59 = v58;
            v60 = v55;
            v31 = v101;
            objc_release(v60);
            v54 = v33 - v57;
            if ( v33 - v57 > 9.0 )
            {
              v61 = round(y + -0.5 + (height + 1.0 - v86) * 0.5 + v86 - v59);
              if ( v6 == (void *)1 )
                v62 = v33 + v37 - v57 + -5.0;
              else
                v62 = v36 + 5.0;
              v63 = objc_retainAutoreleasedReturnValue(objc_msgSend(v30, "name"));
              v64 = v61;
              v26 = x;
              objc_msgSend(v63, "drawInRect:withAttributes:", v91, v62, v64, v57, v59);
              v65 = v63;
              v31 = v101;
              objc_release(v65);
            }
          }
          v24 = v95;
          v25 = 1.0;
          if ( !-[AMPCapacityBarView isOverlay](self, "isOverlay", v54) )
          {
            if ( ((unsigned int)objc_msgSend(v30, "hidePopover") & 1) == 0 )
            {
              v123.origin.x = v37;
              v123.origin.y = y + -0.5;
              v123.size.width = v33;
              v123.size.height = height + 1.0;
              v124 = NSInsetRect(v123, 1.0, 1.0);
              v66 = objc_retainAutoreleasedReturnValue(
                      -[AMPCapacityBarView trackingRect:forCategory:](
                        self,
                        "trackingRect:forCategory:",
                        v30,
                        v124.origin.x,
                        v124.origin.y,
                        v124.size.width,
                        v124.size.height));
              -[NSMutableArray addObject:](v88, "addObject:", v66);
              objc_release(v66);
            }
            v67 = objc_retainAutoreleasedReturnValue(objc_msgSend(v30, "name"));
            v68 = objc_retainAutoreleasedReturnValue((id)NSLocalizedFileSizeDescription(
                                                           objc_msgSend(v30, "value"),
                                                           0LL,
                                                           0LL));
            v69 = objc_retainAutoreleasedReturnValue(
                    -[AMPCapacityBarView elementForRect:withName:withValueDescription:](
                      self,
                      "elementForRect:withName:withValueDescription:",
                      v67,
                      v68,
                      v37,
                      v27,
                      v33,
                      height + 1.0));
            objc_release(v68);
            objc_release(v67);
            objc_msgSend(v90, "addObject:", v69);
            objc_release(v69);
            v31 = v101;
          }
          objc_release(v31);
          v28 = v35;
        }
      }
      v99 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v105, v113, 16LL);
    }
    while ( v99 );
  }
  else
  {
    v28 = 0.0;
    v26 = x;
  }
  objc_release(obj);
  if ( v24 > v28 )
  {
    v70 = v26;
    v71 = v24 - v28;
    v72 = -0.0;
    if ( v6 == (void *)1 )
      v73 = v24 - v28;
    else
      v73 = -0.0;
    if ( v6 != (void *)1 )
      v72 = v28;
    v74 = v70 + v72;
    v75 = v70 + v72 + v73;
    -[NSColor setStroke](v21, "setStroke");
    +[NSBezierPath strokeLineFromPoint:toPoint:](
      &OBJC_CLASS___NSBezierPath,
      "strokeLineFromPoint:toPoint:",
      v75,
      y + 0.5,
      v75,
      y + height + -0.5);
    if ( !-[AMPCapacityBarView isOverlay](self, "isOverlay") )
    {
      v76 = objc_retainAutoreleasedReturnValue(
              +[NSMutableDictionary dictionaryWithCapacity:](
                &OBJC_CLASS___NSMutableDictionary,
                "dictionaryWithCapacity:",
                4LL));
      v77 = objc_retainAutoreleasedReturnValue((id)sub_1000184E4(CFSTR("DISK_FREE")));
      -[NSMutableDictionary setObject:forKeyedSubscript:](v76, "setObject:forKeyedSubscript:", v77, CFSTR("NAME"));
      v78 = objc_retainAutoreleasedReturnValue((id)NSLocalizedFileSizeDescription(
                                                     *(char **)((char *)&self->super.super.super.isa + v83)
                                                   - self->_bytesUsed
                                                   - self->_otherData,
                                                     0LL,
                                                     0LL));
      -[NSMutableDictionary setObject:forKeyedSubscript:](v76, "setObject:forKeyedSubscript:", v78, CFSTR("SIZE"));
      objc_release(v78);
      v79 = objc_alloc((Class)&OBJC_CLASS___NSTrackingArea);
      v125.origin.x = v74;
      v125.origin.y = y;
      v125.size.width = v71;
      v125.size.height = height;
      v126 = NSInsetRect(v125, 1.0, 1.0);
      v80 = objc_msgSend(
              v79,
              "initWithRect:options:owner:userInfo:",
              321LL,
              self,
              v76,
              v126.origin.x,
              v126.origin.y,
              v126.size.width,
              v126.size.height);
      -[NSMutableArray addObject:](v88, "addObject:", v80);
      objc_release(v80);
      v81 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v76, "objectForKeyedSubscript:", CFSTR("SIZE")));
      v82 = objc_retainAutoreleasedReturnValue(
              -[AMPCapacityBarView elementForRect:withName:withValueDescription:](
                self,
                "elementForRect:withName:withValueDescription:",
                v77,
                v81,
                v74,
                y,
                v71,
                height));
      objc_release(v81);
      objc_msgSend(v90, "addObject:", v82);
      objc_release(v82);
      objc_release(v77);
      objc_release(v76);
    }
  }
  +[NSGraphicsContext restoreGraphicsState](&OBJC_CLASS___NSGraphicsContext, "restoreGraphicsState");
  -[AMPCapacityBarView setDisplayCategories:](self, "setDisplayCategories:", obj);
  if ( !-[AMPCapacityBarView isOverlay](self, "isOverlay") )
  {
    block[0] = _NSConcreteStackBlock;
    block[1] = 3254779904LL;
    block[2] = sub_100019DF4;
    block[3] = &unk_1000B90B0;
    block[4] = self;
    v103 = objc_retain(v90);
    v104 = objc_retain(v88);
    dispatch_async(&_dispatch_main_q, block);
    objc_release(v104);
    objc_release(v103);
  }
  objc_release(v23);
  objc_release(v21);
  objc_release(v90);
  objc_release(v88);
  objc_release(v91);
  objc_release(v96);
  objc_release(obj);
}