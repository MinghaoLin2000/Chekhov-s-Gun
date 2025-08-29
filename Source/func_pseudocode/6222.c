-[MediaConversionQueue enumerateCurrentlyProcessingAndQueuedEntries:]
void __cdecl -[MediaConversionQueue enumerateCurrentlyProcessingAndQueuedEntries:](
        MediaConversionQueue *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  MediaConversionQueueEntry *currentlyProcessingRequestQueueEntry; // x1
  NSMutableArray *queuedRequests; // x20
  _QWORD v7[4]; // [xsp+0h] [xbp-40h] BYREF
  id v8; // [xsp+20h] [xbp-20h]
  char v9; // [xsp+2Fh] [xbp-11h] BYREF

  v4 = objc_retain(a3);
  os_unfair_lock_assert_owner(&self->_queueStateLock);
  v9 = 0;
  currentlyProcessingRequestQueueEntry = self->_currentlyProcessingRequestQueueEntry;
  if ( !currentlyProcessingRequestQueueEntry
    || ((*((void (__fastcall **)(id, MediaConversionQueueEntry *, char *))v4 + 2))(
          v4,
          currentlyProcessingRequestQueueEntry,
          &v9),
        !v9) )
  {
    queuedRequests = self->_queuedRequests;
    v7[0] = _NSConcreteStackBlock;
    v7[1] = 3254779904LL;
    v7[2] = sub_1000103B4;
    v7[3] = &unk_1000411E0;
    v8 = objc_retain(v4);
    -[NSMutableArray enumerateObjectsUsingBlock:](queuedRequests, "enumerateObjectsUsingBlock:", v7);
    objc_release(v8);
  }
  objc_release(v4);
}