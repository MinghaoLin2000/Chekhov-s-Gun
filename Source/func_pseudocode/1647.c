-[DeviceFinderTabContainerViewController setupTabView]
void __cdecl -[DeviceFinderTabContainerViewController setupTabView](
        DeviceFinderTabContainerViewController *self,
        SEL a2)
{
  void *v3; // x20
  void *v4; // x20
  id v5; // x21
  void *v6; // x0
  void *v7; // x22
  __int64 v8; // x19
  void *i; // x25
  __int64 v10; // x23
  id v11; // x24
  id v12; // x23
  void *j; // x19
  void *v14; // x26
  DeviceFinderTabContainerViewController *v15; // x21
  NSMutableDictionary *v16; // x20
  DeviceScrollView *v17; // x25
  void *v18; // x27
  NSBundle *v19; // x20
  NSString *v20; // x23
  FlippedView *v21; // x20
  void *v22; // x20
  void *v23; // x20
  void *v24; // x22
  void *v25; // x21
  void *v26; // x23
  void *v27; // x28
  void *v28; // x20
  void *v29; // x21
  void *v30; // x22
  void *v31; // x23
  void *v32; // x28
  void *v33; // x20
  void *v34; // x21
  void *v35; // x22
  void *v36; // x23
  void *v37; // x28
  void *v38; // x21
  void *v39; // x22
  void *v40; // x23
  void *v41; // x28
  void *v42; // x20
  double v43; // d0
  void *v44; // x21
  void *v45; // x22
  void *v46; // x23
  void *v47; // x28
  void *v48; // x24
  void *v49; // x0
  NSBundle *v50; // x21
  NSString *v51; // x22
  NSTabView *v52; // x21
  void *v53; // x21
  double v54; // d3
  double v55; // d9
  void *v56; // x21
  double v57; // d1
  double v58; // d3
  double v59; // d10
  void *v60; // x21
  DeviceFileSharingViewController *v61; // x21
  id obj; // [xsp+8h] [xbp-238h]
  __int64 v63; // [xsp+10h] [xbp-230h]
  DeviceFinderTabContainerViewController *v64; // [xsp+18h] [xbp-228h]
  void *v65; // [xsp+20h] [xbp-220h]
  id v66; // [xsp+28h] [xbp-218h]
  FlippedView *v67; // [xsp+30h] [xbp-210h]
  DeviceFinderTabContainerViewController *v68; // [xsp+38h] [xbp-208h]
  __int128 v69; // [xsp+40h] [xbp-200h] BYREF
  __int128 v70; // [xsp+50h] [xbp-1F0h]
  __int128 v71; // [xsp+60h] [xbp-1E0h]
  __int128 v72; // [xsp+70h] [xbp-1D0h]
  __int128 v73; // [xsp+80h] [xbp-1C0h] BYREF
  __int128 v74; // [xsp+90h] [xbp-1B0h]
  __int128 v75; // [xsp+A0h] [xbp-1A0h]
  __int128 v76; // [xsp+B0h] [xbp-190h]
  _BYTE v77[128]; // [xsp+C0h] [xbp-180h] BYREF
  _BYTE v78[128]; // [xsp+140h] [xbp-100h] BYREF

  v3 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
  -[DeviceFinderTabContainerViewController setTabViewControllersDictionary:](
    self,
    "setTabViewControllersDictionary:",
    v3);
  objc_release(v3);
  v4 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v73 = 0u;
  v74 = 0u;
  v75 = 0u;
  v76 = 0u;
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceFinderTabContainerViewController tabIdentifiers](self, "tabIdentifiers"));
  v6 = objc_msgSend(v5, "countByEnumeratingWithState:objects:count:", &v73, v78, 16LL);
  if ( v6 )
  {
    v7 = v6;
    v8 = *(_QWORD *)v74;
    do
    {
      for ( i = 0LL; i != v7; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v74 != v8 )
          objc_enumerationMutation(v5);
        v10 = *(_QWORD *)(*((_QWORD *)&v73 + 1) + 8LL * (_QWORD)i);
        objc_msgSend(v4, "addObject:", v10);
        if ( -[DeviceFinderTabContainerViewController hasCloudIdentifierForIdentifier:](
               self,
               "hasCloudIdentifierForIdentifier:",
               v10) )
        {
          v11 = objc_retainAutoreleasedReturnValue(
                  -[DeviceFinderTabContainerViewController cloudIdentifierForIdentifier:](
                    self,
                    "cloudIdentifierForIdentifier:",
                    v10));
          objc_msgSend(v4, "addObject:", v11);
          objc_release(v11);
        }
        if ( -[DeviceFinderTabContainerViewController hasErrorIdentifierForIdentifier:](
               self,
               "hasErrorIdentifierForIdentifier:",
               v10) )
        {
          v12 = objc_retainAutoreleasedReturnValue(
                  -[DeviceFinderTabContainerViewController errorIdentifierForIdentifier:](
                    self,
                    "errorIdentifierForIdentifier:",
                    v10));
          objc_msgSend(v4, "addObject:", v12);
          objc_release(v12);
        }
      }
      v7 = objc_msgSend(v5, "countByEnumeratingWithState:objects:count:", &v73, v78, 16LL);
    }
    while ( v7 );
  }
  objc_release(v5);
  v71 = 0u;
  v72 = 0u;
  v69 = 0u;
  v70 = 0u;
  obj = objc_retain(v4);
  v65 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v69, v77, 16LL);
  if ( v65 )
  {
    v63 = *(_QWORD *)v70;
    v64 = self;
    do
    {
      for ( j = 0LL; j != v65; j = (char *)j + 1 )
      {
        if ( *(_QWORD *)v70 != v63 )
          objc_enumerationMutation(obj);
        v14 = *(void **)(*((_QWORD *)&v69 + 1) + 8LL * (_QWORD)j);
        v15 = objc_retainAutoreleasedReturnValue(
                -[DeviceFinderTabContainerViewController viewControllerWithIdentifier:](
                  self,
                  "viewControllerWithIdentifier:",
                  v14));
        v16 = objc_retainAutoreleasedReturnValue(
                -[DeviceFinderTabContainerViewController tabViewControllersDictionary](
                  self,
                  "tabViewControllersDictionary"));
        -[NSMutableDictionary setObject:forKeyedSubscript:](v16, "setObject:forKeyedSubscript:", v15, v14);
        objc_release(v16);
        -[DeviceFinderTabContainerViewController setupViewController:](self, "setupViewController:", v15);
        v17 = objc_alloc_init(&OBJC_CLASS___DeviceScrollView);
        v18 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSTabViewItem), "initWithIdentifier:", v14);
        -[DeviceScrollView setHasVerticalScroller:](v17, "setHasVerticalScroller:", 1LL);
        v19 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
        v20 = objc_retainAutoreleasedReturnValue(
                -[NSBundle localizedStringForKey:value:table:](
                  v19,
                  "localizedStringForKey:value:table:",
                  v14,
                  &stru_1000BA220,
                  0LL));
        -[DeviceScrollView setAccessibilityLabel:](v17, "setAccessibilityLabel:", v20);
        objc_release(v20);
        objc_release(v19);
        v21 = objc_alloc_init(&OBJC_CLASS___FlippedView);
        v68 = v15;
        v66 = objc_retainAutoreleasedReturnValue(-[DeviceFinderTabContainerViewController view](v15, "view"));
        sub_10002ABA4((int)v66, v21);
        v67 = v21;
        -[DeviceScrollView setDocumentView:](v17, "setDocumentView:", v21);
        -[DeviceScrollView setVerticalScrollElasticity:](v17, "setVerticalScrollElasticity:", 0LL);
        -[DeviceScrollView setHorizontalScrollElasticity:](v17, "setHorizontalScrollElasticity:", 0LL);
        objc_msgSend(v18, "setView:", v17);
        v22 = objc_retainAutoreleasedReturnValue(-[DeviceScrollView documentView](v17, "documentView"));
        objc_msgSend(v22, "setTranslatesAutoresizingMaskIntoConstraints:", 0LL);
        objc_release(v22);
        v23 = objc_retainAutoreleasedReturnValue(-[DeviceScrollView documentView](v17, "documentView"));
        v24 = objc_retainAutoreleasedReturnValue(objc_msgSend(v23, "leadingAnchor"));
        v25 = objc_retainAutoreleasedReturnValue(-[DeviceScrollView contentView](v17, "contentView"));
        v26 = objc_retainAutoreleasedReturnValue(objc_msgSend(v25, "leadingAnchor"));
        v27 = objc_retainAutoreleasedReturnValue(objc_msgSend(v24, "constraintEqualToAnchor:", v26));
        objc_msgSend(v27, "setActive:", 1LL);
        objc_release(v27);
        objc_release(v26);
        objc_release(v25);
        objc_release(v24);
        objc_release(v23);
        v28 = objc_retainAutoreleasedReturnValue(-[DeviceScrollView documentView](v17, "documentView"));
        v29 = objc_retainAutoreleasedReturnValue(objc_msgSend(v28, "trailingAnchor"));
        v30 = objc_retainAutoreleasedReturnValue(-[DeviceScrollView contentView](v17, "contentView"));
        v31 = objc_retainAutoreleasedReturnValue(objc_msgSend(v30, "trailingAnchor"));
        v32 = objc_retainAutoreleasedReturnValue(objc_msgSend(v29, "constraintEqualToAnchor:", v31));
        objc_msgSend(v32, "setActive:", 1LL);
        objc_release(v32);
        objc_release(v31);
        objc_release(v30);
        objc_release(v29);
        objc_release(v28);
        v33 = objc_retainAutoreleasedReturnValue(-[DeviceScrollView documentView](v17, "documentView"));
        v34 = objc_retainAutoreleasedReturnValue(objc_msgSend(v33, "topAnchor"));
        v35 = objc_retainAutoreleasedReturnValue(-[DeviceScrollView contentView](v17, "contentView"));
        v36 = objc_retainAutoreleasedReturnValue(objc_msgSend(v35, "topAnchor"));
        v37 = objc_retainAutoreleasedReturnValue(objc_msgSend(v34, "constraintEqualToAnchor:", v36));
        objc_msgSend(v37, "setActive:", 1LL);
        objc_release(v37);
        objc_release(v36);
        objc_release(v35);
        objc_release(v34);
        objc_release(v33);
        v38 = objc_retainAutoreleasedReturnValue(-[DeviceScrollView documentView](v17, "documentView"));
        v39 = objc_retainAutoreleasedReturnValue(objc_msgSend(v38, "bottomAnchor"));
        v40 = objc_retainAutoreleasedReturnValue(-[DeviceScrollView contentView](v17, "contentView"));
        v41 = objc_retainAutoreleasedReturnValue(objc_msgSend(v40, "bottomAnchor"));
        v42 = objc_retainAutoreleasedReturnValue(objc_msgSend(v39, "constraintEqualToAnchor:", v41));
        objc_release(v41);
        objc_release(v40);
        objc_release(v39);
        objc_release(v38);
        LODWORD(v43) = 1140424704;
        objc_msgSend(v42, "setPriority:", v43);
        objc_msgSend(v42, "setActive:", 1LL);
        v44 = objc_retainAutoreleasedReturnValue(-[DeviceScrollView documentView](v17, "documentView"));
        v45 = objc_retainAutoreleasedReturnValue(objc_msgSend(v44, "heightAnchor"));
        v46 = objc_retainAutoreleasedReturnValue(-[DeviceScrollView contentView](v17, "contentView"));
        v47 = objc_retainAutoreleasedReturnValue(objc_msgSend(v46, "heightAnchor"));
        v48 = objc_retainAutoreleasedReturnValue(objc_msgSend(v45, "constraintGreaterThanOrEqualToAnchor:multiplier:", v47, 1.0));
        objc_msgSend(v48, "setActive:", 1LL);
        objc_release(v48);
        v49 = v47;
        self = v64;
        objc_release(v49);
        objc_release(v46);
        objc_release(v45);
        objc_release(v44);
        objc_msgSend(v18, "setIdentifier:", v14);
        v50 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
        v51 = objc_retainAutoreleasedReturnValue(
                -[NSBundle localizedStringForKey:value:table:](
                  v50,
                  "localizedStringForKey:value:table:",
                  v14,
                  &stru_1000BA220,
                  0LL));
        objc_msgSend(v18, "setLabel:", v51);
        objc_release(v51);
        objc_release(v50);
        v52 = objc_retainAutoreleasedReturnValue(-[DeviceFinderTabContainerViewController tabView](v64, "tabView"));
        -[NSTabView addTabViewItem:](v52, "addTabViewItem:", v18);
        objc_release(v52);
        v53 = objc_retainAutoreleasedReturnValue(-[DeviceScrollView contentView](v17, "contentView"));
        objc_msgSend(v53, "frame");
        v55 = v54;
        objc_release(v53);
        v56 = objc_retainAutoreleasedReturnValue(-[DeviceScrollView documentView](v17, "documentView"));
        objc_msgSend(v56, "frame");
        v59 = v57 + v58;
        objc_release(v56);
        v60 = objc_retainAutoreleasedReturnValue(-[DeviceScrollView contentView](v17, "contentView"));
        objc_msgSend(v60, "scrollToPoint:", 0.0, v59 - v55);
        objc_release(v60);
        if ( (unsigned int)objc_msgSend(v14, "isEqualToString:", CFSTR("Files")) )
        {
          v61 = objc_retainAutoreleasedReturnValue(-[DeviceFinderTabContainerViewController fileSharingViewController](v64, "fileSharingViewController"));
          -[DeviceFileSharingViewController loadFileSharingApps](v61, "loadFileSharingApps");
          objc_release(v61);
        }
        objc_release(v42);
        objc_release(v66);
        objc_release(v67);
        objc_release(v18);
        objc_release(v17);
        objc_release(v68);
      }
      v65 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v69, v77, 16LL);
    }
    while ( v65 );
  }
  objc_release(obj);
  objc_release(obj);
}