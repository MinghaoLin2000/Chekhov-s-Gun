-[AMRemoteActionServiceViewController remoteViewSizeChanged:transaction:]
bool __cdecl -[AMRemoteActionServiceViewController remoteViewSizeChanged:transaction:](
        AMRemoteActionServiceViewController *self,
        SEL a2,
        CGSize a3,
        id a4)
{
  double height; // d8
  double width; // d9
  NSArray *v8; // x20
  NSArray *v9; // x21
  void *v10; // x20
  NSView *v11; // x21
  void *v12; // x0
  void *v13; // x22
  NSView *v14; // x23
  void *v15; // x24
  unsigned int v16; // w25
  void *v17; // x22
  NSView *v18; // x20
  void *v19; // x20
  NSView *v20; // x22
  NSLayoutDimension *v21; // x23
  NSLayoutConstraint *v22; // x21
  double v23; // d0
  NSView *v24; // x22
  void *v25; // x23
  NSView *v26; // x22
  void *v27; // x23
  void *v28; // x22
  NSArray *v29; // x23
  NSView *v30; // x22
  double v31; // d0
  double v32; // d8
  double v33; // d1
  double v34; // d9
  void *v35; // x22
  void *v36; // x22
  void *v37; // x23
  void *v38; // x24
  void *v39; // x25
  double v40; // d0
  double v41; // d10
  void *v42; // x26
  void *v43; // x27
  void *v44; // x19
  void *v45; // x22
  objc_super v46; // [xsp+0h] [xbp-80h] BYREF

  height = a3.height;
  width = a3.width;
  if ( a4 )
  {
    v46.receiver = self;
    v46.super_class = (Class)&OBJC_CLASS___AMRemoteActionServiceViewController;
    return -[AMRemoteActionServiceViewController remoteViewSizeChanged:transaction:](
             &v46,
             "remoteViewSizeChanged:transaction:",
             a3.width,
             a3.height);
  }
  v8 = objc_retainAutoreleasedReturnValue(-[AMRemoteActionServiceViewController _remoteViewSizeConstraints](self, "_remoteViewSizeConstraints"));
  objc_release(v8);
  if ( v8 )
  {
    v9 = objc_retainAutoreleasedReturnValue(-[AMRemoteActionServiceViewController _remoteViewSizeConstraints](self, "_remoteViewSizeConstraints"));
    v10 = -[NSArray mutableCopy](v9, "mutableCopy");
    objc_release(v9);
    v11 = objc_retainAutoreleasedReturnValue(-[AMRemoteActionServiceViewController _amActionView](self, "_amActionView"));
    v12 = objc_retainAutoreleasedReturnValue(-[NSView amActionView_resizableHeightConstraint](v11, "amActionView_resizableHeightConstraint"));
    if ( v12 )
    {
      v13 = v12;
      v14 = objc_retainAutoreleasedReturnValue(-[AMRemoteActionServiceViewController _amActionView](self, "_amActionView"));
      v15 = objc_retainAutoreleasedReturnValue(-[NSView amActionView_resizableHeightConstraint](v14, "amActionView_resizableHeightConstraint"));
      v16 = (unsigned int)objc_msgSend(v10, "containsObject:", v15);
      objc_release(v15);
      objc_release(v14);
      objc_release(v13);
      objc_release(v11);
      if ( !v16 )
      {
LABEL_8:
        if ( objc_msgSend(v10, "count") )
          +[NSLayoutConstraint deactivateConstraints:](&OBJC_CLASS___NSLayoutConstraint, "deactivateConstraints:", v10);
        -[AMRemoteActionServiceViewController set_remoteViewSizeConstraints:](
          self,
          "set_remoteViewSizeConstraints:",
          0LL);
        objc_release(v10);
        goto LABEL_11;
      }
      v11 = objc_retainAutoreleasedReturnValue(-[AMRemoteActionServiceViewController _amActionView](self, "_amActionView"));
      v17 = objc_retainAutoreleasedReturnValue(-[NSView amActionView_resizableHeightConstraint](v11, "amActionView_resizableHeightConstraint"));
      objc_msgSend(v10, "removeObject:", v17);
      objc_release(v17);
    }
    objc_release(v11);
    goto LABEL_8;
  }
LABEL_11:
  v18 = objc_retainAutoreleasedReturnValue(-[AMRemoteActionServiceViewController _amActionView](self, "_amActionView"));
  -[NSView setFrame:](v18, "setFrame:", 0.0, 0.0, width, height);
  objc_release(v18);
  v19 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v20 = objc_retainAutoreleasedReturnValue(-[AMRemoteActionServiceViewController _amActionView](self, "_amActionView"));
  v21 = objc_retainAutoreleasedReturnValue(-[NSView widthAnchor](v20, "widthAnchor"));
  v22 = objc_retainAutoreleasedReturnValue(-[NSLayoutDimension constraintEqualToConstant:](v21, "constraintEqualToConstant:", width));
  objc_release(v21);
  objc_release(v20);
  LODWORD(v23) = AMActionViewFullWidthPriority;
  -[NSLayoutConstraint setPriority:](v22, "setPriority:", v23);
  objc_msgSend(v19, "addObject:", v22);
  v24 = objc_retainAutoreleasedReturnValue(-[AMRemoteActionServiceViewController _amActionView](self, "_amActionView"));
  v25 = objc_retainAutoreleasedReturnValue(-[NSView amActionView_resizableHeightConstraint](v24, "amActionView_resizableHeightConstraint"));
  objc_release(v25);
  objc_release(v24);
  if ( v25 )
  {
    v26 = objc_retainAutoreleasedReturnValue(-[AMRemoteActionServiceViewController _amActionView](self, "_amActionView"));
    v27 = objc_retainAutoreleasedReturnValue(-[NSView amActionView_resizableHeightConstraint](v26, "amActionView_resizableHeightConstraint"));
    objc_release(v26);
    objc_msgSend(v27, "setConstant:", height);
    objc_msgSend(v19, "addObject:", v27);
    objc_release(v27);
  }
  v28 = objc_msgSend(v19, "copy");
  -[AMRemoteActionServiceViewController set_remoteViewSizeConstraints:](self, "set_remoteViewSizeConstraints:", v28);
  objc_release(v28);
  v29 = objc_retainAutoreleasedReturnValue(-[AMRemoteActionServiceViewController _remoteViewSizeConstraints](self, "_remoteViewSizeConstraints"));
  +[NSLayoutConstraint activateConstraints:](&OBJC_CLASS___NSLayoutConstraint, "activateConstraints:", v29);
  objc_release(v29);
  v30 = objc_retainAutoreleasedReturnValue(-[AMRemoteActionServiceViewController _amActionView](self, "_amActionView"));
  -[NSView fittingSize](v30, "fittingSize");
  v32 = v31;
  v34 = v33;
  objc_release(v30);
  v35 = objc_retainAutoreleasedReturnValue(-[AMRemoteActionServiceViewController view](self, "view"));
  objc_msgSend(v35, "setFrameSize:", v32, v34);
  objc_release(v35);
  v36 = objc_retainAutoreleasedReturnValue(-[AMRemoteActionServiceViewController view](self, "view"));
  v37 = objc_retainAutoreleasedReturnValue(objc_msgSend(v36, "window"));
  v38 = objc_retainAutoreleasedReturnValue(-[AMRemoteActionServiceViewController view](self, "view"));
  v39 = objc_retainAutoreleasedReturnValue(objc_msgSend(v38, "window"));
  objc_msgSend(v39, "frame");
  v41 = v40;
  v42 = objc_retainAutoreleasedReturnValue(-[AMRemoteActionServiceViewController view](self, "view"));
  v43 = objc_retainAutoreleasedReturnValue(objc_msgSend(v42, "window"));
  objc_msgSend(v43, "frame");
  objc_msgSend(v37, "setFrame:display:", 0LL, v41);
  objc_release(v43);
  objc_release(v42);
  objc_release(v39);
  objc_release(v38);
  objc_release(v37);
  objc_release(v36);
  v44 = objc_retainAutoreleasedReturnValue(-[AMRemoteActionServiceViewController view](self, "view"));
  v45 = objc_retainAutoreleasedReturnValue(objc_msgSend(v44, "window"));
  objc_msgSend(v45, "layoutIfNeeded");
  objc_release(v45);
  objc_release(v44);
  objc_release(v22);
  objc_release(v19);
  return 0;
}