-[TSUMutableLinkedPointerSet firstObject]
id __cdecl -[TSUMutableLinkedPointerSet firstObject](TSUMutableLinkedPointerSet *self, SEL a2)
{
  TSULinkedPointerSetEntry *mHead; // x8

  mHead = self->mHead;
  if ( mHead )
    return mHead->mObject;
  else
    return 0LL;
}