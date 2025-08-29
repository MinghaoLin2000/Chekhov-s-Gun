-[RemoteViewBridgeServiceViewService remoteContainerView:requestSizeChange:fenceRight:]
void __cdecl -[RemoteViewBridgeServiceViewService remoteContainerView:requestSizeChange:fenceRight:](
        RemoteViewBridgeServiceViewService *self,
        SEL a2,
        id a3,
        CGSize a4,
        id a5)
{
  double height; // d8
  double width; // d9
  id v8; // x20
  id v9; // x20
  _QWORD v10[4]; // [xsp+8h] [xbp-58h] BYREF
  id v11; // [xsp+28h] [xbp-38h]
  double v12; // [xsp+30h] [xbp-30h]
  double v13; // [xsp+38h] [xbp-28h]

  height = a4.height;
  width = a4.width;
  v8 = objc_retain(a5);
  -[RemoteViewBridgeServiceViewService _remotePreferredSizeChanged:](
    self,
    "_remotePreferredSizeChanged:",
    width,
    height);
  v10[0] = _NSConcreteStackBlock;
  v10[1] = 3254779904LL;
  v10[2] = sub_100002B68;
  v10[3] = &unk_100020640;
  v12 = width;
  v13 = height;
  v11 = v8;
  v9 = objc_retain(v8);
  -[RemoteViewBridgeServiceViewService remoteViewControllerProxy:](self, "remoteViewControllerProxy:", v10);
  objc_release(v11);
  objc_release(v9);
}