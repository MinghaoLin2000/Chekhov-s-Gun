-[TSPAVAssetResourceLoaderDelegate _provideContentInformationToLoadingRequest:]
void __cdecl -[TSPAVAssetResourceLoaderDelegate _provideContentInformationToLoadingRequest:](
        TSPAVAssetResourceLoaderDelegate *self,
        SEL a2,
        id a3)
{
  id v4; // x0
  dispatch_queue_s *requestHandlingQueue; // x20
  id v6; // x19
  _QWORD v7[4]; // [xsp+0h] [xbp-40h] BYREF
  id v8; // [xsp+20h] [xbp-20h]
  TSPAVAssetResourceLoaderDelegate *v9; // [xsp+28h] [xbp-18h]

  v4 = objc_retain(a3);
  requestHandlingQueue = (dispatch_queue_s *)self->_requestHandlingQueue;
  v7[0] = _NSConcreteStackBlock;
  v7[1] = 3254779904LL;
  v7[2] = sub_10000CFE4;
  v7[3] = &unk_1001D1228;
  v8 = v4;
  v9 = self;
  v6 = objc_retain(v4);
  dispatch_async(requestHandlingQueue, v7);
  objc_release(v8);
  objc_release(v6);
}