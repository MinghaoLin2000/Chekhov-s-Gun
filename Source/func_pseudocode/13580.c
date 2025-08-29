-[TSULinkedPointerSetEnumerator nextObject]
id __cdecl -[TSULinkedPointerSetEnumerator nextObject](TSULinkedPointerSetEnumerator *self, SEL a2)
{
  TSULinkedPointerSetEntry *mLastUsed; // x9
  TSULinkedPointerSetEntry *mNext; // x9
  id mObject; // x19
  TSULinkedPointerSetEntry *mHead; // x10
  id v6; // x0

  mLastUsed = self->mLastUsed;
  if ( mLastUsed )
  {
    mNext = mLastUsed->mNext;
    self->mLastUsed = mNext;
    if ( mNext )
    {
      mObject = mNext->mObject;
      if ( !mObject )
        return mObject;
LABEL_7:
      v6 = objc_autorelease(objc_retain(mObject));
      return mObject;
    }
  }
  mHead = self->mHead;
  if ( !mHead )
    return 0LL;
  mObject = mHead->mObject;
  self->mLastUsed = mHead;
  self->mHead = 0LL;
  if ( mObject )
    goto LABEL_7;
  return mObject;
}