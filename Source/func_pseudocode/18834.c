-[RemoteViewController remoteContainerView:requestSizeChange:immediate:fenceRight:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[RemoteViewController remoteContainerView:requestSizeChange:immediate:fenceRight:](
        RemoteViewController *self,
        SEL a2,
        id a3,
        CGSize a4,
        bool a5,
        id a6)
{
  _BOOL8 v6; // x19
  double height; // d8
  double width; // d9
  id v10; // x21
  RemoteViewBridgeViewController *v11; // x20
  void *v12; // x22
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v6 = a5;
  height = a4.height;
  width = a4.width;
  v10 = objc_retain(a6);
  v11 = objc_retainAutoreleasedReturnValue(-[RemoteViewController remoteViewController](self, "remoteViewController"));
  v12 = objc_retainAutoreleasedReturnValue(-[RemoteViewBridgeViewController serviceViewControllerProxy](v11, "serviceViewControllerProxy"));
  objc_msgSend(v12, "serviceRequestSizeChange:immediate:fenceRight:", v6, v10, width, height);
  objc_release(v10);
  objc_release(v12);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v11);
}