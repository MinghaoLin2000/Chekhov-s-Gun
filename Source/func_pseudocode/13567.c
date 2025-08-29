-[TSUMutableLinkedPointerSet isEqual:]
bool __cdecl -[TSUMutableLinkedPointerSet isEqual:](TSUMutableLinkedPointerSet *self, SEL a2, id a3)
{
  __int64 v5; // x21
  unsigned int v6; // w0
  __int64 v7; // x20
  TSULinkedPointerSetEntry *mHead; // x19
  id mObject; // x0

  if ( a3 == self )
  {
    LOBYTE(v6) = 1;
  }
  else
  {
    v5 = objc_opt_class(a3);
    if ( v5 == objc_opt_class(self) )
    {
      v7 = *((_QWORD *)a3 + 2);
      mHead = self->mHead;
      if ( !mHead )
      {
LABEL_10:
        LOBYTE(v6) = v7 == 0;
        return v6;
      }
      while ( v7 )
      {
        mObject = mHead->mObject;
        if ( mObject != *(id *)(v7 + 8) )
        {
          v6 = (unsigned int)objc_msgSend(mObject, "isEqual:");
          if ( !v6 )
            return v6;
        }
        v7 = *(_QWORD *)(v7 + 24);
        mHead = mHead->mNext;
        if ( !mHead )
          goto LABEL_10;
      }
    }
    LOBYTE(v6) = 0;
  }
  return v6;
}