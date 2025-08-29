-[TSPAVAssetResourceLoaderDelegate resourceLoader:shouldWaitForLoadingOfRequestedResource:]
bool __cdecl -[TSPAVAssetResourceLoaderDelegate resourceLoader:shouldWaitForLoadingOfRequestedResource:](
        TSPAVAssetResourceLoaderDelegate *self,
        SEL a2,
        id a3,
        id a4)
{
  id v5; // x19
  void *v6; // x21
  void *v7; // x21

  v5 = objc_retain(a4);
  if ( ((unsigned int)objc_msgSend(v5, "isCancelled") & 1) == 0 )
  {
    v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "contentInformationRequest"));
    objc_release(v6);
    if ( v6 )
      -[TSPAVAssetResourceLoaderDelegate _provideContentInformationToLoadingRequest:](
        self,
        "_provideContentInformationToLoadingRequest:",
        v5);
    v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "dataRequest"));
    objc_release(v7);
    if ( v7 )
      -[TSPAVAssetResourceLoaderDelegate _provideDataToLoadingRequest:](self, "_provideDataToLoadingRequest:", v5);
  }
  objc_release(v5);
  return 1;
}