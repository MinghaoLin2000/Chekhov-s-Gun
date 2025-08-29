_AEPutAttributePtr
OSErr __cdecl AEPutAttributePtr(
        AppleEvent *theAppleEvent,
        AEKeyword theAEKeyword,
        DescType typeCode,
        const void *dataPtr,
        Size dataSize)
{
  return _AEPutAttributePtr(theAppleEvent, theAEKeyword, typeCode, dataPtr, dataSize);
}