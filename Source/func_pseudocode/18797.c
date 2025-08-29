-[RemoteViewBridgeServiceViewService synchronizeHostContainerFrame:]
void __cdecl -[RemoteViewBridgeServiceViewService synchronizeHostContainerFrame:](
        RemoteViewBridgeServiceViewService *self,
        SEL a2,
        CGRect a3)
{
  _QWORD v3[4]; // [xsp+0h] [xbp-40h] BYREF
  CGRect v4; // [xsp+20h] [xbp-20h]

  v3[0] = _NSConcreteStackBlock;
  v3[1] = 3221225472LL;
  v3[2] = sub_1000029D8;
  v3[3] = &unk_100020620;
  v4 = a3;
  -[RemoteViewBridgeServiceViewService remoteViewControllerProxy:](self, "remoteViewControllerProxy:", v3);
}