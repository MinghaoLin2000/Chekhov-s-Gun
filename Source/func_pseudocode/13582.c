-[TSULinkedPointerSetReverseEnumerator nextObject]
id __cdecl -[TSULinkedPointerSetReverseEnumerator nextObject](TSULinkedPointerSetReverseEnumerator *self, SEL a2)
{
  TSULinkedPointerSetEntry *mLastUsed; // x9
  TSULinkedPointerSetEntry *mPrevious; // x9
  id mObject; // x19
  TSULinkedPointerSetEntry *mTail; // x10
  id v6; // x0

  mLastUsed = self->mLastUsed;
  if ( mLastUsed )
  {
    mPrevious = mLastUsed->mPrevious;
    self->mLastUsed = mPrevious;
    if ( mPrevious )
    {
      mObject = mPrevious->mObject;
      if ( !mObject )
        return mObject;
LABEL_7:
      v6 = objc_autorelease(objc_retain(mObject));
      return mObject;
    }
  }
  mTail = self->mTail;
  if ( !mTail )
    return 0LL;
  mObject = mTail->mObject;
  self->mLastUsed = mTail;
  self->mTail = 0LL;
  if ( mObject )
    goto LABEL_7;
  return mObject;
}