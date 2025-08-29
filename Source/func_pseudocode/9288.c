-[TSPDocumentRevision compareSequenceFromRevision:]
signed __int64 __cdecl -[TSPDocumentRevision compareSequenceFromRevision:](TSPDocumentRevision *self, SEL a2, id a3)
{
  id v4; // x19
  int sequence; // w21
  signed __int64 v6; // x20
  int v7; // w20

  v4 = objc_retain(a3);
  sequence = self->_sequence;
  if ( sequence <= (int)objc_msgSend(v4, "sequence") )
  {
    v7 = self->_sequence;
    if ( v7 >= (int)objc_msgSend(v4, "sequence") )
      v6 = 0LL;
    else
      v6 = -1LL;
  }
  else
  {
    v6 = 1LL;
  }
  objc_release(v4);
  return v6;
}