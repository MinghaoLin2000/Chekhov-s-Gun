-[RemoteViewBridgeServiceViewService loadView]
void __cdecl -[RemoteViewBridgeServiceViewService loadView](RemoteViewBridgeServiceViewService *self, SEL a2)
{
  RemoteViewBridgeServiceWindow *v3; // x0
  double v4; // d9
  RemoteViewBridgeServiceWindow *v5; // x20
  RemoteViewBridgeServiceWindow *v6; // x20
  void *v7; // x21
  id v8; // x26
  void *v9; // x28
  void *v10; // x20
  void *v11; // x27
  void *v12; // x22
  void *v13; // x21
  void *v14; // x23
  void *v15; // x24
  NSArray *v16; // x25
  void *v17; // x24
  void *v18; // x27
  void *v19; // x20
  void *v20; // x22
  void *v21; // x28
  void *v22; // x21
  void *v23; // x23
  void *v24; // x24
  void *v25; // x25
  NSArray *v26; // x26
  NSLayoutConstraint *v27; // x20
  NSLayoutConstraint *v28; // x20
  NSLayoutConstraint *v29; // x20
  NSLayoutConstraint *v30; // x20
  RemoteViewBridgeServiceContainer *v31; // x20
  RemoteViewBridgeServiceContainer *v32; // x20
  RemoteViewBridgeServiceContainer *v33; // x20
  RemoteViewBridgeServiceContainer *v34; // x20
  RemoteViewBridgeServiceContainer *v35; // x20
  RemoteViewBridgeServiceContainer *v36; // x21
  NSDictionary *v37; // x22
  NSArray *v38; // x20
  RemoteViewBridgeServiceContainer *v39; // x21
  NSDictionary *v40; // x22
  NSArray *v41; // x20
  RemoteViewBridgeServiceContainer *v42; // x21
  NSLayoutConstraint *v43; // x20
  NSLayoutConstraint *v44; // x20
  double v45; // d0
  RemoteViewBridgeServiceContainer *v46; // x21
  NSLayoutConstraint *v47; // x20
  NSLayoutConstraint *v48; // x20
  double v49; // d0
  NSLayoutConstraint *v50; // x21
  NSLayoutConstraint *v51; // x22
  NSArray *v52; // x23
  RemoteViewBridgeServiceWindow *v53; // x20
  RemoteViewBridgeServiceContainer *v54; // x20
  id WeakRetained; // x20
  id v56; // [xsp+8h] [xbp-118h]
  id v57; // [xsp+8h] [xbp-118h]
  id v58; // [xsp+10h] [xbp-110h]
  id v59; // [xsp+10h] [xbp-110h]
  id v60; // [xsp+18h] [xbp-108h]
  id v61; // [xsp+18h] [xbp-108h]
  id v62; // [xsp+20h] [xbp-100h]
  id v63; // [xsp+20h] [xbp-100h]
  id v64; // [xsp+28h] [xbp-F8h]
  id v65; // [xsp+28h] [xbp-F8h]
  void *v66; // [xsp+30h] [xbp-F0h]
  void *v67; // [xsp+38h] [xbp-E8h]
  _QWORD v68[2]; // [xsp+40h] [xbp-E0h] BYREF
  const __CFString *v69; // [xsp+50h] [xbp-D0h] BYREF
  RemoteViewBridgeServiceContainer *v70; // [xsp+58h] [xbp-C8h] BYREF
  const __CFString *v71; // [xsp+60h] [xbp-C0h] BYREF
  RemoteViewBridgeServiceContainer *v72; // [xsp+68h] [xbp-B8h] BYREF
  _QWORD v73[4]; // [xsp+70h] [xbp-B0h] BYREF
  _QWORD v74[4]; // [xsp+90h] [xbp-90h] BYREF

  v3 = objc_alloc(&OBJC_CLASS___RemoteViewBridgeServiceWindow);
  v4 = SiriUISAEWindowMaxHeight;
  v5 = -[RemoteViewBridgeServiceWindow initWithSize:](v3, "initWithSize:", 376.0, SiriUISAEWindowMaxHeight);
  -[RemoteViewBridgeServiceViewService setServiceWindow:](self, "setServiceWindow:", v5);
  objc_release(v5);
  v6 = objc_retainAutoreleasedReturnValue(-[RemoteViewBridgeServiceViewService serviceWindow](self, "serviceWindow"));
  v7 = objc_retainAutoreleasedReturnValue(-[RemoteViewBridgeServiceWindow contentView](v6, "contentView"));
  objc_release(v6);
  objc_msgSend(v7, "setAlphaValue:", 1.0);
  v8 = objc_alloc_init((Class)&OBJC_CLASS___NSView);
  objc_msgSend(v8, "setTranslatesAutoresizingMaskIntoConstraints:", 0LL);
  objc_msgSend(v7, "addSubview:", v8);
  v64 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "topAnchor"));
  v62 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "topAnchor"));
  v60 = objc_retainAutoreleasedReturnValue(objc_msgSend(v64, "constraintEqualToAnchor:", v62));
  v74[0] = v60;
  v58 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "bottomAnchor"));
  v56 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "bottomAnchor"));
  v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v58, "constraintEqualToAnchor:", v56));
  v74[1] = v9;
  v67 = v7;
  v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "leadingAnchor"));
  v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "leadingAnchor"));
  v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "constraintEqualToAnchor:", v11));
  v74[2] = v12;
  v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "widthAnchor"));
  v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "widthAnchor"));
  v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v13, "constraintEqualToAnchor:", v14));
  v74[3] = v15;
  v16 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", v74, 4LL));
  +[NSLayoutConstraint activateConstraints:](&OBJC_CLASS___NSLayoutConstraint, "activateConstraints:", v16);
  objc_release(v16);
  objc_release(v15);
  objc_release(v14);
  objc_release(v13);
  objc_release(v12);
  objc_release(v11);
  objc_release(v10);
  objc_release(v9);
  objc_release(v56);
  objc_release(v58);
  objc_release(v60);
  objc_release(v62);
  objc_release(v64);
  v17 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSView), "initWithFrame:", 0.0, 0.0, 1.0, v4);
  objc_msgSend(v17, "setIdentifier:", CFSTR("windowSizingView"));
  objc_msgSend(v17, "setTranslatesAutoresizingMaskIntoConstraints:", 0LL);
  objc_msgSend(v8, "addSubview:", v17);
  v65 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "topAnchor"));
  v63 = objc_retainAutoreleasedReturnValue(objc_msgSend(v17, "topAnchor"));
  v61 = objc_retainAutoreleasedReturnValue(objc_msgSend(v65, "constraintEqualToAnchor:", v63));
  v73[0] = v61;
  v59 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "bottomAnchor"));
  v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v17, "bottomAnchor"));
  v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v59, "constraintEqualToAnchor:", v18));
  v73[1] = v19;
  v66 = v8;
  v20 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "leadingAnchor"));
  v57 = v17;
  v21 = objc_retainAutoreleasedReturnValue(objc_msgSend(v17, "leadingAnchor"));
  v22 = objc_retainAutoreleasedReturnValue(objc_msgSend(v20, "constraintEqualToAnchor:", v21));
  v73[2] = v22;
  v23 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "widthAnchor"));
  v24 = objc_retainAutoreleasedReturnValue(objc_msgSend(v17, "widthAnchor"));
  v25 = objc_retainAutoreleasedReturnValue(objc_msgSend(v23, "constraintEqualToAnchor:", v24));
  v73[3] = v25;
  v26 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", v73, 4LL));
  +[NSLayoutConstraint activateConstraints:](&OBJC_CLASS___NSLayoutConstraint, "activateConstraints:", v26);
  objc_release(v26);
  objc_release(v25);
  objc_release(v24);
  objc_release(v23);
  objc_release(v22);
  objc_release(v21);
  objc_release(v20);
  objc_release(v19);
  objc_release(v18);
  objc_release(v59);
  objc_release(v61);
  objc_release(v63);
  objc_release(v65);
  v27 = objc_retainAutoreleasedReturnValue(
          +[NSLayoutConstraint constraintWithItem:attribute:relatedBy:toItem:attribute:multiplier:constant:](
            &OBJC_CLASS___NSLayoutConstraint,
            "constraintWithItem:attribute:relatedBy:toItem:attribute:multiplier:constant:",
            v57,
            8LL,
            0LL,
            0LL,
            0LL,
            1.0,
            v4));
  -[RemoteViewBridgeServiceViewService setMaximumHeightConstraint:](self, "setMaximumHeightConstraint:", v27);
  objc_release(v27);
  v28 = objc_retainAutoreleasedReturnValue(-[RemoteViewBridgeServiceViewService maximumHeightConstraint](self, "maximumHeightConstraint"));
  -[NSLayoutConstraint setActive:](v28, "setActive:", 1LL);
  objc_release(v28);
  v29 = objc_retainAutoreleasedReturnValue(
          +[NSLayoutConstraint constraintWithItem:attribute:relatedBy:toItem:attribute:multiplier:constant:](
            &OBJC_CLASS___NSLayoutConstraint,
            "constraintWithItem:attribute:relatedBy:toItem:attribute:multiplier:constant:",
            v57,
            7LL,
            0LL,
            0LL,
            0LL,
            1.0,
            v4));
  -[RemoteViewBridgeServiceViewService setMaximumWidthConstraint:](self, "setMaximumWidthConstraint:", v29);
  objc_release(v29);
  v30 = objc_retainAutoreleasedReturnValue(-[RemoteViewBridgeServiceViewService maximumWidthConstraint](self, "maximumWidthConstraint"));
  -[NSLayoutConstraint setActive:](v30, "setActive:", 1LL);
  objc_release(v30);
  v31 = -[RemoteViewBridgeServiceContainer initWithFrame:](
          objc_alloc(&OBJC_CLASS___RemoteViewBridgeServiceContainer),
          "initWithFrame:",
          0.0,
          0.0,
          376.0,
          300.0);
  -[RemoteViewBridgeServiceViewService setRootContainer:](self, "setRootContainer:", v31);
  objc_release(v31);
  v32 = objc_retainAutoreleasedReturnValue(-[RemoteViewBridgeServiceViewService rootContainer](self, "rootContainer"));
  -[RemoteViewBridgeServiceContainer setTranslatesAutoresizingMaskIntoConstraints:](
    v32,
    "setTranslatesAutoresizingMaskIntoConstraints:",
    0LL);
  objc_release(v32);
  v33 = objc_retainAutoreleasedReturnValue(-[RemoteViewBridgeServiceViewService rootContainer](self, "rootContainer"));
  -[RemoteViewBridgeServiceContainer setIdentifier:](v33, "setIdentifier:", CFSTR("rootContainer"));
  objc_release(v33);
  v34 = objc_retainAutoreleasedReturnValue(-[RemoteViewBridgeServiceViewService rootContainer](self, "rootContainer"));
  -[RemoteViewBridgeServiceContainer setDelegate:](v34, "setDelegate:", self);
  objc_release(v34);
  v35 = objc_retainAutoreleasedReturnValue(-[RemoteViewBridgeServiceViewService rootContainer](self, "rootContainer"));
  objc_msgSend(v66, "addSubview:", v35);
  objc_release(v35);
  v71 = CFSTR("view");
  v36 = objc_retainAutoreleasedReturnValue(-[RemoteViewBridgeServiceViewService rootContainer](self, "rootContainer"));
  v72 = v36;
  v37 = objc_retainAutoreleasedReturnValue(
          +[NSDictionary dictionaryWithObjects:forKeys:count:](
            &OBJC_CLASS___NSDictionary,
            "dictionaryWithObjects:forKeys:count:",
            &v72,
            &v71,
            1LL));
  v38 = objc_retainAutoreleasedReturnValue(
          +[NSLayoutConstraint constraintsWithVisualFormat:options:metrics:views:](
            &OBJC_CLASS___NSLayoutConstraint,
            "constraintsWithVisualFormat:options:metrics:views:",
            CFSTR("V:[view]-(0)-|"),
            0LL,
            0LL,
            v37));
  objc_msgSend(v66, "addConstraints:", v38);
  objc_release(v38);
  objc_release(v37);
  objc_release(v36);
  v69 = CFSTR("view");
  v39 = objc_retainAutoreleasedReturnValue(-[RemoteViewBridgeServiceViewService rootContainer](self, "rootContainer"));
  v70 = v39;
  v40 = objc_retainAutoreleasedReturnValue(
          +[NSDictionary dictionaryWithObjects:forKeys:count:](
            &OBJC_CLASS___NSDictionary,
            "dictionaryWithObjects:forKeys:count:",
            &v70,
            &v69,
            1LL));
  v41 = objc_retainAutoreleasedReturnValue(
          +[NSLayoutConstraint constraintsWithVisualFormat:options:metrics:views:](
            &OBJC_CLASS___NSLayoutConstraint,
            "constraintsWithVisualFormat:options:metrics:views:",
            CFSTR("H:|-(0)-[view]"),
            0LL,
            0LL,
            v40));
  objc_msgSend(v66, "addConstraints:", v41);
  objc_release(v41);
  objc_release(v40);
  objc_release(v39);
  v42 = objc_retainAutoreleasedReturnValue(-[RemoteViewBridgeServiceViewService rootContainer](self, "rootContainer"));
  v43 = objc_retainAutoreleasedReturnValue(
          +[NSLayoutConstraint constraintWithItem:attribute:relatedBy:toItem:attribute:multiplier:constant:](
            &OBJC_CLASS___NSLayoutConstraint,
            "constraintWithItem:attribute:relatedBy:toItem:attribute:multiplier:constant:",
            v42,
            8LL,
            0LL,
            0LL,
            0LL,
            1.0,
            320.0));
  -[RemoteViewBridgeServiceViewService setHeightConstraint:](self, "setHeightConstraint:", v43);
  objc_release(v43);
  objc_release(v42);
  v44 = objc_retainAutoreleasedReturnValue(-[RemoteViewBridgeServiceViewService heightConstraint](self, "heightConstraint"));
  LODWORD(v45) = 1148829696;
  -[NSLayoutConstraint setPriority:](v44, "setPriority:", v45);
  objc_release(v44);
  v46 = objc_retainAutoreleasedReturnValue(-[RemoteViewBridgeServiceViewService rootContainer](self, "rootContainer"));
  v47 = objc_retainAutoreleasedReturnValue(
          +[NSLayoutConstraint constraintWithItem:attribute:relatedBy:toItem:attribute:multiplier:constant:](
            &OBJC_CLASS___NSLayoutConstraint,
            "constraintWithItem:attribute:relatedBy:toItem:attribute:multiplier:constant:",
            v46,
            7LL,
            0LL,
            0LL,
            0LL,
            1.0,
            376.0));
  -[RemoteViewBridgeServiceViewService setWidthConstraint:](self, "setWidthConstraint:", v47);
  objc_release(v47);
  objc_release(v46);
  v48 = objc_retainAutoreleasedReturnValue(-[RemoteViewBridgeServiceViewService widthConstraint](self, "widthConstraint"));
  LODWORD(v49) = 1148846080;
  -[NSLayoutConstraint setPriority:](v48, "setPriority:", v49);
  objc_release(v48);
  v50 = objc_retainAutoreleasedReturnValue(-[RemoteViewBridgeServiceViewService heightConstraint](self, "heightConstraint"));
  v68[0] = v50;
  v51 = objc_retainAutoreleasedReturnValue(-[RemoteViewBridgeServiceViewService widthConstraint](self, "widthConstraint"));
  v68[1] = v51;
  v52 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", v68, 2LL));
  +[NSLayoutConstraint activateConstraints:](&OBJC_CLASS___NSLayoutConstraint, "activateConstraints:", v52);
  objc_release(v52);
  objc_release(v51);
  objc_release(v50);
  -[RemoteViewBridgeServiceViewService setView:](self, "setView:", v67);
  v53 = objc_retainAutoreleasedReturnValue(-[RemoteViewBridgeServiceViewService serviceWindow](self, "serviceWindow"));
  -[RemoteViewBridgeServiceWindow layoutIfNeeded](v53, "layoutIfNeeded");
  objc_release(v53);
  v54 = objc_retainAutoreleasedReturnValue(-[RemoteViewBridgeServiceViewService rootContainer](self, "rootContainer"));
  -[RemoteViewBridgeServiceContainer setSendFrameChangesToHost:](v54, "setSendFrameChangesToHost:", 1LL);
  objc_release(v54);
  WeakRetained = objc_loadWeakRetained(&sServiceDelegate);
  objc_msgSend(WeakRetained, "remoteViewBridgeServiceRegistered:", self);
  objc_release(WeakRetained);
  objc_release(v57);
  objc_release(v66);
  objc_release(v67);
}